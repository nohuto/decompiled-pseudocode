/*
 * XREFs of ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18020B060
 * Callers:
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1805164C0 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180094388 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800ABA6C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4b0775d64c2392808fe7dff402e255dc___ @ 0x180205620 (Windows--Internal--ComTaskPool--QueueTask__lambda_4b0775d64c2392808fe7dff402e255dc___.c)
 *     _lambda_4b0775d64c2392808fe7dff402e255dc_::__lambda_4b0775d64c2392808fe7dff402e255dc_ @ 0x1802066D4 (_lambda_4b0775d64c2392808fe7dff402e255dc_--__lambda_4b0775d64c2392808fe7dff402e255dc_.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802DA4AE (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgRe_ea_1802DA4AE.c)
 *     ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x1802DA8C8 (--0ViewOptions@@QEAA@AEBU0@@Z.c)
 *     ??1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DA9DE (--1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x180517510 (-StartActivity@OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QE.c)
 *     ?EnablePreloadForUser@InputAppPreloader@KeyboardHosting@@QEAAXXZ @ 0x18052F1FC (-EnablePreloadForUser@InputAppPreloader@KeyboardHosting@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppRequestedShow(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // eax
  __int64 *v11; // rax
  int v12; // eax
  int v13; // ebx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  KeyboardHosting::InputAppPreloader *v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v21[3]; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v23; // [rsp+44h] [rbp-BCh]
  ViewOptions v24[14]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25[2]; // [rsp+90h] [rbp-70h] BYREF
  void **v26; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v27[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+368h] [rbp+268h]

  v21[1] = (__int64 *)a4;
  v8 = *(_DWORD *)(a4 + 4);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"OnInputAppRequestedShowActivity_Queued");
  v27[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)v27,
    a2,
    v8);
  if ( a2 == *(_DWORD *)(a1 + 612) )
  {
    *(_DWORD *)(a1 + 616) = 1;
    v9 = 1;
    while ( _InterlockedExchange((volatile __int32 *)(a1 + 840), 1) )
    {
      while ( *(_DWORD *)(a1 + 840) )
      {
        v10 = v9;
        if ( !v9 )
          goto LABEL_7;
        do
        {
          _mm_pause();
          --v10;
        }
        while ( v10 );
        if ( v9 >= 64 )
          v9 = 64;
        else
LABEL_7:
          v9 *= 2;
      }
    }
    *(_OWORD *)(a1 + 844) = *a3;
    _InterlockedExchange((volatile __int32 *)(a1 + 840), 0);
  }
  v20 = 0LL;
  v21[0] = &v20;
  v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v21);
  v12 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>(a1, v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = (unsigned int)v12;
    v15 = 1230LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v14);
    goto LABEL_19;
  }
  v22 = a2;
  v23 = *a3;
  ViewOptions::ViewOptions(v24, (const struct ViewOptions *)a4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v25, &v20);
  v25[1] = a1;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    &v26,
    v27);
  v26 = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_4b0775d64c2392808fe7dff402e255dc___(
          v17,
          v16,
          *(_DWORD *)(a1 + 972),
          (__int64)&v22);
  lambda_4b0775d64c2392808fe7dff402e255dc_::__lambda_4b0775d64c2392808fe7dff402e255dc_((__int64)&v22);
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v15 = 1287LL;
    goto LABEL_15;
  }
  v18 = *(KeyboardHosting::InputAppPreloader **)(a1 + 976);
  if ( v18 )
    KeyboardHosting::InputAppPreloader::EnablePreloadForUser(v18);
  v13 = 0;
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::~OnInputAppRequestedShowActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)v27);
  std::vector<Geometry::CRect>::_Tidy(a4 + 32);
  return (unsigned int)v13;
}
