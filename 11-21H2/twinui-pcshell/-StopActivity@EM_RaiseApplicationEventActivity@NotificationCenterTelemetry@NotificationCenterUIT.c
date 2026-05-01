/*
 * XREFs of ?StopActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@MEAAXXZ @ 0x18004A090
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180072890 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@P6AXXZ@Z @ 0x1800A6D60 (-get@-$static_lazy@VNotificationCenterLogging@@@details@wil@@QEAAPEAVNotificationCenterLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1802DE088 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DE088.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::StopActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *this)
{
  int *v1; // rax
  int v3; // ecx
  int *v4; // rdi
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v15; // [rsp+C4h] [rbp-7Ch] BYREF
  int v16; // [rsp+C8h] [rbp-78h] BYREF
  int v17; // [rsp+CCh] [rbp-74h] BYREF
  int v18; // [rsp+D0h] [rbp-70h] BYREF
  int v19; // [rsp+D4h] [rbp-6Ch] BYREF
  int v20; // [rsp+D8h] [rbp-68h] BYREF
  int v21; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v26; // [rsp+100h] [rbp-40h] BYREF
  __int64 v27; // [rsp+108h] [rbp-38h] BYREF
  __int64 v28; // [rsp+110h] [rbp-30h] BYREF
  __int64 v29; // [rsp+118h] [rbp-28h] BYREF
  __int64 v30; // [rsp+120h] [rbp-20h] BYREF
  __int64 v31; // [rsp+128h] [rbp-18h] BYREF
  __int64 v32; // [rsp+130h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+140h] [rbp+0h] BYREF
  __int64 *v34; // [rsp+160h] [rbp+20h]
  int v35; // [rsp+168h] [rbp+28h]
  int v36; // [rsp+16Ch] [rbp+2Ch]
  int *v37; // [rsp+170h] [rbp+30h]
  int v38; // [rsp+178h] [rbp+38h]
  int v39; // [rsp+17Ch] [rbp+3Ch]
  DWORD *v40; // [rsp+180h] [rbp+40h]
  int v41; // [rsp+188h] [rbp+48h]
  int v42; // [rsp+18Ch] [rbp+4Ch]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[22] && (v4 = v1 + 20, v1 != (int *)-80LL) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v11 = *(_DWORD **)(wil::details::static_lazy<NotificationCenterLogging>::get(
                         v10,
                         _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v11 > 5u )
    {
      v23 = *((_QWORD *)v4 + 6);
      v16 = v4[17];
      v17 = v4[4];
      v24 = *((_QWORD *)v4 + 15);
      v25 = *((_QWORD *)v4 + 14);
      v12 = *((_QWORD *)this + 6);
      v18 = v4[26];
      v13 = *((_QWORD *)v4 + 12);
      v22 = 0LL;
      v26 = v13;
      v27 = *((_QWORD *)v4 + 11);
      v19 = v4[20];
      v28 = *((_QWORD *)v4 + 9);
      v20 = v4[8];
      v29 = *((_QWORD *)v4 + 3);
      v21 = *v4;
      v30 = *((_QWORD *)v4 + 16);
      v14 = v4[16];
      v31 = *((_QWORD *)v4 + 7);
      v15 = v4[2];
      v32 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v11,
        (int)&dword_1806A35B5,
        v12 + 8,
        (__int64)&v22,
        (__int64)&v32,
        (__int64)&v15,
        (__int64)&v31,
        (__int64)&v14,
        (__int64)&v30,
        (__int64)&v21,
        (__int64)&v29,
        (__int64)&v20,
        (__int64)&v28,
        (__int64)&v19,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v18,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v23);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v6 = *(_DWORD **)(wil::details::static_lazy<NotificationCenterLogging>::get(
                        v5,
                        _lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v6 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 6);
      v42 = 0;
      v39 = 0;
      v36 = 0;
      v15 = CurrentThreadId;
      v9 = *(_DWORD *)(v8 + 76);
      v22 = 0LL;
      v14 = v9;
      v40 = &v15;
      v37 = &v14;
      v34 = &v22;
      v41 = 4;
      v38 = 4;
      v35 = 8;
      tlgWriteTransfer_EventWriteTransfer((int)v6, (int)&dword_1806A3710, v8 + 8, 0, 5u, &v33);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)((char *)this + 8));
}
