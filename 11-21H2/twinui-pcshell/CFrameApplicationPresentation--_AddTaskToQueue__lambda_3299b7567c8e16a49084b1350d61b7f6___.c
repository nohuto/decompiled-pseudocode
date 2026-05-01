/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___ @ 0x180075540
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180075320 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___ @ 0x180071C8C (Windows--Internal--ComTaskPool--QueueTask__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180071F14 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180071F14.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180072110 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800767C0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18013A0EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEE4C (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x18030D4E0 (--1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___(
        _DWORD *a1,
        __int64 a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // edi
  __int64 v10; // rdx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v12; // rdx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+20h] [rbp-E0h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD *v16; // [rsp+30h] [rbp-D0h] BYREF
  LPINIT_ONCE v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+40h] [rbp-C0h]
  __int64 v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20[2]; // [rsp+60h] [rbp-A0h] BYREF
  void **v21; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[24]; // [rsp+78h] [rbp-88h] BYREF
  int v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+A8h] [rbp-58h]
  _BYTE v25[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v26[192]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v27[24]; // [rsp+190h] [rbp+90h] BYREF
  volatile signed __int32 *v28; // [rsp+1A8h] [rbp+A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  if ( a1[14] == 2 )
  {
    v8 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x821,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      fPending);
    CFramePresentationTelemetry::PresentWindow::~PresentWindow((CFramePresentationTelemetry::PresentWindow *)(a2 + 16));
  }
  else
  {
    v16 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    v19[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
    v20[0] = *(_QWORD *)a2;
    v19[1] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
    v20[1] = *(_QWORD *)(a2 + 8);
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)&v21,
      (_QWORD *)(a2 + 16));
    v4 = a1[12];
    v21 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___(v6, v5, v4, (__int64)v19);
    v21 = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v8 = v7;
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v21);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v28);
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)v27);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v26);
    if ( v24 == 1 )
    {
      v24 = 2;
      Context = 0LL;
      if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v17 = &`CAppManagerLogging::Instance'::`2'::wrapper;
        qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
        Context = &qword_1807B3D58;
        qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        v18 = 0;
        wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v17, v10, v11);
      }
      _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v25);
    }
    v24 = 3;
    if ( v23 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v22);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v20);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v19);
    if ( v8 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
    *(_QWORD *)(a2 + 16) = &CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(a2 + 16);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((volatile signed __int32 **)(a2 + 328));
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a2 + 304));
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a2 + 112));
    if ( *(_DWORD *)(a2 + 72) == 1 )
    {
      *(_DWORD *)(a2 + 72) = 2;
      Context = 0LL;
      if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v17 = &`CAppManagerLogging::Instance'::`2'::wrapper;
        Context = &qword_1807B3D58;
        qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
        qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        v18 = 0;
        wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v17, v12, v13);
      }
      _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), a2 + 80);
    }
    *(_DWORD *)(a2 + 72) = 3;
    if ( *(_DWORD *)(a2 + 48) )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 24));
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2);
  return (unsigned int)v8;
}
