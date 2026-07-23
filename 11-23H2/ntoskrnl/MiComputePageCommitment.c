/*
 * XREFs of MiComputePageCommitment @ 0x1402E4D40
 * Callers:
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 *     MiPerformVadSplitting @ 0x14030B884 (MiPerformVadSplitting.c)
 *     MiCountCommittedPages @ 0x1406479AC (MiCountCommittedPages.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE38 (MI_PROTO_FORMAT_COMBINED.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 *     MiIsPteDecommittedPage @ 0x1402E4F94 (MiIsPteDecommittedPage.c)
 *     MiGetNextPageTable @ 0x1402E5940 (MiGetNextPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  int v7; // ebx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  _QWORD *v11; // r14
  int v12; // eax
  __int64 NextPageTable; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 v16; // r15
  unsigned __int64 v17; // r14
  _QWORD *v18; // r15
  __int64 v20; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // r15
  __int64 v27; // rdx
  _QWORD *CloneAddress; // rax
  bool v29; // cc
  unsigned __int64 v30; // [rsp+30h] [rbp-78h]
  _KPROCESS *Process; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+40h] [rbp-68h]
  __int64 v33; // [rsp+48h] [rbp-60h]
  unsigned int v34; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+10h]
  __int64 v36; // [rsp+C0h] [rbp+18h] BYREF
  char v37; // [rsp+C8h] [rbp+20h]

  v37 = a4;
  v34 = 0;
  v7 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v30 = Process[1].ActiveProcessors.StaticBitmap[28];
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( *(int *)(a3 + 52) < 0 )
  {
    v7 = 2;
    v10 = ((__int64)(v9 - v8) >> 3) + 1;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = a6;
  if ( a6 )
    *a6 = 0LL;
  if ( v8 <= v9 )
  {
    v12 = a5;
    do
    {
      NextPageTable = MiGetNextPageTable(v8, v9, 0, a4, v12, (__int64)&v34);
      v8 = NextPageTable;
      if ( !NextPageTable )
        return v10;
      v14 = 1LL;
      v15 = NextPageTable;
      v35 = 1LL;
      if ( v34 )
      {
        v20 = v34;
        do
        {
          v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v14 <<= 9;
          --v20;
        }
        while ( v20 );
        v35 = v14;
      }
      v32 = 8 * v14;
      v33 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v16 = *(_QWORD *)v15;
        if ( MiPteInShadowRange(v15)
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v16 & 1) != 0
          && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v22 = *((_QWORD *)&Flink->Flink + ((v15 >> 3) & 0x1FF));
            v23 = v16 | 0x20;
            if ( (v22 & 0x20) == 0 )
              v23 = v16;
            v16 = v23;
            if ( (v22 & 0x42) != 0 )
              v16 = v23 | 0x42;
          }
        }
        v36 = v16;
        if ( v16 )
        {
          if ( (unsigned int)MiIsPteDecommittedPage(&v36) )
            v7 |= 1u;
          else
            v7 &= ~1u;
          if ( (v7 & 2) != 0 )
          {
            if ( (v7 & 1) != 0 )
              v10 -= v35;
          }
          else if ( (v7 & 1) == 0 )
          {
            v10 += v35;
          }
          if ( v11 )
          {
            v17 = *(_QWORD *)(v30 + 344);
            if ( !v17 || (v7 & 1) != 0 )
              goto LABEL_19;
            if ( (v16 & 1) != 0 )
            {
              v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x220000000000LL;
              v25 = *(_QWORD *)(v24 + 40);
              if ( v25 < 0 && ((v25 & 0x10000000000LL) != 0 || *(__int64 *)(v24 + 8) <= 0) )
              {
                v26 = *(_QWORD *)(v24 + 8) | 0x8000000000000000uLL;
                goto LABEL_57;
              }
              goto LABEL_19;
            }
            if ( (v16 & 0x400) == 0 || MiIsPrototypePteVadLookup(v16) || MI_PROTO_FORMAT_COMBINED(v16, v27) )
              goto LABEL_19;
            if ( qword_140C65B40 && (v16 & 0x10) == 0 )
              v16 &= ~qword_140C65B40;
            v26 = v16 >> 16;
LABEL_57:
            CloneAddress = MiLocateCloneAddress((__int64)Process, v26);
            if ( !CloneAddress )
            {
LABEL_19:
              v11 = a6;
            }
            else
            {
              v29 = v17 <= CloneAddress[12];
              v11 = a6;
              if ( !v29 )
                ++*a6;
            }
          }
          v18 = a7;
          if ( a7
            && (v7 & 1) == 0
            && *(_QWORD *)(*(_QWORD *)(qword_140C673C8
                                     + 8
                                     * ((*(_QWORD *)(48
                                                   * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFFLL)
                                                   - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL))
                         + 200LL) != *v18 )
          {
            *v18 = 0LL;
          }
        }
        v8 += v32;
        v15 += 8LL;
      }
      while ( (v15 & 0xFFF) != 0 && v8 <= v9 );
      v12 = a5;
      if ( (a5 & 4) == 0 )
      {
        MiUnlockPageTableInternal(&Process[1].ActiveProcessors.StaticBitmap[26], v33);
        v12 = a5;
      }
      a4 = v37;
    }
    while ( v8 <= v9 );
  }
  return v10;
}
