/*
 * XREFs of ?Stop@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGJ@Z @ 0x1800BFB70
 * Callers:
 *     ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800BF254 (-InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017624 (-zInternalStop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@4@Z @ 0x1800BFA94 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTe.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644564@Z @ 0x18046D3C0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18046D3C0.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
        TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *this,
        const unsigned __int16 *a2,
        int a3)
{
  int *v3; // rax
  int v7; // ecx
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  int *v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+D0h] [rbp-80h] BYREF
  int v18; // [rsp+D4h] [rbp-7Ch] BYREF
  int v19; // [rsp+D8h] [rbp-78h] BYREF
  int v20; // [rsp+DCh] [rbp-74h] BYREF
  int v21; // [rsp+E0h] [rbp-70h] BYREF
  int v22; // [rsp+E4h] [rbp-6Ch] BYREF
  __int64 v23; // [rsp+E8h] [rbp-68h] BYREF
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
  __int64 v35; // [rsp+148h] [rbp-8h] BYREF
  __int64 v36; // [rsp+170h] [rbp+20h] BYREF
  __int64 v37; // [rsp+188h] [rbp+38h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 >= 0 || v7 != v3[22] || (v13 = v3 + 20, v3 == (int *)-80LL) )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = *(_DWORD **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                        v8,
                        _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v9 > 5u )
    {
      LODWORD(v36) = a3;
      v25 = (__int64)a2;
      CurrentThreadId = GetCurrentThreadId();
      v11 = *((_QWORD *)this + 6);
      LODWORD(v37) = CurrentThreadId;
      v17 = *(_DWORD *)(v11 + 76);
      v24 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        (__int64)v9,
        (unsigned __int8 *)dword_1806BA427,
        (const GUID *)(v11 + 8),
        v12,
        (__int64)&v24,
        (__int64)&v17,
        (__int64)&v37,
        (const WCHAR **)&v25,
        (__int64)&v36);
    }
  }
  else
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v15 = *(_DWORD **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                         v14,
                         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v15 > 5u )
    {
      v27 = *((_QWORD *)v13 + 6);
      LODWORD(v37) = v13[17];
      v18 = v13[4];
      v28 = *((_QWORD *)v13 + 15);
      v29 = *((_QWORD *)v13 + 14);
      v19 = v13[26];
      v30 = *((_QWORD *)v13 + 12);
      v16 = *((_QWORD *)this + 6);
      v31 = *((_QWORD *)v13 + 11);
      v20 = v13[20];
      v32 = *((_QWORD *)v13 + 9);
      v21 = v13[8];
      v33 = *((_QWORD *)v13 + 3);
      v22 = *v13;
      v34 = *((_QWORD *)v13 + 16);
      LODWORD(v23) = v13[16];
      v35 = *((_QWORD *)v13 + 7);
      v17 = v13[2];
      v24 = 0x1000000LL;
      v25 = 0x1000000LL;
      LODWORD(v36) = a3;
      v26 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        (int)v15,
        (int)&dword_1806BA495,
        v16 + 8,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v17,
        (__int64)&v35,
        (__int64)&v23,
        (__int64)&v34,
        (__int64)&v22,
        (__int64)&v33,
        (__int64)&v21,
        (__int64)&v32,
        (__int64)&v20,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v19,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v18,
        (__int64)&v37,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v36);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)((char *)this + 8));
}
