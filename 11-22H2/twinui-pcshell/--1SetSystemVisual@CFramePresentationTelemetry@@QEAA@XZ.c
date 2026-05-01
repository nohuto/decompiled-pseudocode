/*
 * XREFs of ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x180023F24
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::_scalar_deleting_destructor_ @ 0x180021370 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___--_scala.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___ @ 0x180023CB0 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_31520e38682400c193ecfa4924368fd9___.c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180023D80 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     _CFrameApplicationPresentation::SetSystemVisual_::_1_::dtor$0 @ 0x1802BBE85 (_CFrameApplicationPresentation--SetSystemVisual_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180023FA8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18002421C (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18002421C.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18016B8F0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180395D28 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual(
        CFramePresentationTelemetry::SetSystemVisual *this)
{
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 312);
  wil::details::shared_buffer::reset((CFramePresentationTelemetry::SetSystemVisual *)((char *)this + 288));
  if ( *((_BYTE *)this + 120) )
  {
    v2 = (void *)*((_QWORD *)this + 14);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
    *((_BYTE *)this + 120) = 0;
  }
  *((_QWORD *)this + 14) = 0LL;
  if ( *((_DWORD *)this + 14) == 1 )
  {
    Context = 0LL;
    *((_DWORD *)this + 14) = 2;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v4 = &`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v5 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v4);
    }
    _tlgWriteActivityAutoStop<35184372088832,5>(*((_QWORD *)Context + 1), (char *)this + 64);
  }
  *((_DWORD *)this + 14) = 3;
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CFramePresentationTelemetry::SetSystemVisual *)((char *)this + 8));
}
