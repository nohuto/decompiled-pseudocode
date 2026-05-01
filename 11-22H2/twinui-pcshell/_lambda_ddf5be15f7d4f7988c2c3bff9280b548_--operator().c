/*
 * XREFs of _lambda_ddf5be15f7d4f7988c2c3bff9280b548_::operator() @ 0x1804E2224
 * Callers:
 *     wil::details::lambda_call__lambda_ddf5be15f7d4f7988c2c3bff9280b548___::_lambda_call__lambda_ddf5be15f7d4f7988c2c3bff9280b548___ @ 0x1804E1D70 (wil--details--lambda_call__lambda_ddf5be15f7d4f7988c2c3bff9280b548___--_lambda_call__lambda_ddf5.c)
 *     _lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator() @ 0x1804E1E24 (_lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator().c)
 * Callees:
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180175258 (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall lambda_ddf5be15f7d4f7988c2c3bff9280b548_::operator()(__int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)a1 + 288LL) + 208LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 288LL),
    &SRWLock);
  UwpWindowWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
