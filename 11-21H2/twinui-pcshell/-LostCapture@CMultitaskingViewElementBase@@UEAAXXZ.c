/*
 * XREFs of ?LostCapture@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804BA2D0
 * Callers:
 *     ?LostCapture@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804C2B10 (-LostCapture@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewElementBase::LostCapture(CMultitaskingViewElementBase *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 232LL))(v2);
  CMultitaskingViewElementBase::_ResetCapture(this);
}
