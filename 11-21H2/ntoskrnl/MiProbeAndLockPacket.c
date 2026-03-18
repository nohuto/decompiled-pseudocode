/*
 * XREFs of MiProbeAndLockPacket @ 0x14031B810
 * Callers:
 *     MiProbeAndLockPages @ 0x14029C5B0 (MiProbeAndLockPages.c)
 *     IopProbeAndLockPages_1 @ 0x1403198A0 (IopProbeAndLockPages_1.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     MmLockPhysicalPagesByVa @ 0x14096A278 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiFaultInProbeAddress @ 0x14023C9F8 (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x14023CB20 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14023CB68 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbePacketContended @ 0x140274818 (MiProbePacketContended.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiProbeLockFrame @ 0x14031BAB0 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x14031BF80 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x14031C5D0 (MiSetProbePagesAhead.c)
 */

__int64 __fastcall MiProbeAndLockPacket(__int64 a1)
{
  int v1; // esi
  unsigned int v2; // ebp
  int v4; // eax
  unsigned __int64 v5; // rdi
  int v6; // ecx
  __int64 result; // rax
  __int64 i; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rbp
  __int64 *v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 + 72);
    if ( (v4 & 0x40) == 0 )
    {
      **(_QWORD **)(a1 + 56) = -1LL;
      v4 = *(_DWORD *)(a1 + 72);
    }
    v5 = 1LL;
    if ( (v4 & 0x20) == 0 )
      break;
    v9 = *(_QWORD *)(a1 + 8);
    if ( v9 < *(_QWORD *)(a1 + 152) || v9 > *(_QWORD *)(a1 + 160) )
      break;
    if ( (v1 & 0x3F) != 0 || !v1 || !MiProbePacketContended(a1) )
    {
      v10 = *(_QWORD *)(a1 + 168);
      if ( v10 == -1 )
      {
        v11 = *(_QWORD *)(a1 + 24);
        v12 = *(_QWORD *)v11;
        if ( v11 >= 0xFFFFF6FB7DBED000uLL
          && v11 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v12 & 1) != 0
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v15 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
            v16 = v12 | 0x20;
            if ( (v15 & 0x20) == 0 )
              v16 = v12;
            v12 = v16;
            if ( (v15 & 0x42) != 0 )
              v12 = v16 | 0x42;
          }
        }
        v23 = v12;
        v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFFLL;
      }
      else
      {
        v13 = v10 + ((*(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 152)) >> 12);
      }
      *(_QWORD *)(a1 + 136) = v13;
      if ( v13 > qword_140C50840 || (*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
      {
        v17 = *(_QWORD *)(a1 + 160) + 1LL;
        if ( *(_QWORD *)(a1 + 16) <= v17 )
          v17 = *(_QWORD *)(a1 + 16);
        v18 = (v17 - (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFF000uLL)) >> 12;
        if ( v18 > 1 )
        {
          v19 = *(_QWORD *)(a1 + 136);
          v20 = 512 - (v19 & 0x1FF);
          if ( v18 <= v20 )
            v20 = v18;
          if ( *(_QWORD *)(a1 + 168) == -1LL )
          {
            v21 = (__int64 *)(*(_QWORD *)(a1 + 24) + 8LL);
            if ( v20 > 1 )
            {
              do
              {
                v23 = *v21;
                v22 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFFLL;
                if ( v22 != v19 + 1 )
                  break;
                ++v21;
                ++v5;
                v19 = v22;
              }
              while ( v5 < v20 );
            }
          }
          else
          {
            v5 = v20;
          }
        }
      }
LABEL_11:
      result = MiProbeLockFrame(a1, v5);
      v2 = result;
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(a1 + 8) += v5 << 12;
      *(_QWORD *)(a1 + 24) += 8 * v5;
      if ( (*(_DWORD *)(a1 + 72) & 0x40) == 0 )
      {
        for ( i = *(_QWORD *)(a1 + 136); v5; --v5 )
        {
          **(_QWORD **)(a1 + 56) = i++;
          *(_QWORD *)(a1 + 56) += 8LL;
        }
      }
      goto LABEL_15;
    }
LABEL_31:
    MiUnlockProbePacketWorkingSet(a1);
    MiLockProbePacketWorkingSet(a1);
LABEL_15:
    ++v1;
    if ( *(_QWORD *)(a1 + 24) > *(_QWORD *)(a1 + 32) )
      return v2;
  }
  if ( (v1 & 0xF) == 0 && v1 && MiProbePacketContended(a1) )
    goto LABEL_31;
  LODWORD(v23) = 0;
  v6 = MiLockPageLeafPageTable(a1);
  if ( *(_QWORD *)(a1 + 48) == ZeroPte )
  {
LABEL_33:
    if ( v6 < 0 )
      return (unsigned int)v6;
    goto LABEL_11;
  }
  while ( 1 )
  {
    result = MiProbeLeafPteAccess(a1, &v23);
    if ( (int)result < 0 )
      return result;
    if ( !(_DWORD)v23 )
    {
      *(_QWORD *)(a1 + 136) = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1 + 48) >> 12) & 0xFFFFFFFFFFLL;
      MiSetProbePagesAhead(a1);
      goto LABEL_11;
    }
    if ( (_DWORD)v23 != 1 )
    {
      result = MiFaultInProbeAddress(a1);
      if ( (int)result < 0 )
      {
        ++dword_140C52A74;
        return result;
      }
    }
    v6 = MiLockPageLeafPageTable(a1);
    if ( *(_QWORD *)(a1 + 48) == ZeroPte )
      goto LABEL_33;
  }
}
