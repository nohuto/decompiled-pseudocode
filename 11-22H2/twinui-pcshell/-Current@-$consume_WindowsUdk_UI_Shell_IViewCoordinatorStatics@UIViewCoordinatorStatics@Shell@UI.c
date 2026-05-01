/*
 * XREFs of ?Current@?$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180018018
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180017C14 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_80fc32ba40679525b9bdda7c054c7fb2_@@CA@AEBUIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180017FF0 (-_lambda_invoker_cdecl_@_lambda_80fc32ba40679525b9bdda7c054c7fb2_@@CA@AEBUIViewCoordinatorStatic.c)
 *     ?RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800B363C (-RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::Current(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
