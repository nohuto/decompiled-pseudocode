/*
 * XREFs of ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180514450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180094388 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800ABA6C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18017F0D0 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_259a1410ba958232e2f70f54c5d031d1___ @ 0x1802054C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_259a1410ba958232e2f70f54c5d031d1___.c)
 *     _lambda_259a1410ba958232e2f70f54c5d031d1_::_lambda_259a1410ba958232e2f70f54c5d031d1_ @ 0x1802063D0 (_lambda_259a1410ba958232e2f70f54c5d031d1_--_lambda_259a1410ba958232e2f70f54c5d031d1_.c)
 *     _lambda_259a1410ba958232e2f70f54c5d031d1_::__lambda_259a1410ba958232e2f70f54c5d031d1_ @ 0x18020667C (_lambda_259a1410ba958232e2f70f54c5d031d1_--__lambda_259a1410ba958232e2f70f54c5d031d1_.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x1802DB10E (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18050C510 (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180517308 (-StartActivity@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x180518298 (-Stop@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::OnCommand(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2,
        const struct _GUID *a3)
{
  int FrameWrapper; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  GUID v20; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v21[40]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22[46]; // [rsp+1A0h] [rbp+A0h] BYREF
  OLECHAR sz[40]; // [rsp+310h] [rbp+210h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+398h] [rbp+298h]

  memset_0(sz, 0, sizeof(sz));
  if ( !StringFromGUID2(a3, sz, 40) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDCB,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80004005LL);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"OnApplicationFrameCommand");
  v21[0] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v21,
    sz);
  v18 = 0LL;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper((RTL_SRWLOCK *)this - 15, (__int64)a2, &v18);
  if ( FrameWrapper >= 0 )
  {
    v7 = *(_QWORD *)&a3->Data1 - ApplicationFrameCloseCommand;
    if ( *(_QWORD *)&a3->Data1 == ApplicationFrameCloseCommand )
      v7 = *(_QWORD *)a3->Data4 - 0x575B26E93947F081LL;
    if ( v7 )
    {
      v8 = *(_QWORD *)&a3->Data1 - ApplicationFrameEnteredSizeMoveCommand;
      if ( *(_QWORD *)&a3->Data1 == ApplicationFrameEnteredSizeMoveCommand )
        v8 = *(_QWORD *)a3->Data4 + 0x1834CA5B01340D52LL;
      if ( v8 )
      {
        v9 = *(_QWORD *)&a3->Data1 - ApplicationFrameExitedSizeMoveCommand;
        if ( *(_QWORD *)&a3->Data1 == ApplicationFrameExitedSizeMoveCommand )
          v9 = *(_QWORD *)a3->Data4 - 0x789E03E893229A8ALL;
        if ( v9 )
        {
          wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
            (__int64)v21,
            0);
LABEL_21:
          FrameWrapper = 0;
          goto LABEL_22;
        }
      }
    }
    v17 = 0LL;
    v16 = &v17;
    v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v16);
    v11 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this - 120, v10);
    FrameWrapper = v11;
    if ( v11 >= 0 )
    {
      *(_QWORD *)v19 = (char *)this - 120;
      v16 = (__int64 *)a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
      v20 = *a3;
      v12 = lambda_259a1410ba958232e2f70f54c5d031d1_::_lambda_259a1410ba958232e2f70f54c5d031d1_(
              (__int64)v22,
              &v16,
              &v20,
              &v17,
              v19,
              (__int64)v21);
      FrameWrapper = Windows::Internal::ComTaskPool::QueueTask__lambda_259a1410ba958232e2f70f54c5d031d1___(
                       v14,
                       v13,
                       *((_DWORD *)this + 213),
                       v12);
      lambda_259a1410ba958232e2f70f54c5d031d1_::__lambda_259a1410ba958232e2f70f54c5d031d1_(v22);
      if ( FrameWrapper >= 0 )
      {
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
        goto LABEL_21;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE10,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)FrameWrapper);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDDD,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
    goto LABEL_22;
  }
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::Stop(
    (TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v21,
    L"appFrameWrapper was not found");
LABEL_22:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v18);
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand((TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v21);
  return (unsigned int)FrameWrapper;
}
