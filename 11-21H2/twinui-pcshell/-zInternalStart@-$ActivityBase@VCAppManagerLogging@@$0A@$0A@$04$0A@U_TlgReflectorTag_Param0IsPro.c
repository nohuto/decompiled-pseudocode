/*
 * XREFs of ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007A358
 * Callers:
 *     ?StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18002188C (-StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x180028310 (-StartActivity@ShowViewAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x18006CB6C (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180070F44 (-StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x180071344 (-StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1800C6B48 (-StartActivity@DeleteWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x1800E8930 (-StartActivity@LoadQuirksForPackage@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z @ 0x18014567C (-StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z.c)
 *     ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x1801901B4 (-StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z.c)
 *     ?StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ @ 0x1802E80F8 (-StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAAXXZ @ 0x1802E81F4 (-StartActivity@HandleApplicationRequestActivation@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ConsolidateView@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F8004 (-StartActivity@ConsolidateView@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F86C4 (-StartActivity@PrepareToSwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F87C0 (-StartActivity@PrepareToSwitchHelper@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F88BC (-StartActivity@SplitView@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ @ 0x1802F89B8 (-StartActivity@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z @ 0x1802F8AB4 (-StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     ?StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x180308490 (-StartActivity@SetApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1803085A8 (-StartActivity@SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180076664 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPINIT_ONCE v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v5 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v5, v3, v4);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  *(_DWORD *)v2 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
