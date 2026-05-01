/*
 * XREFs of ?GetFactory@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics@UIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x180088F88
 * Callers:
 *     ??R_lambda_17915759651d00fc5bcd487b5cca7e74_@@QEBA@AEBUIExtensionFactoryStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x180088F08 (--R_lambda_17915759651d00fc5bcd487b5cca7e74_@@QEBA@AEBUIExtensionFactoryStatics@AppExtensions@Ap.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IExtensionFactoryStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IExtensionFactoryStatics>::GetFactory(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5)
{
  __int64 v5; // rcx
  int v7; // eax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v5 = *a1;
  v9 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v5 + 88LL))(
         v5,
         *a3,
         *a4,
         *a5,
         &v9);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  *a2 = v9;
  return a2;
}
