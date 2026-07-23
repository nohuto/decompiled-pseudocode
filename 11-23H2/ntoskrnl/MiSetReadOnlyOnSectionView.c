/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x1402152F8
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A6A8 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiGetWsleProtection @ 0x140216124 (MiGetWsleProtection.c)
 *     MiSetWsleProtection @ 0x140216EC0 (MiSetWsleProtection.c)
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiGetProtoPteAddress @ 0x140273120 (MiGetProtoPteAddress.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiVadPureReserve @ 0x140277E00 (MiVadPureReserve.c)
 *     MiRevertValidPte @ 0x140278D10 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiUpdatePfnProtection @ 0x1402A3114 (MiUpdatePfnProtection.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiSetProtectionOnTransitionPte @ 0x140358810 (MiSetProtectionOnTransitionPte.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // r14
  int v9; // r12d
  unsigned int updated; // r15d
  ULONG_PTR v11; // rsi
  __int64 v12; // rbx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r12
  __int64 v17; // rbx
  __int64 ProtoPteAddress; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int WsleProtection; // eax
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rdx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  int v32; // r10d
  unsigned __int64 v33; // rbx
  int v34; // r8d
  unsigned __int64 v35; // rdx
  unsigned __int8 v36; // r10
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // r9d
  __int64 v41; // rdx
  int v42; // r10d
  unsigned __int8 v43; // r8
  unsigned __int8 v44; // r10
  bool v45; // zf
  int v46; // eax
  char v47; // [rsp+30h] [rbp-D0h]
  __int64 v49; // [rsp+40h] [rbp-C0h]
  unsigned int v50; // [rsp+48h] [rbp-B8h]
  unsigned int v51; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v52; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  _QWORD v56[24]; // [rsp+70h] [rbp-90h] BYREF

  v54 = a3;
  v7 = 0LL;
  v53 = 0LL;
  memset(v56, 0, 0xB8uLL);
  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  v51 = 0;
  LODWORD(v56[0]) = 1;
  v9 = 4;
  v50 = 4;
  WORD2(v56[0]) = 0;
  updated = 1;
  v56[2] = 0LL;
  LODWORD(v56[1]) = 20;
  v56[3] = 0LL;
  v55 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = v55;
  v12 = a1 + 1664;
  v13 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v49 = v12;
  v47 = MiLockWorkingSetShared(v12);
  while ( v11 <= v13 )
  {
    if ( (v11 & 0xFFF) == 0 || !v7 )
    {
      if ( v7 )
      {
        MiFlushTbList(v56);
        MiUnlockPageTableInternal(v12, v7);
      }
      MiMakeSystemAddressValid(v11, 0);
      v7 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    v14 = MI_READ_PTE_LOCK_FREE(v11);
    v52 = v14;
    v15 = v14;
    if ( !v14 )
      goto LABEL_25;
    if ( (v14 & 1) != 0 )
    {
      v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v52) >> 12) & 0xFFFFFFFFFFLL;
      v17 = 48 * v16 - 0x220000000000LL;
      if ( *(_WORD *)(v17 + 32) > 1u && (updated & 7) != 4 )
        goto LABEL_29;
      if ( *(__int64 *)(v17 + 40) < 0 )
      {
        ProtoPteAddress = MiGetProtoPteAddress(a2, (unsigned __int64)((__int64)(v11 << 25) >> 16) >> 12, 0LL, &v53);
        v21 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
        if ( v21 != ProtoPteAddress )
          goto LABEL_29;
        LOBYTE(v22) = MiGetWsleContents(v21, (__int64)(v11 << 25) >> 16, v19, v20);
        WsleProtection = MiGetWsleProtection((__int64)(v11 << 25) >> 16, v22);
        if ( WsleProtection != v50 && (WsleProtection || ((*(_DWORD *)(v17 + 16) >> 5) & 0x1F) != v50) )
          goto LABEL_29;
        MiSetWsleProtection(v24, (__int64)(v11 << 25) >> 16, updated);
        v25 = a2;
LABEL_13:
        MiRevertValidPte(v25, v11, updated, v16, (__int64)v56);
        v9 = v50;
LABEL_14:
        v12 = v49;
        goto LABEL_15;
      }
      v25 = a2;
      if ( ((*(_DWORD *)(v17 + 16) >> 5) & 0x1F) == (unsigned __int64)v50 )
      {
        updated = MiUpdatePfnProtection(a2, 48 * v16 - 0x220000000000LL, updated);
        goto LABEL_13;
      }
      v12 = v49;
LABEL_25:
      if ( v7 != ((v54 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      {
        MiFlushTbList(v56);
        if ( v7 )
        {
          MiUnlockPageTableInternal(v12, v7);
          v7 = 0LL;
        }
      }
      v51 = -1073741755;
      v13 = v11 - 8;
      v50 = 1;
      v11 = v55;
      v9 = 1;
      updated = 4;
    }
    else
    {
      if ( (v14 & 0x400) != 0 )
      {
        if ( (updated & 7) != 4 )
          goto LABEL_25;
        v28 = updated & 0x1F;
        MiPteInShadowRange(v11);
        if ( !(unsigned int)MiIsPrototypePteVadLookup(v15, v29, v30) )
        {
          v38 = MiSwizzleInvalidPte(32 * (v28 | 0xFFFFFFFFF8000020uLL));
          v40 = 0;
          v52 = v38;
          v41 = v38;
          if ( v42 )
          {
            if ( (unsigned int)MiPteHasShadow(v39, v38, v38) )
            {
              v44 = ++v40;
              if ( !HIBYTE(word_140C66CFC) )
              {
                v45 = (v43 & v44) == 0;
LABEL_53:
                if ( !v45 )
                  v41 |= 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v45 = (v43 & 1) == 0;
              goto LABEL_53;
            }
          }
          *(_QWORD *)v11 = v41;
          if ( v40 )
            MiWritePteShadow(v11, v41);
LABEL_29:
          v12 = v49;
          goto LABEL_25;
        }
        v33 = v15 & 0xFFFFFFFFFFFFFC1FuLL | (32 * v28);
        v34 = 0;
        v52 = v33;
        v35 = v33;
        if ( v32 )
        {
          if ( (unsigned int)MiPteHasShadow(v31, v33, 0LL) )
          {
            v36 = ++v34;
            if ( !HIBYTE(word_140C66CFC) )
            {
              v37 = ((unsigned __int8)v33 & v36) == 0;
LABEL_42:
              if ( !v37 )
                v35 |= 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v37 = (v33 & 1) == 0;
            goto LABEL_42;
          }
        }
        *(_QWORD *)v11 = v35;
        if ( v34 )
          MiWritePteShadow(v11, v35);
        goto LABEL_14;
      }
      if ( (v14 & 0x800) != 0 )
      {
        v46 = MiSetProtectionOnTransitionPte(a2, v11, updated, (updated & 7) == 4);
        if ( !v46 )
          goto LABEL_15;
        if ( v46 != 2 )
          goto LABEL_25;
      }
      else
      {
        if ( ((v14 >> 5) & 0x1F) != v9 )
          goto LABEL_25;
        v52 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(32 * updated)) & 0x3E0;
        *(_QWORD *)v11 = v52;
LABEL_15:
        v11 += 8LL;
      }
    }
  }
  MiFlushTbList(v56);
  if ( v7 )
    MiUnlockPageTableInternal(v12, v7);
  LOBYTE(v26) = v47;
  MiUnlockWorkingSetShared(v12, v26);
  return v51;
}
