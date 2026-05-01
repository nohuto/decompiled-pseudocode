/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_3c6b3245d56e94aa13f25a05674a2632_@@@details@wil@@QEAA@XZ @ 0x18039290C
 * Callers:
 *     _SmartCookie::Unregister_::_1_::dtor$0 @ 0x1802C3F98 (_SmartCookie--Unregister_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn<_lambda_3c6b3245d56e94aa13f25a05674a2632_>::~ScopeExitFn<_lambda_3c6b3245d56e94aa13f25a05674a2632_>(
        _BYTE *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    *(_DWORD *)(*(_QWORD *)a1 + 120LL) = 0;
    result = *(_QWORD *)a1;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
    *(_QWORD *)(result + 112) = 0LL;
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  }
  return result;
}
