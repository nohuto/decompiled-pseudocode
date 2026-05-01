/*
 * XREFs of ?CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x1805220DC
 * Callers:
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x180528520 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x180528814 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800AC874 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AFF20 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$PreviousPendingRequestCanceled@IIAEAY0L@$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY0L@$$CBD@Z @ 0x18051E6D0 (--$PreviousPendingRequestCanceled@IIAEAY0L@$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QE.c)
 *     ??1PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1805214E8 (--1PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18052B594 (-StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboard.c)
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
  unsigned int *v11; // rdi
  unsigned int v13; // [rsp+20h] [rbp-198h] BYREF
  _DWORD v14[3]; // [rsp+24h] [rbp-194h] BYREF
  __int64 v15[40]; // [rsp+30h] [rbp-188h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"PendingRequestCreated");
  v15[0] = (__int64)&TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::`vftable';
  LOBYTE(v8) = a4;
  TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::StartActivity(v15, a2, a3, v8);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 400));
  v11 = (unsigned int *)(a1 + 380);
  if ( *(_BYTE *)(a1 + 376) )
  {
    v13 = *v11;
    v14[0] = *(_DWORD *)(a1 + 384);
    TouchKeyboardExperienceTelemetryLogger::PreviousPendingRequestCanceled<unsigned int,unsigned int,char const (&)[11]>(
      v14,
      &v13,
      v10);
    *(_BYTE *)(a1 + 377) = 0;
    *(_DWORD *)(a1 + 380) = 0;
    *(_DWORD *)(a1 + 384) = 11;
  }
  *(_BYTE *)(a1 + 376) = 1;
  *(_BYTE *)(a1 + 377) = a4;
  *v11 = a3;
  *(_DWORD *)(a1 + 384) = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v15, v9);
  if ( a1 != -400 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 400));
  TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::~PendingRequestCreated((TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated *)v15);
  return 0LL;
}
