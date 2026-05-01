/*
 * XREFs of ?_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ @ 0x180074E38
 * Callers:
 *     _lambda_31520e38682400c193ecfa4924368fd9_::operator() @ 0x180074E7C (_lambda_31520e38682400c193ecfa4924368fd9_--operator().c)
 *     _lambda_3299b7567c8e16a49084b1350d61b7f6_::operator() @ 0x1800773D4 (_lambda_3299b7567c8e16a49084b1350d61b7f6_--operator().c)
 * Callees:
 *     <none>
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
