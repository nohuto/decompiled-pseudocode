/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_2d53174db5bd530b0639d771bd9cbda1__void_ @ 0x1801FB354
 * Callers:
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x1800F3DDC (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     wistd::__function::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_ @ 0x1801FE3E8 (wistd--__function--__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl(void)_--__func_.c)
 */

__int64 __fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_2d53174db5bd530b0639d771bd9cbda1__void_(
        __int64 a1)
{
  __int64 *v2; // rdx

  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 112) = wistd::__function::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl_void__::__func__lambda_2d53174db5bd530b0639d771bd9cbda1__void___cdecl_void__(a1 + 8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v2);
  return a1;
}
