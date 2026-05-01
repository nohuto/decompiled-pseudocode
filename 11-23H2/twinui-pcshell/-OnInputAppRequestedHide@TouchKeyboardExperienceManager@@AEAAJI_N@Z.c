/*
 * XREFs of ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18020AD94
 * Callers:
 *     ?Hide@TouchKeyboardExperienceManager@@UEAAJIE@Z @ 0x1805113A0 (-Hide@TouchKeyboardExperienceManager@@UEAAJIE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180094388 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800ABA6C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d5c88dcaa14c8e92d4b27569fe675d9e___ @ 0x180205A20 (Windows--Internal--ComTaskPool--QueueTask__lambda_d5c88dcaa14c8e92d4b27569fe675d9e___.c)
 *     _lambda_d5c88dcaa14c8e92d4b27569fe675d9e_::__lambda_d5c88dcaa14c8e92d4b27569fe675d9e_ @ 0x1802067C0 (_lambda_d5c88dcaa14c8e92d4b27569fe675d9e_--__lambda_d5c88dcaa14c8e92d4b27569fe675d9e_.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802DA4AE (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1802DA4AE.c)
 *     ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DA9B2 (--1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1805173B8 (-StartActivity@OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedHide(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        char a3)
{
  __int64 *v6; // rax
  int v7; // eax
  int v8; // edi
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17; // [rsp+34h] [rbp-CCh]
  __int64 v18[2]; // [rsp+38h] [rbp-C8h] BYREF
  void **v19; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v20[40]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"OnInputAppRequestedHideActivity_Queued");
  v20[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)v20,
    a2);
  if ( a2 == *((_DWORD *)this + 153) )
  {
    *((_DWORD *)this + 154) = 2;
    _InterlockedExchange((volatile __int32 *)this + 235, 0);
    *((_BYTE *)this + 944) = 0;
  }
  v14 = 0LL;
  v15 = &v14;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
  v7 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v16 = a2;
    v17 = a3;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v18, &v14);
    v18[1] = (__int64)this;
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      &v19,
      v20);
    v19 = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_d5c88dcaa14c8e92d4b27569fe675d9e___(
           v12,
           v11,
           *((_DWORD *)this + 243),
           (__int64)&v16);
    lambda_d5c88dcaa14c8e92d4b27569fe675d9e_::__lambda_d5c88dcaa14c8e92d4b27569fe675d9e_((__int64)&v16);
    if ( v8 >= 0 )
    {
      v8 = 0;
      goto LABEL_9;
    }
    v9 = (unsigned int)v8;
    v10 = 1335LL;
  }
  else
  {
    v9 = (unsigned int)v7;
    v10 = 1314LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v9);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::~OnInputAppRequestedHideActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)v20);
  return (unsigned int)v8;
}
