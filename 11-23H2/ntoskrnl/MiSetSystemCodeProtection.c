/*
 * XREFs of MiSetSystemCodeProtection @ 0x1402845A0
 * Callers:
 *     MiSetImageProtection @ 0x14034BC20 (MiSetImageProtection.c)
 *     MmProtectDriverSection @ 0x14036EA10 (MmProtectDriverSection.c)
 *     MiProtectSystemImage @ 0x14081CF90 (MiProtectSystemImage.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     MiMarkPfnVerified @ 0x140219BD0 (MiMarkPfnVerified.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 *     MiGetPagePrivilege @ 0x140282FF0 (MiGetPagePrivilege.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140284A5C (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiOffsetToProtos @ 0x1402887D0 (MiOffsetToProtos.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPageEx @ 0x140347F38 (MiLockTransitionLeafPageEx.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v7; // r13
  unsigned int v8; // r15d
  unsigned int v9; // ebx
  unsigned __int64 v10; // r14
  unsigned int v11; // r12d
  int v12; // edx
  void *SessionVm; // rdi
  __int64 v14; // r9
  __int64 v15; // rdi
  BOOL v16; // ebx
  unsigned __int64 v17; // r15
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 ValidPte; // rbx
  unsigned __int64 v22; // rbx
  __int64 v23; // r12
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  __int64 v33; // r11
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  unsigned __int8 v40; // [rsp+20h] [rbp-168h]
  unsigned int v41; // [rsp+24h] [rbp-164h]
  unsigned int v42; // [rsp+28h] [rbp-160h]
  int v43; // [rsp+2Ch] [rbp-15Ch]
  void *v44; // [rsp+30h] [rbp-158h]
  __int64 v45; // [rsp+38h] [rbp-150h]
  int v46; // [rsp+40h] [rbp-148h] BYREF
  __int64 v47; // [rsp+48h] [rbp-140h] BYREF
  unsigned __int64 v48; // [rsp+50h] [rbp-138h]
  unsigned __int64 v49; // [rsp+58h] [rbp-130h] BYREF
  unsigned __int64 v50; // [rsp+60h] [rbp-128h]
  __int64 v51; // [rsp+68h] [rbp-120h]
  __int64 v52; // [rsp+70h] [rbp-118h]
  int v53; // [rsp+80h] [rbp-108h] BYREF
  __int16 v54; // [rsp+84h] [rbp-104h]
  __int16 v55; // [rsp+86h] [rbp-102h]
  __int64 v56; // [rsp+88h] [rbp-100h]
  __int64 v57; // [rsp+90h] [rbp-F8h]
  __int64 v58; // [rsp+98h] [rbp-F0h]
  _BYTE v59[152]; // [rsp+A0h] [rbp-E8h] BYREF

  v4 = a3;
  v50 = a3;
  v52 = a1;
  v41 = a4;
  v7 = 0LL;
  v55 = 0;
  v47 = 0LL;
  v8 = a4;
  memset(v59, 0, sizeof(v59));
  v9 = 1;
  if ( v8 != 24 && (v8 & 0x10) != 0 )
  {
    v8 &= ~0x10u;
    v43 = 1;
    v41 = v8;
  }
  else
  {
    v43 = 0;
  }
  v10 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v10) )
    return 1LL;
  v11 = v8;
  v42 = v8;
  if ( v8 == 256 )
  {
    v51 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    v45 = 0LL;
    v48 = 0LL;
  }
  else
  {
    v48 = v4;
    v51 = 0LL;
    v45 = 0LL;
    if ( (v8 & 5) == 5 )
    {
      v11 = v8 & 0xFFFFFFFE;
      v42 = v8 & 0xFFFFFFFE;
    }
    if ( (int)MiMakeDriverPagesPrivate(a1, a2, v4, (v11 >> 1) & 2) < 0 )
      return 0LL;
  }
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    SessionVm = (void *)MiGetSessionVm();
  }
  else
  {
    v12 = 0;
    SessionVm = &unk_140C69B40;
  }
  v44 = SessionVm;
  v56 = 20LL;
  v53 = v12;
  v54 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v40 = MiLockWorkingSetShared((__int64)SessionVm);
  if ( a2 <= v4 )
  {
    while ( 1 )
    {
      if ( !v7 )
        goto LABEL_36;
      if ( (a2 & 0xFFF) == 0 )
        break;
LABEL_14:
      if ( a2 > v48 )
      {
        v22 = v10 - *(_QWORD *)(v52 + 48);
        if ( v45 )
        {
          v23 = *(_QWORD *)(v45 + 16);
          v25 = 0LL;
          v45 = v23;
          v47 = 0LL;
        }
        else
        {
          MiFlushTbList(&v53);
          MiUnlockPageTableInternal(SessionVm, v7);
          MiUnlockWorkingSetShared((__int64)SessionVm, v40);
          v45 = MiOffsetToProtos(v51, v22, &v47);
          v23 = v45;
          MiLockWorkingSetShared((__int64)SessionVm);
          MiLockPageTableInternal((__int64)SessionVm, v7, 0, v24);
          v25 = v47;
        }
        v26 = *(unsigned int *)(v23 + 44) - (unsigned __int64)(*(_DWORD *)(v23 + 52) & 0x3FFFFFFF) - v25;
        v11 = (*(unsigned __int16 *)(v23 + 32) >> 1) & 0x1F;
        v42 = v11;
        v48 = a2 + 8 * (v26 - 1);
        if ( (v11 & 5) == 5 )
        {
          v11 &= ~1u;
          v42 = v11;
        }
      }
      v15 = *(_QWORD *)a2;
      v16 = MiPteInShadowRange(a2);
      if ( v16
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v28 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
          v29 = v15 | 0x20;
          if ( (v28 & 0x20) == 0 )
            v29 = v15;
          v15 = v29;
          if ( (v28 & 0x42) != 0 )
            v15 = v29 | 0x42;
        }
      }
      v49 = v15;
      if ( (v15 & 1) != 0 )
      {
        v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v49) >> 12) & 0xFFFFFFFFFFLL;
        v18 = 48 * v17 - 0x220000000000LL;
        if ( *(__int64 *)(v18 + 40) < 0 )
          goto LABEL_34;
        if ( (MiGetPagePrivilege(48 * v17 - 0x220000000000LL, 0, 0LL) & 0x40) != 0 )
        {
          if ( (v41 & 6) != 0 )
            goto LABEL_63;
        }
        else if ( (MiFlags & 0x8000) != 0 && (v41 & 4) != 0 && ((*(_QWORD *)(v18 + 40) >> 60) & 7) == 3 )
        {
LABEL_63:
          SessionVm = v44;
          v9 = 0;
          goto LABEL_37;
        }
        v19 = 0LL;
        v46 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v46);
          while ( *(__int64 *)(v18 + 24) < 0 );
        }
        *(_QWORD *)(v18 + 16) ^= (*(_DWORD *)(v18 + 16) ^ (32 * v11)) & 0x3E0;
        if ( v43 )
          MiMarkPfnVerified(48 * v17 - 0x220000000000LL, 4);
        if ( (v15 & 0x42) != 0 )
          v19 = MiCaptureDirtyBitToPfn(48 * v17 - 0x220000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v19 )
          MiReleasePageFileInfo(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v18 + 40) >> 43) & 0x3FFLL)), v19, 1LL);
        ValidPte = MiMakeValidPte(a2, v17, v42);
        if ( (v42 & 5) == 4 && (v15 & 0x42) != 0 )
          ValidPte |= 0x42uLL;
        MiWriteValidPteNewProtection(a2, ValidPte);
        if ( (MiFlags & 0x300) != 0 && !(unsigned int)MI_TIGHTER_PERMISSIONS(v15, ValidPte) )
        {
LABEL_34:
          v8 = v41;
          v4 = v50;
          goto LABEL_92;
        }
        v9 = 1;
        MiInsertTbFlushEntry((__int64)&v53, v10, 1LL, 0);
        v4 = v50;
        v8 = v41;
        goto LABEL_30;
      }
      if ( (v15 & 0x400) != 0 )
        goto LABEL_92;
      if ( (v15 & 0x800) == 0 )
      {
        if ( v15 && v8 != 256 )
        {
          v49 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)(32 * v11)) & 0x3E0;
          *(_QWORD *)a2 = v49;
        }
LABEL_92:
        v9 = 1;
LABEL_30:
        a2 += 8LL;
        v10 += 4096LL;
        goto LABEL_31;
      }
      if ( MiLockTransitionLeafPageEx(a2) )
      {
        v30 = MI_READ_PTE_LOCK_FREE(a2);
        v32 = v30;
        if ( qword_140C65B40 )
        {
          if ( (v30 & 0x10) != 0 )
            v30 &= ~0x10uLL;
          else
            v30 &= ~qword_140C65B40;
        }
        v33 = 48 * ((v30 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v34 = 32LL * (v11 & 0x1F);
        v35 = v34 | v32 & 0xFFFFFFFFFFFFFC1FuLL;
        v36 = *(_QWORD *)(v33 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
        v49 = v35;
        *(_QWORD *)(v33 + 16) = v34 | v36;
        v37 = v35;
        if ( v16 )
        {
          if ( (unsigned int)MiPteHasShadow(v34, v35, v31) )
          {
            v39 = v38;
            if ( !HIBYTE(word_140C66CFC) && (v38 & 1) != 0 )
              v39 = v38 | 0x8000000000000000uLL;
            *(_QWORD *)a2 = v39;
            MiWritePteShadow(a2, v39);
            goto LABEL_87;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v37 = v38;
            if ( (v38 & 1) != 0 )
              v37 = v38 | 0x8000000000000000uLL;
            goto LABEL_86;
          }
          *(_QWORD *)a2 = v38;
        }
        else
        {
LABEL_86:
          *(_QWORD *)a2 = v37;
        }
LABEL_87:
        _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_92;
      }
      v9 = 1;
LABEL_31:
      SessionVm = v44;
      if ( a2 > v4 )
        goto LABEL_37;
      v11 = v42;
    }
    MiFlushTbList(&v53);
    MiUnlockPageTableInternal(SessionVm, v7);
LABEL_36:
    v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)SessionVm, v7, 0, v14);
    goto LABEL_14;
  }
LABEL_37:
  MiFlushTbList(&v53);
  if ( v7 )
    MiUnlockPageTableInternal(SessionVm, v7);
  MiUnlockWorkingSetShared((__int64)SessionVm, v40);
  return v9;
}
