/*
 * XREFs of ??$as@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18007D1CC
 * Callers:
 *     ?NumberOfTaskGroupItems@TaskViewFrame@@UEAAIXZ @ 0x18007D120 (-NumberOfTaskGroupItems@TaskViewFrame@@UEAAIXZ.c)
 *     ?DataSource@CachedDataSource@@QEBA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@XZ @ 0x180763924 (-DataSource@CachedDataSource@@QEBA-AUISwitchItemDataSource@Multitasking@ComposableShell@Internal.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(
           a2,
           &winrt::impl::guid_v<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>,
           &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
