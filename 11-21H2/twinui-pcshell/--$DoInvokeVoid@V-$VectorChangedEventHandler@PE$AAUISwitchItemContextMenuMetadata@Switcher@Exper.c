/*
 * XREFs of ??$DoInvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@V_lambda_0185f2fcaf29182e01e5e20f55c595fb_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_0185f2fcaf29182e01e5e20f55c595fb_@@@Z @ 0x18043FC18
 * Callers:
 *     ??$InvokeVoid@V?$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@PE$AAU?$IObservableVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@234@PE$AAUIVectorChangedEventArgs@234@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAU?$IObservableVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@PE$AAUIVectorChangedEventArgs@567@@Z @ 0x180440010 (--$InvokeVoid@V-$VectorChangedEventHandler@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experie.c)
 * Callees:
 *     __Platform_ReleaseSRWLockShared @ 0x180189344 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x18018938C (__Platform_AcquireSRWLockShared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall Platform::EventSource::DoInvokeVoid<Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,_lambda_0185f2fcaf29182e01e5e20f55c595fb_>(
        Platform::Details **a1,
        RTL_SRWLOCK *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  struct Platform::Details::EventLock *v6; // r8
  Platform::Details *TargetArray; // rsi
  void *v8; // rdx
  unsigned int TargetArraySize; // r15d
  unsigned int i; // ebx
  _QWORD **TargetArrayEvent; // rdi
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  __int64 *v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+28h] [rbp-60h] BYREF
  Platform::Details *v17; // [rsp+30h] [rbp-58h]
  _QWORD **v18; // [rsp+38h] [rbp-50h]
  _OWORD v19[3]; // [rsp+50h] [rbp-38h] BYREF

  v3 = a3;
  v17 = 0LL;
  v19[0] = 0LL;
  _Platform_AcquireSRWLockShared(a2);
  TargetArray = (Platform::Details *)Platform::Details::EventSourceGetTargetArray(*a1, v19, v6);
  _Platform_ReleaseSRWLockShared(a2);
  v17 = TargetArray;
  if ( TargetArray )
  {
    TargetArraySize = Platform::Details::EventSourceGetTargetArraySize(TargetArray, v8);
    LODWORD(v15) = TargetArraySize;
    for ( i = 0; ; ++i )
    {
      if ( i >= TargetArraySize )
        goto LABEL_10;
      v16 = 0LL;
      v18 = 0LL;
      TargetArrayEvent = (_QWORD **)Platform::Details::EventSourceGetTargetArrayEvent(
                                      TargetArray,
                                      (void *)i,
                                      (unsigned int)&_uuidof__AV__VectorChangedEventHandler_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows__,
                                      &v16,
                                      v15);
      v18 = TargetArrayEvent;
      v12 = v3[1];
      if ( *TargetArrayEvent == &Windows::Foundation::Collections::VectorChangedEventHandler<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>::`vftable'{for `__abi_IUnknown'} )
        break;
      v13 = ((__int64 (__fastcall *)(_QWORD **, _QWORD, __int64))(*TargetArrayEvent)[3])(TargetArrayEvent, *v3, v12);
      if ( v13 >= 0 )
        goto LABEL_6;
      __abi_WinRTraiseException(v13);
      v3 = a3;
      TargetArray = v17;
      TargetArraySize = (unsigned int)v15;
LABEL_9:
      ;
    }
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*TargetArrayEvent[37] + 8LL))(TargetArrayEvent[37], *v3, v12);
LABEL_6:
    ((void (__fastcall *)(_QWORD **))(*TargetArrayEvent)[2])(TargetArrayEvent);
    goto LABEL_9;
  }
LABEL_10:
  if ( TargetArray )
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)TargetArray + 16LL))(TargetArray);
  v14 = v3[1];
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( *v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
}
