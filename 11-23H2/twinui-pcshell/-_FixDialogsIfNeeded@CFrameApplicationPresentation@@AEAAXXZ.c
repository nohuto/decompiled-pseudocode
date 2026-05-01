/*
 * XREFs of ?_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ @ 0x18002527C
 * Callers:
 *     _lambda_31520e38682400c193ecfa4924368fd9_::operator() @ 0x1800250F0 (_lambda_31520e38682400c193ecfa4924368fd9_--operator().c)
 *     _lambda_3299b7567c8e16a49084b1350d61b7f6_::operator() @ 0x180026D3C (_lambda_3299b7567c8e16a49084b1350d61b7f6_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CFrameApplicationPresentation::_FixDialogsIfNeeded(CFrameApplicationPresentation *this)
{
  __int64 v1; // rcx

  if ( **((_QWORD **)this + 14) && !*((_DWORD *)this + 56) )
  {
    v1 = *((_QWORD *)this + 80);
    if ( v1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 192LL))(v1);
  }
}
