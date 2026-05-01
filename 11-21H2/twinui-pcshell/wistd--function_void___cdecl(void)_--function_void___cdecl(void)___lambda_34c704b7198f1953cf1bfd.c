/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_34c704b7198f1953cf1bfde36dd87a44__void_ @ 0x1801A99F8
 * Callers:
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x180114A18 (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     wistd::__function::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl(void)_::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl(void)_ @ 0x1801AA1B8 (wistd--__function--__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl(void)_--__func_.c)
 */

__int64 __fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_34c704b7198f1953cf1bfde36dd87a44__void_(
        __int64 a1)
{
  __int64 *v2; // rdx

  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 112) = wistd::__function::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl_void__::__func__lambda_34c704b7198f1953cf1bfde36dd87a44__void___cdecl_void__(a1 + 8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
  return a1;
}
