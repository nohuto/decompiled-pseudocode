/*
 * XREFs of ?CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x1804701EC
 * Callers:
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1804773C0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180477A10 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF134 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BF970 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$PreviousPendingRequestCanceled@IIAEAY0L@$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY0L@$$CBD@Z @ 0x18046C560 (--$PreviousPendingRequestCanceled@IIAEAY0L@$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QE.c)
 *     ??1PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046F388 (--1PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18047A8F4 (-StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboard.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::CreatePendingShowRequest(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // r8
  int v12; // [rsp+20h] [rbp-188h] BYREF
  int v13; // [rsp+24h] [rbp-184h] BYREF
  RTL_SRWLOCK *v14; // [rsp+28h] [rbp-180h] BYREF
  _QWORD v15[40]; // [rsp+30h] [rbp-178h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"PendingRequestCreated");
  v15[0] = &TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::`vftable';
  LOBYTE(v8) = a4;
  TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::StartActivity(v15, a2, a3, v8);
  wil::AcquireSRWLockExclusive(&v14, (RTL_SRWLOCK *)(a1 + 416));
  if ( *(_BYTE *)(a1 + 388) )
  {
    v12 = *(_DWORD *)(a1 + 392);
    v13 = *(_DWORD *)(a1 + 396);
    TouchKeyboardExperienceTelemetryLogger::PreviousPendingRequestCanceled<unsigned int,unsigned int,char const (&)[11]>(
      &v13,
      &v12,
      v10);
    *(_BYTE *)(a1 + 389) = 0;
    *(_DWORD *)(a1 + 392) = 0;
    *(_DWORD *)(a1 + 396) = 11;
  }
  *(_BYTE *)(a1 + 388) = 1;
  *(_BYTE *)(a1 + 389) = a4;
  *(_DWORD *)(a1 + 392) = a3;
  *(_DWORD *)(a1 + 396) = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v15,
    v9);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
  TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::~PendingRequestCreated((TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated *)v15);
  return 0LL;
}
