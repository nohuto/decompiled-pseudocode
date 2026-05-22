/*
 * XREFs of ?UpdateCollection@CCompFrameStats@@UEAAXXZ @ 0x1801AA010
 * Callers:
 *     ?UpdateCollection@CTouchFrameStats@@UEAAXXZ @ 0x1801A4510 (-UpdateCollection@CTouchFrameStats@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompFrameStats::UpdateCollection(CCompFrameStats *this)
{
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  (*(void (__fastcall **)(CCompFrameStats *, _QWORD))(*(_QWORD *)this + 208LL))(this, 0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
}
