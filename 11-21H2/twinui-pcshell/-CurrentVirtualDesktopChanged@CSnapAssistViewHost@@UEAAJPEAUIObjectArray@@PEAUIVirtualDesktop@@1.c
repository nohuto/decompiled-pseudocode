/*
 * XREFs of ?CurrentVirtualDesktopChanged@CSnapAssistViewHost@@UEAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@Z @ 0x1804A3D60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIDismissAnimationController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A2D04 (--$As@UIDismissAnimationController@@@-$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBA.c)
 *     ??$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@P8IDismissAnimationController@@EAAXXZ@Z @ 0x1804A2DBC (--$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV-$ComPtr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnapAssistViewHost::CurrentVirtualDesktopChanged(
        CSnapAssistViewHost *this,
        struct IObjectArray *a2,
        struct IVirtualDesktop *a3,
        struct IVirtualDesktop *a4)
{
  int v5; // eax
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    (__int64)a4);
  v7[0] = 0LL;
  v5 = Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<IDismissAnimationController>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4,
         v7);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x14E,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
      (const char *)(unsigned int)v5);
  AsyncControllerHelpers::CallControllerAsync<IDismissAnimationController,>(v7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
  return 0LL;
}
