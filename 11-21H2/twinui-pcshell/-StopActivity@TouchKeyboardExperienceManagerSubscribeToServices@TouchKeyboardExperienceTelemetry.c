/*
 * XREFs of ?StopActivity@TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@MEAAXXZ @ 0x1800BF7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017624 (-zInternalStop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C5DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1802DE088 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DE088.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices::StopActivity(
        TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices *this)
{
  int *v1; // rax
  int v3; // ecx
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  int *v8; // rdi
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+C0h] [rbp-80h] BYREF
  int v13; // [rsp+C4h] [rbp-7Ch] BYREF
  int v14; // [rsp+C8h] [rbp-78h] BYREF
  int v15; // [rsp+CCh] [rbp-74h] BYREF
  __int64 v16; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v18; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v19; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+100h] [rbp-40h] BYREF
  __int64 v23; // [rsp+108h] [rbp-38h] BYREF
  __int64 v24; // [rsp+110h] [rbp-30h] BYREF
  __int64 v25; // [rsp+118h] [rbp-28h] BYREF
  __int64 v26[4]; // [rsp+120h] [rbp-20h] BYREF
  __int64 v27; // [rsp+150h] [rbp+10h] BYREF
  __int64 v28; // [rsp+158h] [rbp+18h] BYREF
  __int64 v29; // [rsp+160h] [rbp+20h] BYREF
  __int64 v30; // [rsp+168h] [rbp+28h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v8 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v5 = *(_DWORD **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                        v4,
                        _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      LODWORD(v27) = CurrentThreadId;
      LODWORD(v28) = *(_DWORD *)(v7 + 76);
      v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v5,
        (unsigned int)&unk_1806B7D8A,
        v7 + 8,
        0,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27);
    }
  }
  else
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v10 = *(_DWORD **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                         v9,
                         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v10 > 5u )
    {
      v16 = *((_QWORD *)v8 + 6);
      LODWORD(v27) = v8[17];
      LODWORD(v28) = v8[4];
      v17 = *((_QWORD *)v8 + 15);
      v18 = *((_QWORD *)v8 + 14);
      LODWORD(v29) = v8[26];
      v11 = *((_QWORD *)this + 6);
      v19 = *((_QWORD *)v8 + 12);
      v20 = *((_QWORD *)v8 + 11);
      LODWORD(v30) = v8[20];
      v21 = *((_QWORD *)v8 + 9);
      v12 = v8[8];
      v22 = *((_QWORD *)v8 + 3);
      v13 = *v8;
      v23 = *((_QWORD *)v8 + 16);
      v14 = v8[16];
      v24 = *((_QWORD *)v8 + 7);
      v15 = v8[2];
      v25 = 0x1000000LL;
      v26[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v10,
        (int)&dword_1806B7DFC,
        v11 + 8,
        (__int64)v26,
        (__int64)&v25,
        (__int64)&v15,
        (__int64)&v24,
        (__int64)&v14,
        (__int64)&v23,
        (__int64)&v13,
        (__int64)&v22,
        (__int64)&v12,
        (__int64)&v21,
        (__int64)&v30,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v29,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v16);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerSubscribeToServices *)((char *)this + 8));
}
