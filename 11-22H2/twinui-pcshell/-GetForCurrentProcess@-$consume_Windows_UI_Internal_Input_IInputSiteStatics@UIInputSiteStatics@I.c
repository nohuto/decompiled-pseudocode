/*
 * XREFs of ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180173B48
 * Callers:
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007FC60 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1800A2440 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 *     ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x1801734F4 (-Initialize@TouchGestureProcessor@@QEAAXXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_a5e19194432ba5e1a4e075778a86de15_@@CA@AEBUIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@Z @ 0x180173B20 (-_lambda_invoker_cdecl_@_lambda_a5e19194432ba5e1a4e075778a86de15_@@CA@AEBUIInputSiteStatics@Inpu.c)
 *     ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x180418798 (-GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ.c)
 *     ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180421040 (-OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 88LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
