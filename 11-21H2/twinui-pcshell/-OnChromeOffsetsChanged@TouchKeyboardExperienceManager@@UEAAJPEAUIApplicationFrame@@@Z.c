/*
 * XREFs of ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180462080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BEF4C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___ @ 0x1801AECF0 (Windows--Internal--ComTaskPool--QueueTask__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___.c)
 *     _lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::_lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_ @ 0x1801AF21C (_lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_--_lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_.c)
 *     _lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_ @ 0x1801AF484 (_lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_--__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18022DB04 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18022E07E (--1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18022E59E (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?StartActivity@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180465590 (-StartActivity@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18046645C (-Stop@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::OnChromeOffsetsChanged(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int FrameWrapper; // ebx
  __int64 *v7; // rax
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20[44]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+218h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"OnApplicationChromeOffsetsChanged");
  *(_QWORD *)v19 = &TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)v19);
  v17 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    v4,
    v5);
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((RTL_SRWLOCK *)this - 15, (__int64)a2, (__int64)&v17);
  if ( FrameWrapper >= 0 )
  {
    v16 = 0LL;
    v15 = &v16;
    v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
    v8 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this - 120, v7);
    FrameWrapper = v8;
    if ( v8 >= 0 )
    {
      v18 = (__int64)this - 120;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
        1u,
        v9,
        v10);
      v15 = (__int64 *)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      v11 = lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::_lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_(
              v20,
              (__int64 *)&v15,
              &v16,
              &v18,
              (__int64)v19);
      FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___(
                       v13,
                       v12,
                       *((_DWORD *)this + 263),
                       v11);
      lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_::__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5_(v20);
      if ( FrameWrapper >= 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
        FrameWrapper = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF42,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)FrameWrapper);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF21,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  }
  else
  {
    TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::Stop(
      (TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)v19,
      L"appFrameWrapper was not found");
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
  TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::~OnApplicationChromeOffsetsChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)v19);
  return (unsigned int)FrameWrapper;
}
