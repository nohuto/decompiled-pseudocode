/*
 * XREFs of ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180462280
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BEF4C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BF9E8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___ @ 0x1801AEE50 (Windows--Internal--ComTaskPool--QueueTask__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___.c)
 *     _lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_ @ 0x1801AF308 (_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_--_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_.c)
 *     _lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_ @ 0x1801AF4E8 (_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_--__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18022DB04 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18022E59E (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AEA8 (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180465628 (-StartActivity@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1804666CC (-Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::OnCommand(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int FrameWrapper; // ebx
  __int64 *v9; // rax
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20[2]; // [rsp+48h] [rbp-B8h] BYREF
  GUID v21; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v22[40]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23[46]; // [rsp+1A0h] [rbp+A0h] BYREF
  OLECHAR sz[40]; // [rsp+310h] [rbp+210h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+398h] [rbp+298h]

  memset_0(sz, 0, sizeof(sz));
  if ( !StringFromGUID2(a3, sz, 40) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE57,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80004005LL);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)"OnApplicationFrameCommand");
  v22[0] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v22,
    sz);
  v19 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    v6,
    v7);
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((RTL_SRWLOCK *)this - 15, (__int64)a2, (__int64)&v19);
  if ( FrameWrapper >= 0 )
  {
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand && *(_QWORD *)a3->Data4 == 0x575B26E93947F081LL
      || *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand
      && *(_QWORD *)a3->Data4 == 0xE7CB35A4FECBF2AEuLL
      || *(_QWORD *)&a3->Data1 == ApplicationFrameExitedSizeMoveCommand && *(_QWORD *)a3->Data4 == 0x789E03E893229A8ALL )
    {
      v18 = 0LL;
      v17 = &v18;
      v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v17);
      v10 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this - 120, v9);
      FrameWrapper = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE70,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
LABEL_15:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
        goto LABEL_19;
      }
      *(_QWORD *)v20 = (char *)this - 120;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
        1u,
        v11,
        v12);
      v17 = (__int64 *)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      v21 = *a3;
      v13 = lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_(
              (__int64)v23,
              &v17,
              &v21,
              &v18,
              v20,
              (__int64)v22);
      FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___(
                       v15,
                       v14,
                       *((_DWORD *)this + 263),
                       v13);
      lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_(v23);
      if ( FrameWrapper < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEA5,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)FrameWrapper);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
    }
    else
    {
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        (__int64)v22,
        0);
    }
    FrameWrapper = 0;
    goto LABEL_19;
  }
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::Stop(
    (TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v22,
    L"appFrameWrapper was not found");
LABEL_19:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v19);
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand((TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v22);
  return (unsigned int)FrameWrapper;
}
