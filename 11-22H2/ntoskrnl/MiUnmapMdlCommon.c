/*
 * XREFs of MiUnmapMdlCommon @ 0x14061E248
 * Callers:
 *     MmUnmapReservedMapping @ 0x14061E980 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x140A2B510 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140211C4C (MiInsertLargeTbFlushEntry.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F450 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiDereferenceIoPages @ 0x140335F54 (MiDereferenceIoPages.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnmapMdlCommon(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, __int64 a4, ULONG_PTR a5)
{
  __int64 v5; // r12
  ULONG_PTR v8; // r15
  unsigned __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned __int64 v12; // r13
  char v13; // al
  char v14; // bl
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  __int64 v22; // r8
  int v23; // eax
  KIRQL v24; // al
  unsigned int v25; // r9d
  _QWORD *v26; // r13
  _QWORD *v27; // r8
  unsigned __int64 v28; // rbx
  __int64 SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v32; // eax
  bool v33; // zf
  ULONG_PTR v34; // r14
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rdi
  unsigned __int8 v37; // r15
  __int64 v38; // rbx
  unsigned __int8 v39; // al
  unsigned __int64 v40; // r12
  unsigned __int8 v41; // cl
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  __int64 v45; // rbx
  int v46; // r12d
  __int64 v47; // r8
  unsigned __int8 v48; // [rsp+30h] [rbp-D0h]
  _QWORD *v49; // [rsp+38h] [rbp-C8h]
  unsigned __int64 ValidPte; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  _QWORD *v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-90h]
  ULONG_PTR v57; // [rsp+78h] [rbp-88h]
  _QWORD v58[24]; // [rsp+80h] [rbp-80h] BYREF

  v5 = a2;
  LODWORD(BugCheckParameter3) = a3;
  v53 = a2;
  BugCheckParameter4 = a5;
  memset(v58, 0, 0xB8uLL);
  v58[3] = 0LL;
  v54 = (_QWORD *)(a4 + 48);
  LODWORD(v58[1]) = 20;
  v8 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v52 = v8 + 8 * a5;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v49 = (_QWORD *)v9;
  if ( (MI_READ_PTE_LOCK_FREE(v9) & 0x80u) == 0LL )
  {
    v55 = 0LL;
    v11 = 0LL;
    v57 = 1LL;
  }
  else
  {
    v55 = 1LL;
    v57 = 512LL;
    v11 = MiSwizzleInvalidPte(768LL);
  }
  v12 = 0LL;
  if ( v5 )
    v13 = MiLockWorkingSetShared(v5);
  else
    v13 = 17;
  v48 = v13;
  if ( v8 < v52 )
  {
    while ( 1 )
    {
      if ( v13 == 17 )
        goto LABEL_13;
      if ( v12 )
      {
        if ( (v8 & 0xFFF) != 0 )
          goto LABEL_13;
        MiUnlockPageTableInternal(v5, v12);
      }
      v12 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v5, v12, 0, v10);
LABEL_13:
      if ( v55 )
      {
        ValidPte = MI_READ_PTE_LOCK_FREE(v9);
        v14 = ValidPte;
        v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFFLL;
        if ( v14 >= 0 || *v54 != v15 )
          KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, BugCheckParameter4);
        v16 = v11;
        if ( MiPteInShadowRange((unsigned __int64)v49) )
        {
          if ( MiPteHasShadow() )
          {
            v18 = 1;
            if ( !HIBYTE(word_140C66DFC) && (v11 & 1) != 0 )
              v16 = v11 | 0x8000000000000000uLL;
            goto LABEL_25;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v11 & 1) != 0 )
          {
            v16 = v11 | 0x8000000000000000uLL;
          }
        }
        v18 = 0;
LABEL_25:
        *v49 = v16;
        if ( v18 )
        {
          v19 = v16;
          v20 = (__int64)v49;
          MiWritePteShadow((__int64)v49, v19, v17);
        }
        else
        {
          v20 = (__int64)v49;
        }
        MiInsertLargeTbFlushEntry((__int64)v58, 1, v20);
        v9 = v20 + 8;
        v49 = (_QWORD *)v9;
        goto LABEL_42;
      }
      ValidPte = MI_READ_PTE_LOCK_FREE(v8);
      if ( (ValidPte & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, BugCheckParameter4);
      v21 = ZeroPte;
      v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFFLL;
      if ( MiPteInShadowRange(v8) )
      {
        if ( MiPteHasShadow() )
        {
          v23 = 1;
          if ( !HIBYTE(word_140C66DFC) && (ZeroPte & 1) != 0 )
            v21 = ZeroPte | 0x8000000000000000uLL;
          goto LABEL_39;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ZeroPte & 1) != 0 )
        {
          v21 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      v23 = 0;
LABEL_39:
      *(_QWORD *)v8 = v21;
      if ( v23 )
        MiWritePteShadow(v8, v21, v22);
      MiInsertTbFlushEntry((__int64)v58, (__int64)(v8 << 25) >> 16, 1LL, 0);
      v9 = (unsigned __int64)v49;
LABEL_42:
      v54 += v57;
      v8 += 8 * v57;
      if ( (ValidPte & 0x200) == 0
        && (v15 > qword_140C65CA0 || !_bittest64((const signed __int64 *)(48 * v15 - 0x21FFFFFFFFD8LL), 0x36u)) )
      {
        MiDereferenceIoPages(1, v15, v57);
      }
      v5 = v53;
      if ( v8 >= v52 )
        break;
      v13 = v48;
    }
  }
  MiFlushTbList((int *)v58);
  if ( v48 != 17 )
  {
    if ( v12 )
      MiUnlockPageTableInternal(v5, v12);
    MiUnlockWorkingSetShared(v5, v48);
  }
  if ( v55 )
  {
    v24 = ExAcquireSpinLockExclusive(&dword_140C685C0);
    v25 = 0;
    v26 = (_QWORD *)qword_140C685D0;
    v27 = (_QWORD *)qword_140C685D0;
    v28 = v24;
    if ( BugCheckParameter4 >> 9 != 1 )
    {
      do
      {
        v27 = (_QWORD *)*v27;
        ++v25;
      }
      while ( v25 < (BugCheckParameter4 >> 9) - 1 );
    }
    qword_140C685D0 = *v27;
    *v27 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C685C0);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v28 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
        v33 = (v32 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
        *(_DWORD *)(SchedulerAssist + 20) &= v32;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v28);
    v34 = ((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v35 = ((v52 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v36 = 0LL;
    v52 = v35;
    if ( v5 )
      v37 = MiLockWorkingSetShared(v5);
    else
      v37 = 17;
    if ( v34 < v35 )
    {
      while ( 1 )
      {
        if ( v37 != 17 )
        {
          if ( !v36 )
            goto LABEL_72;
          if ( (v34 & 0xFFF) == 0 )
            break;
        }
LABEL_73:
        v38 = (__int64)v26;
        v26 = (_QWORD *)*v26;
        ValidPte = MiMakeValidPte(v34, 0xAAAAAAAAAAAAAAABuLL * ((v38 + 0x220000000000LL) >> 4), 2415919110LL);
        v39 = MiLockPageInline(v38);
        *(_QWORD *)v38 = 0LL;
        v40 = v39;
        *(_QWORD *)(v38 + 8) = v34;
        _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          v41 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v41 <= 0xFu && v39 <= 0xFu && v41 >= 2u )
          {
            v42 = KeGetCurrentPrcb();
            v43 = v42->SchedulerAssist;
            v44 = ~(unsigned __int16)(-1LL << (v39 + 1));
            v33 = (v44 & v43[5]) == 0;
            v43[5] &= v44;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick((__int64)v42);
          }
        }
        __writecr8(v40);
        v45 = ValidPte;
        v46 = 0;
        if ( !MiPteInShadowRange(v34) )
          goto LABEL_87;
        if ( MiPteHasShadow() )
        {
          v46 = 1;
          if ( !HIBYTE(word_140C66DFC) )
            goto LABEL_85;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
LABEL_85:
          if ( (v45 & 1) != 0 )
            v45 |= 0x8000000000000000uLL;
        }
LABEL_87:
        *(_QWORD *)v34 = v45;
        if ( v46 )
          MiWritePteShadow(v34, v45, v47);
        v5 = v53;
        v34 += 8LL;
        if ( v34 >= v52 )
          goto LABEL_90;
      }
      MiUnlockPageTableInternal(v5, v36);
LABEL_72:
      v36 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v5, v36, 0, SchedulerAssist);
      goto LABEL_73;
    }
LABEL_90:
    if ( v37 != 17 )
    {
      if ( v36 )
        MiUnlockPageTableInternal(v5, v36);
      MiUnlockWorkingSetShared(v5, v37);
    }
  }
}
