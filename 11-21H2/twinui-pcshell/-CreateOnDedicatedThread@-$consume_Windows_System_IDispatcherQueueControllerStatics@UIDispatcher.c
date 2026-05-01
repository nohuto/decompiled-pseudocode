/*
 * XREFs of ?CreateOnDedicatedThread@?$consume_Windows_System_IDispatcherQueueControllerStatics@UIDispatcherQueueControllerStatics@System@Windows@winrt@@@impl@winrt@@QEBA?AUDispatcherQueueController@System@Windows@3@XZ @ 0x180178528
 * Callers:
 *     ?subscribe_to_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800E2D80 (-subscribe_to_services@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     ?_lambda_invoker_cdecl_@_lambda_e9bebc7f8c018e57c97e4fe07c36625e_@@CA?AUDispatcherQueueController@System@Windows@winrt@@AEBUIDispatcherQueueControllerStatics@345@@Z @ 0x180178500 (-_lambda_invoker_cdecl_@_lambda_e9bebc7f8c018e57c97e4fe07c36625e_@@CA-AUDispatcherQueueControlle.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_System_IDispatcherQueueControllerStatics<winrt::Windows::System::IDispatcherQueueControllerStatics>::CreateOnDedicatedThread(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
