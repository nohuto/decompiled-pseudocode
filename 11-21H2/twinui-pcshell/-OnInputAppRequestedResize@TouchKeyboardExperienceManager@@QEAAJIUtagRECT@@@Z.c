/*
 * XREFs of ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x180462F1C
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x180473CE0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BEF4C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_78d65514523b09204dbef74fe9d00fb5___ @ 0x1801AEC40 (Windows--Internal--ComTaskPool--QueueTask__lambda_78d65514523b09204dbef74fe9d00fb5___.c)
 *     _lambda_78d65514523b09204dbef74fe9d00fb5_::__lambda_78d65514523b09204dbef74fe9d00fb5_ @ 0x1801AF45C (_lambda_78d65514523b09204dbef74fe9d00fb5_--__lambda_78d65514523b09204dbef74fe9d00fb5_.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18022DB04 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18022DEFE (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18022DEFE.c)
 *     ??1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AF2C (--1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x18046582C (-StartActivity@OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedResize(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        struct tagRECT *a3)
{
  __int64 *v6; // rax
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+34h] [rbp-CCh]
  __int64 v18[2]; // [rsp+48h] [rbp-B8h] BYREF
  void **v19; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v20[40]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+218h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"OnInputAppRequestedResizeActivity_Queued");
  v20[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *)v20,
    a2);
  v14 = 0LL;
  v15 = &v14;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
  v7 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v16 = a2;
    v17 = (__int128)*a3;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v18, &v14);
    v18[1] = (__int64)this;
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v19,
      (__int64)v20);
    v19 = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::`vftable';
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_78d65514523b09204dbef74fe9d00fb5___(
           v12,
           v11,
           *((_DWORD *)this + 293),
           (__int64)&v16);
    lambda_78d65514523b09204dbef74fe9d00fb5_::__lambda_78d65514523b09204dbef74fe9d00fb5_((__int64)&v16);
    if ( v8 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = (unsigned int)v8;
    v10 = 1714LL;
  }
  else
  {
    v9 = (unsigned int)v7;
    v10 = 1685LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v9);
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::~OnInputAppRequestedResizeActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *)v20);
  return (unsigned int)v8;
}
