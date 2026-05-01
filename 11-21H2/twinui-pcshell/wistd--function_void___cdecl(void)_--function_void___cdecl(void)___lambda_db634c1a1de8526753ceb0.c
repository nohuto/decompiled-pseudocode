/*
 * XREFs of wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_db634c1a1de8526753ceb0d769df7cf6__void_ @ 0x180193B3C
 * Callers:
 *     ?SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ @ 0x1800E1F68 (-SubscribeToShellReadyWnf@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     wistd::__function::__func__lambda_db634c1a1de8526753ceb0d769df7cf6__void___cdecl(void)_::__func__lambda_db634c1a1de8526753ceb0d769df7cf6__void___cdecl(void)_ @ 0x1801942EC (wistd--__function--__func__lambda_db634c1a1de8526753ceb0d769df7cf6__void___cdecl(void)_--__func_.c)
 */

__int64 __fastcall wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_db634c1a1de8526753ceb0d769df7cf6__void_(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r9

  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 112) = wistd::__function::__func__lambda_db634c1a1de8526753ceb0d769df7cf6__void___cdecl_void__::__func__lambda_db634c1a1de8526753ceb0d769df7cf6__void___cdecl_void__(
                            a1 + 8,
                            a2,
                            a3,
                            a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(v4 + 8));
  return a1;
}
