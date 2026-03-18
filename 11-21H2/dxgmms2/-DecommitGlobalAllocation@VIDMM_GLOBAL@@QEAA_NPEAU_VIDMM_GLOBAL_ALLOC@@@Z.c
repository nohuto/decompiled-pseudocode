/*
 * XREFs of ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D5C58
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00DA24C (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C007C408 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0083FB8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00860A8 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C008A158 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C009FC3C (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A8ADC (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::DecommitGlobalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC **a2,
        __int64 a3,
        __int64 a4)
{
  char v6; // bl
  char v7; // r15
  __int64 v9; // r8
  __int64 v10; // r9
  struct _VIDMM_GLOBAL_ALLOC *i; // r14
  PRKPROCESS *v12; // rcx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  v6 = 0;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a2 + 37));
  v7 = 1;
  if ( *((_WORD *)a2[66] + 2) == 2 && (*((_DWORD *)a2 + 19) & 0x40) != 0 )
  {
    *((_DWORD *)a2 + 18) |= 0x40u;
    v6 = 1;
  }
  DXGFASTMUTEX::Release(a2 + 37);
  if ( v6 )
  {
    if ( a2[15] )
    {
      VIDMM_GLOBAL::MarkGlobalAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0LL, 0LL);
      (*(void (__fastcall **)(struct _VIDMM_GLOBAL_ALLOC *, struct _VIDMM_GLOBAL_ALLOC **, _QWORD, _QWORD, _BYTE, _QWORD))(*(_QWORD *)a2[15] + 48LL))(
        a2[15],
        a2,
        0LL,
        0LL,
        0,
        0LL);
    }
    else if ( !(unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)a2) )
    {
      WdLogSingleEntry1(3LL, a2);
      return 0;
    }
  }
  if ( VIDMM_GLOBAL::IsPagingOperationPending(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0) )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)a2);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a2 + 37));
  if ( *((_WORD *)a2[66] + 2) == 3 )
  {
    if ( a2[30] )
      VIDMM_GLOBAL::EvictTemporaryAllocation((VIDMM_GLOBAL *)3, (struct _VIDMM_GLOBAL_ALLOC *)a2, v9, v10);
    for ( i = a2[34]; i != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 34); i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      v12 = (PRKPROCESS *)*((_QWORD *)i - 6);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*v12, &ApcState);
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)((char *)i - 56), 1);
      KeUnstackDetachProcess(&ApcState);
    }
    VIDMM_GLOBAL::UncommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0LL, v10);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a2[11] + 1) + 32LL) + 456LL),
      -(__int64)a2[1]);
  }
  else
  {
    v7 = 0;
    WdLogSingleEntry1(3LL, a2);
  }
  DXGFASTMUTEX::Release(a2 + 37);
  return v7;
}
