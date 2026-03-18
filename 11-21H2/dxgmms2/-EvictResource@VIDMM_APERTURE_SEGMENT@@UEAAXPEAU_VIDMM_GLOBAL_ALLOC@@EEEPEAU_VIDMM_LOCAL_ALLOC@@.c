/*
 * XREFs of ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00AA760
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C0002240 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0002298 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0085A0C (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0085A4C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0085EBC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00860A8 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086108 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008661C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00A5584 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A5F18 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A633C (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00A6554 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00A67B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00AAB04 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00D7968 (-IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::EvictResource(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  char v6; // r14
  char v7; // bl
  __int64 v10; // r8
  struct _VIDMM_LOCAL_ALLOC *v11; // rbp
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // r9
  void (__fastcall *v14)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD); // rbx
  struct _MDL *FullMDL; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  VIDMM_GLOBAL *v18; // rcx
  _DWORD *v19; // rax
  _DWORD *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  unsigned int PriorityClass; // eax
  _QWORD **v27; // r14
  _QWORD **v28; // r10
  __int64 v29; // rdx
  _QWORD *i; // r9
  __int64 v31; // rcx
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  signed __int32 v37[16]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v38; // [rsp+40h] [rbp-48h]
  __int128 v39; // [rsp+50h] [rbp-38h]
  __int128 v40; // [rsp+60h] [rbp-28h]

  v38 = 0LL;
  v6 = a4;
  v7 = a3;
  v39 = 0LL;
  v40 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v35 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v35 + 24) = a2;
    *(_QWORD *)(v35 + 32) = *((int *)a2 + 91);
  }
  if ( *((_DWORD *)a2 + 36) && (*((_DWORD *)a2 + 17) & 0x40000000) == 0 && g_IsInternalRelease )
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  v11 = a6;
  if ( !a6 )
    v11 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 11);
  v12 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 17);
  if ( ((unsigned int)v12 & 0x200000) != 0 || (*((_DWORD *)a2 + 18) & 0x400) != 0 )
    v7 = 0;
  v13 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v13 + 40168) )
  {
    if ( ((unsigned int)v12 & 0x10000000) != 0 )
    {
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v12, a2);
      v13 = *((_QWORD *)this + 1);
    }
    if ( (**((_DWORD **)a2 + 66) & 0x10000) != 0 )
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)v13, a2, 0);
    if ( v7 )
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64, __int64))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        v10,
        v13);
    if ( (*((_DWORD *)a2 + 17) & 0x800000) == 0 )
    {
      v14 = *(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD))(*(_QWORD *)this + 208LL);
      FullMDL = VidMmGetFullMDL(a2, v11);
      v37[12] = 0;
      v14(this, a2, *((_QWORD *)a2 + 1) >> 12, *((_QWORD *)a2 + 16) / 4096LL, *((_QWORD *)a2 + 16) / 4096LL, FullMDL, 0);
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    if ( v6 )
    {
      DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 17) = (unsigned int)v12 | 0x200000;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), a2, 1u);
  v18 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( *((_BYTE *)v18 + 40179) )
    VIDMM_GLOBAL::IoMmuUnmapAllocation(v18, a2, v11);
  v19 = (_DWORD *)*((_QWORD *)a2 + 66);
  v20 = (_DWORD *)((char *)a2 + 76);
  v21 = *v19 & 0x8000000;
  if ( (*v19 & 0x8000000) == 0 || (*v20 & 2) == 0 )
  {
    if ( (_DWORD)v21
      && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
    {
      *v20 |= 2u;
    }
    else
    {
      if ( (**((_DWORD **)a2 + 66) & 0x4000) != 0 )
        *((_QWORD *)a2 + 48) = 0LL;
      VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, v11);
      v20 = (_DWORD *)((char *)a2 + 76);
      if ( (*((_DWORD *)a2 + 19) & 2) != 0 )
      {
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
        *v20 &= ~2u;
      }
    }
  }
  v22 = *((_QWORD *)a2 + 17);
  if ( v22 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v16, v22, v17);
      v36[3] = *((_QWORD *)a2 + 17);
      v36[4] = *((int *)a2 + 33);
      v36[5] = *((unsigned int *)a2 + 32);
      v22 = *((_QWORD *)a2 + 17);
    }
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))(*(_QWORD *)this + 24LL))(
      this,
      a2,
      v22,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 17) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v21, v16, 0LL, v17);
  }
  v23 = (_QWORD *)((char *)a2 + 400);
  v24 = *((_QWORD *)a2 + 50);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v24 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400)
    || (v25 = (_QWORD *)*((_QWORD *)a2 + 51), (_QWORD *)*v25 != v23) )
  {
    __fastfail(3u);
  }
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  *v23 = 0LL;
  *((_QWORD *)a2 + 51) = 0LL;
  if ( v11 && *((_QWORD *)v11 + 1) && (*v20 & 4) == 0 )
    VidMmRecordAlloc(*((VIDMM_GLOBAL **)this + 1), (__int64)a2, (__int64)v11, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 15) + 312LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((_DWORD *)a2 + 98));
  v27 = (_QWORD **)((char *)a2 + 272);
  *(_QWORD *)(*((_QWORD *)a2 + 15) + 8LL * PriorityClass + 328) += *((_QWORD *)a2 + 2);
  v28 = (_QWORD **)*((_QWORD *)a2 + 34);
  while ( v28 != v27 )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              (VIDMM_PROCESS *)*(v28 - 6),
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 240LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v33 + 7184, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v33 + 8));
  }
  *(_WORD *)(*((_QWORD *)a2 + 66) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 66) + 32LL) = 0LL;
  *((_DWORD *)a2 + 17) &= ~0x1000000u;
  *((_QWORD *)a2 + 15) = 0LL;
  *((_DWORD *)a2 + 28) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
    *v20 |= 0x10u;
    *((_QWORD *)a2 + 57) = *(_QWORD *)(*((_QWORD *)this + 1) + 4632LL);
  }
  v29 = 1584LL * (*((_DWORD *)a2 + 17) & 0x3F);
  *(_QWORD *)(v29 + *(_QWORD *)(*((_QWORD *)this + 1) + 40224LL) + 1568) -= *((_QWORD *)a2 + 2);
  for ( i = *v27; i != v27; i = (_QWORD *)*i )
  {
    v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 240LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
    *(_QWORD *)(v34 + 240) -= *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
  v31 = *((_QWORD *)this + 1);
  _InterlockedOr(v37, 0);
  ++*(_QWORD *)(v31 + 40);
}
