/*
 * XREFs of ??$call_and_wait_for_completion@UILauncherStatics@System@Windows@@PEAUIUriRuntimeClass@Foundation@3@PEAUILauncherOptions@23@PEAPEAU?$IAsyncOperation@_N@53@$$ZPEAU453@PEAU623@@wil@@YA?A_PPEAUILauncherStatics@System@Windows@@P8123@EAAJPEAUIUriRuntimeClass@Foundation@3@PEAUILauncherOptions@23@PEAPEAU?$IAsyncOperation@_N@53@@Z$$QEAPEAU453@$$QEAPEAU623@@Z @ 0x18006DC88
 * Callers:
 *     ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x180070520 (-LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18006DF94 (--$wait_for_completion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType.c)
 *     ??_9ILauncherStatics@System@Windows@@$BEI@AA @ 0x18006ECB0 (--_9ILauncherStatics@System@Windows@@$BEI@AA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___call_and_wait_for_completion_UILauncherStatics_System_Windows__PEAUIUriRuntimeClass_Foundation_3_PEAUILauncherOptions_23_PEAPEAU__IAsyncOperation__N_53___ZPEAU453_PEAU623__wil__YA_A_PPEAUILauncherStatics_System_Windows__P8123_EAAJPEAUIUriRuntimeClass_Foundation_3_PEAUILauncherOptions_23_PEAPEAU__IAsyncOperation__N_53__Z__QEAPEAU453___QEAPEAU623__Z(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  v8 =  Windows::System::ILauncherStatics::`vcall'{72,{flat}}(a2, *a4, *a5, &v12);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x687,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v8,
      v10);
  wil::wait_for_completion<bool,wil::details::MapToSmartType<unsigned char,void>::type>(a1, v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return a1;
}
