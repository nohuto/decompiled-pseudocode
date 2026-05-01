/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VApplicationInitializationCallback@Xaml@UI@Windows@@@@YAXPE$ADVApplicationInitializationCallback@Xaml@UI@Windows@@@Z @ 0x180423B9C
 * Callers:
 *     __lambda_4e404f76813f09b8a512b4cb4bf79bdd_::operator()_::_1_::dtor$2 @ 0x180424743 (__lambda_4e404f76813f09b8a512b4cb4bf79bdd_--operator()_--_1_--dtor$2.c)
 *     __lambda_4e404f76813f09b8a512b4cb4bf79bdd_::operator()_::_1_::dtor$3 @ 0x18042474F (__lambda_4e404f76813f09b8a512b4cb4bf79bdd_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<Windows::UI::Xaml::ApplicationInitializationCallback>(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
