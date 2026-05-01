/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x180079DF0
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800798A0 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??4?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180077A1C (--4-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     _lambda_31520e38682400c193ecfa4924368fd9_::_lambda_31520e38682400c193ecfa4924368fd9_ @ 0x180077C98 (_lambda_31520e38682400c193ecfa4924368fd9_--_lambda_31520e38682400c193ecfa4924368fd9_.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007A0F8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18013A0EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180143848 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_180143848.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEEA4 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x18030D538 (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___(
        _DWORD *a1,
        int *a2)
{
  unsigned int v4; // r14d
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // r14d
  _DWORD *v8; // rcx
  void *v10; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v12; // rdx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void *v14; // rbx
  HANDLE v15; // rax
  __int64 v16; // rdx
  void (*v17)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v18; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  LPINIT_ONCE v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+48h] [rbp-B8h]
  _DWORD *v23; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v24; // [rsp+58h] [rbp-A8h]
  int v25; // [rsp+60h] [rbp-A0h] BYREF
  char v26; // [rsp+64h] [rbp-9Ch]
  char v27; // [rsp+65h] [rbp-9Bh]
  __int64 v28; // [rsp+68h] [rbp-98h]
  void **v29; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v30[3]; // [rsp+78h] [rbp-88h] BYREF
  int v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  int *v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A8h] [rbp-58h] BYREF
  char v35; // [rsp+ACh] [rbp-54h]
  char v36[32]; // [rsp+B0h] [rbp-50h] BYREF
  int v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  LPVOID lpMem; // [rsp+E0h] [rbp-20h]
  char v40; // [rsp+E8h] [rbp-18h]
  __int64 v41; // [rsp+F0h] [rbp-10h]
  char v42[152]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v43; // [rsp+190h] [rbp+90h] BYREF
  __int128 v44; // [rsp+198h] [rbp+98h]
  __int64 v45; // [rsp+1A8h] [rbp+A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  if ( a1[14] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x821,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v18);
    CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual((CFramePresentationTelemetry::SetSystemVisual *)(a2 + 4));
    return 2147947423LL;
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v23 = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v24 = a1;
    v25 = *a2;
    v26 = *((_BYTE *)a2 + 4);
    v27 = *((_BYTE *)a2 + 5);
    v28 = *((_QWORD *)a2 + 1);
    v29 = &wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
    v30[0] = 0LL;
    v30[1] = &v29;
    v30[2] = 0LL;
    v31 = 0;
    v32 = 0LL;
    v33 = &v34;
    v34 = 0;
    v35 = 0;
    v40 = 0;
    v37 = 0;
    v38 = 0LL;
    lpMem = 0LL;
    v41 = 1LL;
    v43 = 0LL;
    memset_0(v42, 0, sizeof(v42));
    v44 = 0LL;
    v45 = 0LL;
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
      (__int64)&v29,
      (_QWORD *)a2 + 2);
    v29 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    v4 = a1[12];
    v5 = operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v5);
      v6[2] = 0LL;
      if ( v6 + 2 != &v23 )
      {
        v6[2] = v23;
        v23 = 0LL;
      }
      v6[3] = v24;
      lambda_31520e38682400c193ecfa4924368fd9_::_lambda_31520e38682400c193ecfa4924368fd9_(
        (__int64)(v6 + 4),
        (__int64)&v25);
      *v6 = off_18061F1F8;
    }
    else
    {
      v6 = 0LL;
    }
    v7 = SHTaskPoolQueueTask(3LL, 2LL, v4, 0LL, v6, 0LL);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    v29 = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v29);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v45);
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v43);
    if ( v40 )
    {
      v10 = lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v10);
      v40 = 0;
    }
    lpMem = 0LL;
    if ( v34 == 1 )
    {
      v34 = 2;
      Context = 0LL;
      if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v21 = &`CAppManagerLogging::Instance'::`2'::wrapper;
        Context = &qword_1807B3D58;
        qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
        qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        v22 = 0;
        wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v21, v12, v13);
      }
      _tlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context + 1), v36);
    }
    v34 = 3;
    if ( v31 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v30);
    v8 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v7 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    *((_QWORD *)a2 + 2) = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(a2 + 4);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a2 + 82);
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a2 + 76));
    if ( *((_BYTE *)a2 + 136) )
    {
      v14 = (void *)*((_QWORD *)a2 + 16);
      v15 = GetProcessHeap();
      HeapFree(v15, 0, v14);
      *((_BYTE *)a2 + 136) = 0;
    }
    *((_QWORD *)a2 + 16) = 0LL;
    if ( a2[18] == 1 )
    {
      a2[18] = 2;
      Context = 0LL;
      if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v21 = &`CAppManagerLogging::Instance'::`2'::wrapper;
        Context = &qword_1807B3D58;
        qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
        qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        v22 = 0;
        wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v21, v16, v17);
      }
      _tlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context + 1), a2 + 20);
    }
    a2[18] = 3;
    if ( a2[12] )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 6));
    return (unsigned int)v7;
  }
}
