/*
 * XREFs of ?Stop@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@QEAAX_N0@Z @ 0x1800BF6B4
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017624 (-zInternalStop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1800BF614 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644544@Z @ 0x180458E1C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180458E1C.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization::Stop(
        TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *this,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  int *v3; // rax
  int v5; // esi
  int v6; // r14d
  int v7; // ecx
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  int *v12; // rdi
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+D0h] [rbp-80h] BYREF
  DWORD v17; // [rsp+D4h] [rbp-7Ch] BYREF
  int v18; // [rsp+D8h] [rbp-78h] BYREF
  int v19; // [rsp+DCh] [rbp-74h] BYREF
  int v20; // [rsp+E0h] [rbp-70h] BYREF
  int v21; // [rsp+E4h] [rbp-6Ch] BYREF
  int v22; // [rsp+E8h] [rbp-68h] BYREF
  int v23; // [rsp+ECh] [rbp-64h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+100h] [rbp-50h] BYREF
  __int64 v27; // [rsp+108h] [rbp-48h] BYREF
  __int64 v28; // [rsp+110h] [rbp-40h] BYREF
  __int64 v29; // [rsp+118h] [rbp-38h] BYREF
  __int64 v30; // [rsp+120h] [rbp-30h] BYREF
  __int64 v31; // [rsp+128h] [rbp-28h] BYREF
  __int64 v32; // [rsp+130h] [rbp-20h] BYREF
  __int64 v33; // [rsp+138h] [rbp-18h] BYREF
  __int64 v34; // [rsp+140h] [rbp-10h] BYREF
  __int64 v35; // [rsp+170h] [rbp+20h] BYREF
  __int64 v36; // [rsp+188h] [rbp+38h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v5 = a3;
  v6 = a2;
  v7 = v3[19];
  if ( v7 >= 0 || v7 != v3[22] || (v12 = v3 + 20, v3 == (int *)-80LL) )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = *(_DWORD **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                        v8,
                        _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v9 > 5u )
    {
      LODWORD(v35) = v5;
      LODWORD(v36) = v6;
      CurrentThreadId = GetCurrentThreadId();
      v11 = *((_QWORD *)this + 6);
      v17 = CurrentThreadId;
      v16 = *(_DWORD *)(v11 + 76);
      v24 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        byte_1806B79DC,
        (const GUID *)(v11 + 8),
        0LL,
        (__int64)&v24,
        (__int64)&v16,
        (__int64)&v17,
        (__int64)&v36,
        (__int64)&v35);
    }
  }
  else
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v14 = *(_DWORD **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                         v13,
                         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v14 > 5u )
    {
      v25 = *((_QWORD *)v12 + 6);
      v18 = v12[17];
      v19 = v12[4];
      v26 = *((_QWORD *)v12 + 15);
      v27 = *((_QWORD *)v12 + 14);
      v20 = v12[26];
      v28 = *((_QWORD *)v12 + 12);
      v15 = *((_QWORD *)this + 6);
      v29 = *((_QWORD *)v12 + 11);
      v21 = v12[20];
      v30 = *((_QWORD *)v12 + 9);
      v22 = v12[8];
      v31 = *((_QWORD *)v12 + 3);
      v23 = *v12;
      v32 = *((_QWORD *)v12 + 16);
      v16 = v12[16];
      v33 = *((_QWORD *)v12 + 7);
      v17 = v12[2];
      v34 = 0x1000000LL;
      v24 = 0x1000000LL;
      LODWORD(v35) = v5;
      LODWORD(v36) = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v14,
        (int)&dword_1806B7A92,
        v15 + 8,
        (__int64)&v24,
        (__int64)&v34,
        (__int64)&v17,
        (__int64)&v33,
        (__int64)&v16,
        (__int64)&v32,
        (__int64)&v23,
        (__int64)&v31,
        (__int64)&v22,
        (__int64)&v30,
        (__int64)&v21,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v20,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v25,
        (__int64)&v36,
        (__int64)&v35);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDelayedInitialization *)((char *)this + 8));
}
