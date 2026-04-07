/*
 * XREFs of ?StopCollection@CCompFrameStats@@UEAAXXZ @ 0x180002760
 * Callers:
 *     ?StopCollection@CAnimationFrameStats@@UEAAXXZ @ 0x180002730 (-StopCollection@CAnimationFrameStats@@UEAAXXZ.c)
 * Callees:
 *     ?Shutdown@CCompFrameStats@@IEAAXXZ @ 0x1800027E0 (-Shutdown@CCompFrameStats@@IEAAXXZ.c)
 *     ?CollectStats@CCompFrameStats@@IEAAX_K@Z @ 0x180002A1C (-CollectStats@CCompFrameStats@@IEAAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Invalidate@CCompFrameStats@@IEAAXXZ @ 0x18010AB50 (-Invalidate@CCompFrameStats@@IEAAXXZ.c)
 */

void __fastcall CCompFrameStats::StopCollection(CCompFrameStats *this)
{
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_QWORD *)this + 13) = (*(__int64 (__fastcall **)(CCompFrameStats *, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL);
  CCompFrameStats::CollectStats(this, 0LL);
  if ( *((_QWORD *)this + 12) < *((_QWORD *)this + 11) )
    CCompFrameStats::Invalidate(this);
  CCompFrameStats::Shutdown(this);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
}
