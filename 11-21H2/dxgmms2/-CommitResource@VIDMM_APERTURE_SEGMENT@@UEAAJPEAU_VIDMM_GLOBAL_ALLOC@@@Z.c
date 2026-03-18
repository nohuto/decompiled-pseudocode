/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AB5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0002298 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007BE50 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0085A4C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0085AA0 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085AC8 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0085EBC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008661C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A5F18 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00A67B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D78C0 (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  char v6; // r12
  char v7; // r15
  __int64 v8; // rdi
  _DWORD *v9; // rax
  struct _VIDMM_MDL *v10; // rbx
  _DWORD *v11; // rcx
  VIDMM_GLOBAL *v12; // rcx
  void (__fastcall *v13)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, bool); // rdi
  int v14; // ebx
  struct _MDL *FullMDL; // rax
  VIDMM_SEGMENT *v16; // rcx
  VIDMM_APERTURE_SEGMENT *v17; // rax
  VIDMM_APERTURE_SEGMENT **v18; // rdx
  int v19; // eax
  unsigned int v20; // edx
  int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  VIDMM_GLOBAL *v25; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  signed __int32 v35[8]; // [rsp+0h] [rbp-C8h] BYREF
  ULONG BugCheckOnFailure[2]; // [rsp+20h] [rbp-A8h]
  ULONG Priority[2]; // [rsp+28h] [rbp-A0h]
  __int64 v38; // [rsp+30h] [rbp-98h]
  __int64 v39; // [rsp+38h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v28 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v28 + 24) = a2;
    *(_QWORD *)(v28 + 32) = *((int *)a2 + 91);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    WdLogSingleEntry1(4LL, a2);
    return 3221226166LL;
  }
  v6 = 0;
  v7 = 0;
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  if ( (*((_DWORD *)a2 + 19) & 2) != 0 )
  {
    v6 = 1;
  }
  else if ( (*((_DWORD *)a2 + 18) & 0x400) == 0 )
  {
    LODWORD(v8) = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
    if ( (int)v8 < 0 )
      goto LABEL_52;
    v7 = 1;
    if ( (*(_DWORD *)(*((_QWORD *)this[1] + 3) + 436LL) & 4) == 0 && (*((_DWORD *)a2 + 18) & 0x8000) == 0 )
    {
      v9 = (_DWORD *)*((_QWORD *)a2 + 66);
      memset(&ApcState, 0, sizeof(ApcState));
      if ( (*v9 & 8) == 0 )
        KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 11) + 8LL), &ApcState);
      v10 = VidMmiProbeAndLockAllocation(
              a2,
              0LL,
              *((_QWORD *)a2 + 1),
              IoModifyAccess,
              (struct VIDMM_SEGMENT *)this,
              0LL);
      if ( (**((_DWORD **)a2 + 66) & 8) == 0 )
        KeUnstackDetachProcess(&ApcState);
      if ( !v10 )
      {
        WdLogSingleEntry1(3LL, a2);
        LODWORD(v8) = -1073741801;
LABEL_51:
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
        goto LABEL_52;
      }
      v11 = (_DWORD *)*((_QWORD *)a2 + 66);
      *((_QWORD *)a2 + 12) = v10;
      if ( (*v11 & 0x2000) != 0 )
      {
        v29 = *((_QWORD *)v10 + 1);
        if ( !((*(_BYTE *)(v29 + 10) & 5) != 0
             ? *(PVOID *)(v29 + 24)
             : MmMapLockedPagesSpecifyCache((PMDL)v29, 0, MmCached, 0LL, 0, 0x40000010u)) )
        {
          WdLogSingleEntry1(3LL, a2);
          LODWORD(v8) = -1073741801;
        }
      }
      if ( (int)v8 < 0 )
        goto LABEL_51;
    }
  }
  if ( (**((_DWORD **)a2 + 66) & 0x4000) != 0 && !*((_QWORD *)a2 + 48) )
  {
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 11) + 24LL));
    if ( !v31 )
    {
      WdLogSingleEntry1(1LL, a2);
      v39 = 0LL;
      v38 = 0LL;
      *(_QWORD *)Priority = 0LL;
      *(_QWORD *)BugCheckOnFailure = a2;
      DxgkLogInternalTriageEvent(v32, 0x40000LL);
      LODWORD(v8) = -1073741801;
      goto LABEL_50;
    }
    *((_QWORD *)a2 + 48) = v31;
  }
  v12 = this[1];
  if ( *((_BYTE *)v12 + 40179) )
  {
    v33 = VIDMM_GLOBAL::IoMmuMapAllocation(v12, a2);
    v8 = v33;
    if ( v33 < 0 )
    {
      _InterlockedIncrement(&dword_1C006E894);
      WdLogSingleEntry2(6LL, a2, v33);
      v39 = 0LL;
      v38 = 0LL;
      *(_QWORD *)Priority = v8;
      *(_QWORD *)BugCheckOnFailure = a2;
      DxgkLogInternalTriageEvent(v34, 262145LL);
LABEL_50:
      if ( v7 )
        goto LABEL_51;
LABEL_52:
      DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
      return (unsigned int)v8;
    }
  }
  if ( (*((_DWORD *)a2 + 18) & 0x400) == 0 )
  {
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
    v13 = (void (__fastcall *)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, bool))*((_QWORD *)*this + 25);
    v14 = **((_DWORD **)a2 + 66);
    FullMDL = VidMmGetFullMDL(a2, 0LL);
    v13(
      this,
      a2,
      *((_QWORD *)a2 + 1) >> 12,
      *((_QWORD *)a2 + 24) / 4096LL,
      *((_QWORD *)a2 + 24) / 4096LL,
      FullMDL,
      0,
      (v14 & 0x800004) == 4);
  }
  v16 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 25);
  *((_QWORD *)a2 + 16) = *((_QWORD *)a2 + 24);
  *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 23);
  *((_DWORD *)a2 + 28) = 2;
  *((_QWORD *)a2 + 15) = v16;
  *(_WORD *)(*((_QWORD *)a2 + 66) + 6LL) = VIDMM_SEGMENT::DriverId(v16);
  *(_QWORD *)(*((_QWORD *)a2 + 66) + 32LL) = *((_QWORD *)a2 + 16) + *(_QWORD *)(*((_QWORD *)a2 + 15) + 24LL);
  *((_DWORD *)a2 + 19) &= ~8u;
  v17 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400);
  *((_QWORD *)a2 + 25) = 0LL;
  *((_QWORD *)a2 + 24) = 0LL;
  *((_QWORD *)a2 + 23) = 0LL;
  *((_BYTE *)a2 + 82) = 1;
  v18 = (VIDMM_APERTURE_SEGMENT **)this[21];
  if ( *v18 != (VIDMM_APERTURE_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v17 = this + 20;
  *((_QWORD *)a2 + 51) = v18;
  *v18 = v17;
  this[21] = v17;
  if ( !*((_DWORD *)a2 + 16)
    || (v19 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this), (v20 & 0x1F) == v19)
    || (v21 = 0, ((v20 >> 6) & 0x1F) == v19) )
  {
    v21 = 0x1000000;
  }
  v22 = *((_QWORD *)a2 + 11);
  *((_DWORD *)a2 + 17) = v21 | *((_DWORD *)a2 + 17) & 0xFEFFFFFF;
  if ( v22 && *(_QWORD *)(v22 + 8) )
    VidMmRecordAlloc(this[1], (__int64)a2, v22, (__int64)this, *((_QWORD *)a2 + 2), 0);
  if ( (**((_DWORD **)a2 + 66) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[1], a2, 1u);
  v23 = 1584LL * (*((_DWORD *)a2 + 17) & 0x3F);
  *(_QWORD *)(v23 + *((_QWORD *)this[1] + 5028) + 1568) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 240LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
    *(_QWORD *)(v27 + 240) += *((_QWORD *)a2 + 2);
  }
  if ( v6 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 19) &= ~2u;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
  v25 = this[1];
  _InterlockedOr(v35, 0);
  ++*((_QWORD *)v25 + 5);
  return 0LL;
}
