/*
 * XREFs of ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x180462D8C
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180473890 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x180476080 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BEF4C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimationPart2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180155648 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimationPart2@@@de.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_09eec0bbc0ade630acfbce7628848781___ @ 0x1801AE8D0 (Windows--Internal--ComTaskPool--QueueTask__lambda_09eec0bbc0ade630acfbce7628848781___.c)
 *     _lambda_09eec0bbc0ade630acfbce7628848781_::__lambda_09eec0bbc0ade630acfbce7628848781_ @ 0x1801AF380 (_lambda_09eec0bbc0ade630acfbce7628848781_--__lambda_09eec0bbc0ade630acfbce7628848781_.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18022DB04 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18022DEFE (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_18022DEFE.c)
 *     ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AF00 (--1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x180465778 (-StartActivity@OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedHide(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        char a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rax
  int v9; // eax
  int v10; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v17; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+34h] [rbp-CCh]
  __int64 v20[2]; // [rsp+38h] [rbp-C8h] BYREF
  void **v21; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[40]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)"OnInputAppRequestedHideActivity_Queued");
  v22[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)v22,
    a2);
  if ( a2 == *((_DWORD *)this + 191) )
  {
    *((_DWORD *)this + 192) = 2;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputViewModernHostingAnimationPart2>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_InputViewModernHostingAnimationPart2>::GetImpl'::`2'::impl,
      1u,
      v6,
      v7);
    _InterlockedExchange((volatile __int32 *)this + 286, 0);
    *((_BYTE *)this + 1148) = 0;
  }
  v16 = 0LL;
  v17 = &v16;
  v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v17);
  v9 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v18 = a2;
    v19 = a3;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v20, &v16);
    v20[1] = (__int64)this;
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v21,
      (__int64)v22);
    v21 = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
    v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_09eec0bbc0ade630acfbce7628848781___(
            v14,
            v13,
            *((_DWORD *)this + 293),
            (__int64)&v18);
    lambda_09eec0bbc0ade630acfbce7628848781_::__lambda_09eec0bbc0ade630acfbce7628848781_((__int64)&v18);
    if ( v10 >= 0 )
    {
      v10 = 0;
      goto LABEL_9;
    }
    v11 = (unsigned int)v10;
    v12 = 1519LL;
  }
  else
  {
    v11 = (unsigned int)v9;
    v12 = 1344LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v11);
LABEL_9:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::~OnInputAppRequestedHideActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)v22);
  return (unsigned int)v10;
}
