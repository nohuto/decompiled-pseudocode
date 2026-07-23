/*
 * XREFs of MmProtectPool @ 0x140296EA0
 * Callers:
 *     ExProtectPoolEx @ 0x140296D3C (ExProtectPoolEx.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x140216FD0 (MiGetWsleContents.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiTbFlushType @ 0x14025B98C (MiTbFlushType.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiMakeProtectionMask @ 0x140276860 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F450 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140280B00 (MiFreeWsleList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140282FE0 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1402846AC (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteNewProtection @ 0x1402846E0 (MiWriteValidPteNewProtection.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x1402951BC (MiReleasePageFileInfo.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402E39BC (MI_WSLE_LOG_ACCESS.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPageEx @ 0x1403477B8 (MiLockTransitionLeafPageEx.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFindLargeMapping @ 0x14064156C (MiFindLargeMapping.c)
 *     MiLockNonPagedPoolPte @ 0x140641674 (MiLockNonPagedPoolPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x140666E90 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MmProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v7; // r15
  int v8; // r12d
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  int v11; // edx
  char *AnyMultiplexedVm; // r13
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int8 v16; // di
  signed __int64 v17; // rbx
  char v18; // al
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  int v21; // ebx
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v26; // r14
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  int v33; // r15d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // r14
  __int64 v38; // rax
  signed __int64 v39; // rax
  signed __int64 v40; // rdi
  signed __int64 v41; // rax
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  bool v46; // zf
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  int v50; // eax
  unsigned int v51; // ebx
  __int64 v52; // r9
  __int64 v53; // r9
  bool v54; // zf
  int v55; // r12d
  unsigned int v56; // r12d
  unsigned __int64 v57; // rdx
  int v58; // r15d
  __int64 v59; // rdx
  __int64 v60; // r14
  __int64 ValidPte; // rax
  signed __int64 v62; // rdi
  unsigned __int8 v63; // dl
  unsigned __int8 v64; // bl
  struct _KPRCB *v65; // r10
  _DWORD *v66; // r9
  int v67; // eax
  signed __int64 v68; // rax
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v70; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v73; // eax
  unsigned __int8 v74; // al
  unsigned __int8 v75; // bl
  struct _KPRCB *v76; // r10
  _DWORD *v77; // r9
  int v78; // eax
  int v79; // eax
  int v80; // ebx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  bool v84; // zf
  int v85; // eax
  char v86; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v87; // [rsp+21h] [rbp-DFh]
  unsigned __int64 v88; // [rsp+28h] [rbp-D8h] BYREF
  int v89; // [rsp+30h] [rbp-D0h]
  unsigned int v90; // [rsp+34h] [rbp-CCh]
  int v91; // [rsp+38h] [rbp-C8h] BYREF
  int v92; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v93; // [rsp+40h] [rbp-C0h]
  __int64 v94; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v95; // [rsp+50h] [rbp-B0h]
  _QWORD v96[24]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v97[24]; // [rsp+120h] [rbp+20h] BYREF

  v86 = 0;
  memset(v96, 0, 0xB8uLL);
  memset(v97, 0, 0xB8uLL);
  if ( (a3 & 0x10) != 0 && (MiFlags & 0x8000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v90 = ProtectionMask;
  LODWORD(v7) = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v8 = 0;
  v9 = a1 + a2 - 1;
  v89 = 0;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiGetSystemRegionType(a1);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  if ( v11 == 6 )
    goto LABEL_5;
  if ( v11 != 5 || (unsigned int)MiFindLargeMapping(a1, v9) )
    return 0LL;
  v8 = 1;
  v89 = 1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
LABEL_5:
  v13 = 0LL;
  v93 = 0LL;
  v96[3] = 0LL;
  LODWORD(v96[1]) = 20;
  v14 = *((unsigned __int16 *)AnyMultiplexedVm + 87);
  v95 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v94 = *(_QWORD *)(qword_140C674C8 + 8 * v14);
  v87 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v16 = v87;
  if ( v10 > v95 )
    goto LABEL_28;
  do
  {
    if ( !v13 )
      goto LABEL_7;
    if ( (v10 & 0xFFF) == 0 )
    {
      MiFlushTbList((int *)v96);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v13);
LABEL_7:
      v13 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v93 = v13;
      MiLockPageTableInternal((__int64)AnyMultiplexedVm, v13, 0, v15);
    }
    v17 = MI_READ_PTE_LOCK_FREE(v10);
    v88 = v17;
    v18 = AnyMultiplexedVm[184] & 7;
    if ( (_DWORD)v7 == 24 )
    {
      if ( v18 != 7 )
      {
        if ( (v17 & 1) != 0 )
        {
          v47 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v88);
          v48 = 0xFFFFDE0000000028uLL;
          if ( *(__int64 *)(48 * ((v47 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0 )
          {
            MiFlushTbList((int *)v96);
            v50 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
            v10 -= 8LL;
            v51 = v50;
            if ( v50 < 0 )
            {
              MiUnlockPageTableInternal(AnyMultiplexedVm, v13);
              MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v16);
              MiCopyOnWriteCheckConditions(AnyMultiplexedVm, v51);
              MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
              MiLockPageTableInternal((__int64)AnyMultiplexedVm, v13, 0, v52);
            }
            goto LABEL_27;
          }
          if ( dword_140C680E8 )
            MI_WSLE_LOG_ACCESS(AnyMultiplexedVm, v10);
          if ( (MiGetWsleContents(v48, (__int64)(v10 << 25) >> 16) & 0xF) == 8 )
            goto LABEL_27;
          v49 = MiTbFlushType((__int64)AnyMultiplexedVm);
          v97[2] = 0LL;
          v97[3] = 0LL;
          LODWORD(v97[0]) = v49;
          WORD2(v97[0]) = 4;
          v97[1] = 20LL;
          MiInsertTbFlushEntry((__int64)v97, (__int64)(v10 << 25) >> 16, 1LL, 0);
          if ( MiFreeWsleList((__int64)AnyMultiplexedVm, (__int64)v97, 0) )
            goto LABEL_27;
          goto LABEL_14;
        }
        if ( (v17 & 0x400) == 0 )
        {
          if ( (v17 & 0x800) == 0 )
          {
            v88 = v17 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            *(_QWORD *)v10 = v88;
            goto LABEL_27;
          }
          v26 = MiLockTransitionLeafPageEx(v10);
          if ( v26 )
          {
            v27 = MI_READ_PTE_LOCK_FREE(v10);
            v29 = 768LL;
            v28 = -225LL;
LABEL_38:
            v30 = v29 | v28 & v27;
            v31 = v29 | v28 & *(_QWORD *)(v26 + 16);
            v88 = v30;
            *(_QWORD *)(v26 + 16) = v31;
            v32 = v30;
            v33 = 0;
            if ( !MiPteInShadowRange(v10) )
            {
LABEL_39:
              *(_QWORD *)v10 = v32;
              if ( v33 )
                MiWritePteShadow(v10, v32);
              _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              LODWORD(v7) = v90;
              goto LABEL_26;
            }
            if ( (unsigned int)MiPteHasShadow(v35, v34, v36) )
            {
              v33 = 1;
              if ( HIBYTE(word_140C66DFC) )
                goto LABEL_39;
              v54 = (v30 & 1) == 0;
            }
            else
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                goto LABEL_39;
              v54 = (v30 & 1) == 0;
            }
            if ( !v54 )
              v32 = v30 | 0x8000000000000000uLL;
            goto LABEL_39;
          }
LABEL_14:
          v10 -= 8LL;
          goto LABEL_27;
        }
LABEL_88:
        MiFlushTbList((int *)v96);
        MiUnlockPageTableInternal(AnyMultiplexedVm, v13);
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v16);
        MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
        goto LABEL_90;
      }
      if ( v8 )
      {
        if ( (v17 & 1) == 0 )
          goto LABEL_27;
        v37 = MiLockNonPagedPoolPte(v10);
        v17 = MI_READ_PTE_LOCK_FREE(v10);
        v88 = v17;
      }
      else
      {
        if ( (v17 & 1) == 0 )
          goto LABEL_27;
        v37 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v88) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        v86 = MiLockPageInline(v37);
      }
      *(_QWORD *)(v37 + 16) = *(_QWORD *)(v37 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
      while ( 1 )
      {
        v38 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v88);
        v39 = MiSwizzleInvalidPte(v38 & 0xFFFFFFFFFF000LL | 0xB00);
        v40 = v39;
        if ( !v8 )
          break;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v39, v17);
        v46 = v17 == v41;
        v17 = v41;
        if ( v46 )
        {
          if ( (v88 & 0x200) != 0 )
            *(_QWORD *)(v37 + 24) = *(_QWORD *)(v37 + 24) & 0xC000000000000000uLL | 0x10000;
LABEL_73:
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_74;
        }
        v88 = v41;
      }
      v42 = 0;
      if ( MiPteInShadowRange(v10) )
      {
        if ( (unsigned int)MiPteHasShadow(v44, v43, v45) )
        {
          v42 = 1;
          if ( !HIBYTE(word_140C66DFC) )
          {
            v46 = (v40 & 1) == 0;
            goto LABEL_69;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v46 = (v40 & 1) == 0;
LABEL_69:
          if ( !v46 )
            v40 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v10 = v40;
      if ( v42 )
        MiWritePteShadow(v10, v40);
      goto LABEL_73;
    }
    if ( v18 != 7 )
    {
      if ( (v17 & 1) != 0 )
      {
        v19 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v88) >> 12) & 0xFFFFFFFFFFLL;
        v20 = 48 * v19 - 0x220000000000LL;
        if ( *(__int64 *)(v20 + 40) >= 0 )
        {
          v22 = (unsigned int)v7;
          LODWORD(v22) = v7 | 0x80000000;
          v23 = v17 & 0x7000000000000000LL | v17 & 0xF00000000000000LL | MiMakeValidPte(v10, v19, v22) & 0x80FFFFFFFFFFFFFFuLL;
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          if ( v17 == _InterlockedCompareExchange64((volatile signed __int64 *)v10, v23, v17) )
          {
            if ( (MiFlags & 0x100) == 0 || (LOBYTE(v85) = MI_TIGHTER_PERMISSIONS(v88, v23), v85) )
              MiInsertTbFlushEntry((__int64)v96, (__int64)(v10 << 25) >> 16, 1LL, 0);
            v24 = 0LL;
            v92 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v92);
              while ( *(__int64 *)(v20 + 24) < 0 );
            }
            *(_QWORD *)(v20 + 16) ^= (*(_DWORD *)(v20 + 16) ^ (32 * (_DWORD)v7)) & 0x3E0;
            if ( (v88 & 0x42) != 0 )
              v24 = MiCaptureDirtyBitToPfn(v20);
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v24 )
              MiReleasePageFileInfo(v94, v24, 1);
          }
          else
          {
            v10 -= 8LL;
          }
          goto LABEL_26;
        }
        MiFlushTbList((int *)v96);
        v21 = MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, 0xFFFFFFFFFFFFFFFFuLL, 0);
        if ( v21 >= 0 )
        {
          v16 = v87;
          goto LABEL_14;
        }
        MiUnlockPageTableInternal(AnyMultiplexedVm, v13);
        v16 = v87;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v87);
        MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v21);
LABEL_90:
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        MiLockPageTableInternal((__int64)AnyMultiplexedVm, v13, 0, v53);
        goto LABEL_14;
      }
      if ( (v17 & 0x400) == 0 )
      {
        if ( (v17 & 0x800) == 0 )
        {
          v88 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(32 * v7)) & 0x3E0;
          *(_QWORD *)v10 = v88;
          goto LABEL_27;
        }
        v26 = MiLockTransitionLeafPageEx(v10);
        if ( v26 )
        {
          v27 = MI_READ_PTE_LOCK_FREE(v10);
          v28 = -993LL;
          v29 = 32 * (v7 & 0x1F);
          goto LABEL_38;
        }
        goto LABEL_14;
      }
      goto LABEL_88;
    }
    v55 = v7;
    LOBYTE(v7) = v17;
    v56 = v55 | 0x80000000;
LABEL_100:
    v57 = v17;
    while ( 1 )
    {
      v58 = v7 & 1;
      if ( v58 )
      {
        v57 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v88);
      }
      else if ( qword_140C65C40 && (v57 & 0x10) == 0 )
      {
        v57 &= ~qword_140C65C40;
      }
      v59 = (v57 >> 12) & 0xFFFFFFFFFFLL;
      v60 = 48 * v59 - 0x220000000000LL;
      ValidPte = MiMakeValidPte(v10, v59, v56);
      v62 = ValidPte;
      if ( !v58 )
      {
        if ( (*(_QWORD *)(v60 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v91 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v60 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v91);
            while ( *(__int64 *)(v60 + 24) < 0 );
          }
          *(_QWORD *)(v60 + 24) = *(_QWORD *)(v60 + 24) & 0xC000000000000000uLL | 1;
          _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v62 |= 0x200uLL;
        }
        LODWORD(v7) = v90;
        v80 = 0;
        *(_QWORD *)(v60 + 16) ^= (*(_DWORD *)(v60 + 16) ^ (32 * v90)) & 0x3E0;
        if ( !MiPteInShadowRange(v10) )
          goto LABEL_160;
        if ( (unsigned int)MiPteHasShadow(v82, v81, v83) )
        {
          v80 = 1;
          if ( !HIBYTE(word_140C66DFC) )
          {
            v84 = (v62 & 1) == 0;
            goto LABEL_158;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v84 = (v62 & 1) == 0;
LABEL_158:
          if ( !v84 )
            v62 |= 0x8000000000000000uLL;
        }
LABEL_160:
        *(_QWORD *)v10 = v62;
        if ( v80 )
          MiWritePteShadow(v10, v62);
        v8 = v89;
        goto LABEL_26;
      }
      if ( !v89 )
        break;
      v60 = MiLockNonPagedPoolPte(v10);
      v7 = MI_READ_PTE_LOCK_FREE(v10);
      if ( v7 == v17 )
      {
        if ( (v17 & 0x200) != 0 )
          v62 |= 0x200uLL;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v68 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v62, v17);
        v46 = v17 == v68;
        v17 = v68;
        LOBYTE(v7) = v68;
        if ( !v46 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_DWORD)KiIrqlFlags
            && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
            && CurrentIrql <= 0xFu )
          {
            v70 = v86;
            if ( (unsigned __int8)v86 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v70 = v86;
              v73 = ~(unsigned __int16)(-1LL << (v86 + 1));
              v46 = (v73 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v73;
              if ( v46 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          else
          {
            v70 = v86;
          }
          __writecr8(v70);
          v88 = v17;
          goto LABEL_100;
        }
        v17 = v88;
        goto LABEL_134;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags && (v63 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0) && v63 <= 0xFu )
      {
        v64 = v86;
        if ( (unsigned __int8)v86 <= 0xFu && v63 >= 2u )
        {
          v65 = KeGetCurrentPrcb();
          v66 = v65->SchedulerAssist;
          v64 = v86;
          v67 = ~(unsigned __int16)(-1LL << (v86 + 1));
          v46 = (v67 & v66[5]) == 0;
          v66[5] &= v67;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick(v65);
        }
      }
      else
      {
        v64 = v86;
      }
      __writecr8(v64);
      v17 = v7;
      v57 = v7;
      v88 = v7;
    }
    v86 = 17;
    MiWriteValidPteNewProtection(v10, ValidPte);
LABEL_134:
    LODWORD(v7) = v90;
    v8 = v89;
    *(_QWORD *)(v60 + 16) ^= (*(_DWORD *)(v60 + 16) ^ (32 * v90)) & 0x3E0;
    if ( v8 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags && (v74 = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0) && v74 <= 0xFu )
      {
        v75 = v86;
        if ( (unsigned __int8)v86 <= 0xFu && v74 >= 2u )
        {
          v76 = KeGetCurrentPrcb();
          v77 = v76->SchedulerAssist;
          v75 = v86;
          v78 = ~(unsigned __int16)(-1LL << (v86 + 1));
          v46 = (v78 & v77[5]) == 0;
          v77[5] &= v78;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick(v76);
        }
      }
      else
      {
        v75 = v86;
      }
      __writecr8(v75);
      v17 = v88;
    }
    if ( (MiFlags & 0x100) != 0 )
    {
      LOBYTE(v79) = MI_TIGHTER_PERMISSIONS(v17, v62);
      if ( !v79 )
        goto LABEL_26;
    }
LABEL_74:
    MiInsertTbFlushEntry((__int64)v96, (__int64)(v10 << 25) >> 16, 1LL, 0);
LABEL_26:
    v16 = v87;
LABEL_27:
    v13 = v93;
    v10 += 8LL;
  }
  while ( v10 <= v95 );
LABEL_28:
  MiFlushTbList((int *)v96);
  if ( v13 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v13);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v16);
  return 1LL;
}
