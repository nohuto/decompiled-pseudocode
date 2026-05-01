/*
 * XREFs of ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1802DC070
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180094388 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___ @ 0x180205380 (Windows--Internal--ComTaskPool--QueueTask__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___.c)
 *     _lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_ @ 0x180206364 (_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_--_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_.c)
 *     _lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_ @ 0x18020664C (_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_--__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1802DB10E (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ??$?0$$V@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180507E8C (--$-0$$V@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@AEAA@U-$integ.c)
 *     ??1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18050C53C (--1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180518500 (-Stop@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnPositionChanged(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  int FrameWrapper; // ebx
  __int64 *v5; // rax
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15[80]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16[44]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+218h]

  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::OnApplicationFramePositionChanged(v15);
  v13 = 0LL;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((RTL_SRWLOCK *)this - 15, (__int64)a2, &v13);
  if ( FrameWrapper >= 0 )
  {
    v12 = 0LL;
    v11 = &v12;
    v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v11);
    v6 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this - 120, v5);
    FrameWrapper = v6;
    if ( v6 >= 0 )
    {
      v14 = (__int64)this - 120;
      v11 = (__int64 *)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
      v7 = lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::_lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_(
             v16,
             (__int64 *)&v11,
             &v12,
             &v14,
             (__int64)v15);
      FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___(
                       v9,
                       v8,
                       *((_DWORD *)this + 213),
                       v7);
      lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_::__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2_(v16);
      if ( FrameWrapper >= 0 )
        FrameWrapper = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDBF,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)FrameWrapper);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDA0,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  }
  else
  {
    TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Stop(
      (TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)v15,
      L"appFrameWrapper was not found");
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::~OnApplicationFramePositionChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)v15);
  return (unsigned int)FrameWrapper;
}
