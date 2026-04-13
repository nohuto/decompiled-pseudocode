/*
 * XREFs of _wil::details::RunFunctorWithExceptionFilter_::_1_::catch$0 @ 0x1800D5E3E
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RunFunctorWithExceptionFilter_::_1_::catch_0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 56) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 56) + 8LL))(
                           *(_QWORD *)(a2 + 56),
                           *(_QWORD *)(a2 + 64));
  return 0LL;
}
