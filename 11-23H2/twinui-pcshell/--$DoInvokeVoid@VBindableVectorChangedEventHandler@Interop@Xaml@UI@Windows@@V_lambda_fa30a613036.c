/*
 * XREFs of ??$DoInvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@V_lambda_fa30a613036bcec23797998bf71b5136_@@@EventSource@Platform@@AEAAXPEAUEventLock@Details@1@V_lambda_fa30a613036bcec23797998bf71b5136_@@@Z @ 0x18077B7A0
 * Callers:
 *     ??$InvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@PE$AAUIBindableObservableVector@2345@PE$AAVObject@Platform@@@EventSource@Platform@@QEAAXPEAUEventLock@Details@1@PE$AAUIBindableObservableVector@Interop@Xaml@UI@Windows@@PE$AAVObject@1@@Z @ 0x18077BC88 (--$InvokeVoid@VBindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@PE$AAUIBindableObserva.c)
 * Callees:
 *     __Platform_ReleaseSRWLockShared @ 0x1801C7950 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x1801C7998 (__Platform_AcquireSRWLockShared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall Platform::EventSource::DoInvokeVoid<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler,_lambda_fa30a613036bcec23797998bf71b5136_>(
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
                                      (unsigned int)&_uuidof__AU__abi_IDelegate_BindableVectorChangedEventHandler_Interop_Xaml_UI_Windows__,
                                      &v16,
                                      v15);
      v18 = TargetArrayEvent;
      v12 = v3[1];
      if ( *TargetArrayEvent == &Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler::`vftable'{for `__abi_IUnknown'} )
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
