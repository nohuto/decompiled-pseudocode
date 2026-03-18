/*
 * XREFs of MiSetSystemCodeProtection @ 0x14033EF50
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     MiSetImageProtection @ 0x14027E128 (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x14082B6F0 (MiProtectSystemImage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMarkPfnVerified @ 0x14026C644 (MiMarkPfnVerified.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiOffsetToProtos @ 0x140286F90 (MiOffsetToProtos.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x14033F3EC (MI_TIGHTER_PERMISSIONS.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v7; // r14d
  unsigned __int64 v8; // r12
  unsigned int v9; // r13d
  unsigned __int64 v10; // rbx
  __int64 SessionVm; // rax
  int v12; // edx
  unsigned __int64 v13; // r15
  __int64 v14; // r9
  unsigned int *v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r15
  unsigned __int64 ValidPte; // rbx
  unsigned int v25; // ebx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbx
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  unsigned int *v31; // r8
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int8 v40; // [rsp+20h] [rbp-E0h]
  unsigned int v41; // [rsp+24h] [rbp-DCh]
  __int64 v42; // [rsp+28h] [rbp-D8h]
  int v43; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int *i; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v46; // [rsp+48h] [rbp-B8h]
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v49; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v50; // [rsp+68h] [rbp-98h]
  __int64 v51; // [rsp+70h] [rbp-90h]
  unsigned __int64 v52; // [rsp+78h] [rbp-88h]
  int v53; // [rsp+80h] [rbp-80h] BYREF
  __int16 v54; // [rsp+84h] [rbp-7Ch]
  __int16 v55; // [rsp+86h] [rbp-7Ah]
  __int64 v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  _BYTE v59[152]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = a3;
  v46 = a3;
  v51 = a1;
  v41 = a4;
  v55 = 0;
  v48 = 0LL;
  v7 = a4;
  memset(v59, 0, sizeof(v59));
  if ( v7 != 24 && (v7 & 0x10) != 0 )
  {
    v7 &= ~0x10u;
    v43 = 1;
    v41 = v7;
  }
  else
  {
    v43 = 0;
  }
  v8 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
    return 1LL;
  v9 = v7;
  if ( v7 == 256 )
  {
    v27 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    v10 = 0LL;
    v52 = v27;
    v49 = 0LL;
  }
  else
  {
    v52 = 0LL;
    v10 = v4;
    v49 = v4;
    if ( (v7 & 5) == 5 )
      v9 = v7 & 0xFFFFFFFE;
    if ( (int)MiMakeDriverPagesPrivate(v51, a2, v4, (v9 >> 1) & 2) < 0 )
      return 0LL;
  }
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v42 = SessionVm;
  v54 = 0;
  v13 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v50 = 0LL;
  v56 = 20LL;
  v53 = v12;
  v40 = MiLockWorkingSetShared(SessionVm);
  if ( a2 > v4 )
  {
LABEL_38:
    v25 = 1;
    goto LABEL_39;
  }
  v15 = 0LL;
  for ( i = 0LL; ; v15 = i )
  {
    if ( !v13 )
      goto LABEL_37;
    if ( (a2 & 0xFFF) == 0 )
    {
      MiFlushTbList((__int64)&v53);
      MiUnlockPageTableInternal(v42, v13);
LABEL_37:
      v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v50 = v13;
      MiLockPageTableInternal(v42, v13, 0LL, v14);
      v15 = i;
    }
    if ( a2 > v10 )
    {
      v28 = v8 - *(_QWORD *)(v51 + 48);
      if ( v15 )
      {
        v31 = (unsigned int *)*((_QWORD *)v15 + 2);
        v30 = 0LL;
        i = v31;
        v48 = 0LL;
      }
      else
      {
        MiFlushTbList((__int64)&v53);
        MiUnlockPageTableInternal(v42, v13);
        MiUnlockWorkingSetShared(v42, v40);
        i = MiOffsetToProtos(v52, v28, &v48);
        MiLockWorkingSetShared(v42);
        MiLockPageTableInternal(v42, v13, 0LL, v29);
        v30 = v48;
        v31 = i;
      }
      v9 = (*((unsigned __int16 *)v31 + 16) >> 1) & 0x1F;
      v49 = a2 + 8 * (v31[11] - (unsigned __int64)(v31[13] & 0x3FFFFFFF) - v30 - 1);
      if ( (v9 & 5) == 5 )
        v9 &= ~1u;
    }
    v16 = MI_READ_PTE_LOCK_FREE(a2);
    v44 = v16;
    if ( (v16 & 1) != 0 )
      break;
    if ( (v16 & 0x400) != 0 )
      goto LABEL_32;
    if ( (v16 & 0x800) == 0 )
    {
      if ( v16 && v7 != 256 )
      {
        v44 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)(32 * v9)) & 0x3E0;
        *(_QWORD *)a2 = v44;
      }
      goto LABEL_32;
    }
    if ( MiLockTransitionLeafPageEx(a2, 0LL, 0) )
    {
      v32 = MI_READ_PTE_LOCK_FREE(a2);
      v33 = v32;
      if ( qword_140C50780 )
      {
        if ( (v32 & 0x10) != 0 )
          v32 &= ~0x10uLL;
        else
          v32 &= ~qword_140C50780;
      }
      v34 = 48 * ((v32 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v35 = 32LL * (v9 & 0x1F);
      v36 = v35 | v33 & 0xFFFFFFFFFFFFFC1FuLL;
      v37 = v36;
      v38 = *(_QWORD *)(v34 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
      v44 = v36;
      *(_QWORD *)(v34 + 16) = v35 | v38;
      if ( MiPteInShadowRange(a2) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v39 = v36;
          if ( !HIBYTE(word_140C51864) && (v36 & 1) != 0 )
            v39 = v36 | 0x8000000000000000uLL;
          *(_QWORD *)a2 = v39;
          MiWritePteShadow(a2, v39);
LABEL_79:
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_31:
          v7 = v41;
          v4 = v46;
LABEL_32:
          a2 += 8LL;
          v8 += 4096LL;
          goto LABEL_33;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          *(_QWORD *)a2 = v36;
          goto LABEL_79;
        }
        if ( (v36 & 1) != 0 )
          v37 = v36 | 0x8000000000000000uLL;
      }
      *(_QWORD *)a2 = v37;
      goto LABEL_79;
    }
LABEL_33:
    if ( a2 > v4 )
      goto LABEL_38;
    v13 = v50;
    v10 = v49;
  }
  v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v44) >> 12) & 0xFFFFFFFFFFLL;
  v18 = 48 * v17 - 0x220000000000LL;
  if ( *(__int64 *)(v18 + 40) < 0 )
    goto LABEL_31;
  if ( (MiGetPagePrivilege(48 * v17 - 0x220000000000LL, 0, 0LL) & 0x40) != 0 )
  {
    if ( (v41 & 6) != 0 )
      goto LABEL_55;
    goto LABEL_20;
  }
  if ( (MiFlags & 0x8000) == 0 || (v41 & 4) == 0 || ((*(_QWORD *)(v18 + 40) >> 60) & 7) != 3 )
  {
LABEL_20:
    v22 = 0LL;
    v47 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v47, v19, v20, v21);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    *(_QWORD *)(v18 + 16) ^= (*(_DWORD *)(v18 + 16) ^ (32 * v9)) & 0x3E0;
    if ( v43 )
      MiMarkPfnVerified(48 * v17 - 0x220000000000LL, 4);
    v23 = v44 & 0x42;
    if ( (v44 & 0x42) != 0 )
      v22 = MiCaptureDirtyBitToPfn(48 * v17 - 0x220000000000LL);
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v22 )
      MiReleasePageFileInfo(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v18 + 40) >> 43) & 0x3FFLL)), v22, 1);
    ValidPte = MiMakeValidPte(a2, v17, v9);
    if ( (v9 & 5) == 4 && v23 )
      ValidPte |= 0x42uLL;
    MiWriteValidPteNewProtection(a2, ValidPte);
    if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v44, ValidPte) )
      MiInsertTbFlushEntry((__int64)&v53, v8, 1LL, 0);
    goto LABEL_31;
  }
LABEL_55:
  v25 = 0;
LABEL_39:
  MiFlushTbList((__int64)&v53);
  if ( v50 )
    MiUnlockPageTableInternal(v42, v50);
  MiUnlockWorkingSetShared(v42, v40);
  return v25;
}
