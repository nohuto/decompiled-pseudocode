/*
 * XREFs of MiCountSystemImageCommitment @ 0x14020ABB4
 * Callers:
 *     MiSessionUpdateImageCharges @ 0x14020AAD4 (MiSessionUpdateImageCharges.c)
 * Callees:
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE38 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14020B148 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiGetSubsectionDriverProtos @ 0x1402A2974 (MiGetSubsectionDriverProtos.c)
 */

unsigned __int64 __fastcall MiCountSystemImageCommitment(__int64 a1)
{
  ULONG_PTR v2; // rbp
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 SessionVm; // rax
  int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 SharedVm; // rbx
  KIRQL v13; // al
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r12
  unsigned __int64 v17; // rbp
  unsigned int v18; // r14d
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-58h]
  KIRQL v28; // [rsp+80h] [rbp+8h]
  __int64 v29; // [rsp+88h] [rbp+10h]
  __int64 v30; // [rsp+90h] [rbp+18h]
  __int64 v31; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  if ( (*(_DWORD *)(a1 + 196) & 0x12) != 0 )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(a1 + 48)) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  if ( !*(_QWORD *)(a1 + 112) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v3 = MiSectionControlArea();
  if ( !*(_QWORD *)(v3 + 144) )
    return (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12;
  v27 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = v27;
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = MiGetAnyMultiplexedVm(1LL);
  v30 = SessionVm;
  v6 = *(_DWORD *)(v3 + 56) & 0x800;
  v7 = SessionVm;
  v8 = 0LL;
  v31 = MiFreePrivateFixupEntryForSystemImage(v2);
  SharedVm = MiGetSharedVm(v7, v9, v10, v11);
  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v15 = v3 + 128;
  v28 = v13;
  v29 = v3 + 128;
  if ( v3 != -128 )
  {
    v16 = v31;
    while ( 1 )
    {
      v14 = *(_DWORD *)(v15 + 52) & 0x3FFFFFFF;
      v17 = (unsigned int)(*(_DWORD *)(v15 + 44) - v14);
      if ( (*(_BYTE *)(v15 + 32) & 0x3Eu) >= 8 )
      {
        v4 += 8LL * (unsigned int)(*(_DWORD *)(v15 + 44) - v14);
      }
      else
      {
        if ( !MiGetSubsectionDriverProtos(v15) )
        {
          v18 = 0;
          if ( !v17 )
            goto LABEL_21;
          while ( 1 )
          {
            v19 = v8;
            if ( v16 )
            {
              v14 = *(_QWORD *)(*(_QWORD *)(v16 + 40) + 8LL);
              if ( ((*(char *)(((unsigned __int64)(unsigned int)((v4 - v27) >> 3) >> 3) + v14) >> (((v4 - v27) >> 3) & 7)) & 1) != 0 )
                goto LABEL_29;
            }
            v20 = MI_READ_PTE_LOCK_FREE(v4);
            v31 = v20;
            if ( v20 )
              break;
LABEL_19:
            ++v18;
            v4 += 8LL;
            if ( v18 >= v17 )
            {
              v15 = v29;
              goto LABEL_21;
            }
          }
          if ( !v6 )
          {
            if ( (v20 & 1) != 0 )
            {
              v22 = MI_READ_PTE_LOCK_FREE(&v31);
              if ( (MiGetWsleContents(
                      0xFFFFFFFFFFLL,
                      v4 << 25 >> 16,
                      v23,
                      48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) & 0xF) != 9 )
              {
                v25 = *(_QWORD *)(v24 + 40);
                if ( v25 < 0 )
                {
                  if ( (v25 & 0x10000000000LL) != 0 || (v26 = *(_QWORD *)(v24 + 8), v26 < 0) || !v26 )
                  {
                    if ( (*(_DWORD *)(v24 + 16) & 0x400LL) != 0 )
                      goto LABEL_19;
                  }
                }
              }
            }
            else if ( (v20 & 0x400) != 0 )
            {
              ++v8;
              if ( !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v20) )
                v8 = v19;
              goto LABEL_19;
            }
          }
LABEL_29:
          ++v8;
          goto LABEL_19;
        }
        v4 += 8 * v17;
      }
      v8 += v17;
LABEL_21:
      v15 = *(_QWORD *)(v15 + 16);
      v29 = v15;
      if ( !v15 )
      {
        v7 = v30;
        v13 = v28;
        break;
      }
    }
  }
  LOBYTE(v14) = v13;
  MiUnlockWorkingSetExclusive(v7, v14);
  return v8;
}
