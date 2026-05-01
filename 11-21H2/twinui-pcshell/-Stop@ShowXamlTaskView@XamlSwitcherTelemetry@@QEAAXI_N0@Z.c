/*
 * XREFs of ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x180017364
 * Callers:
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x180016BB0 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x1800411A0 (-ToggleAllUpView@TaskViewHost@@UEAAJXZ.c)
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1804392C0 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x1804399A0 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x180017490 (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x180017574 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?zInternalStop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017624 (-zInternalStop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456444@Z @ 0x18042C034 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18042C034.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
        XamlSwitcherTelemetry::ShowXamlTaskView *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  __int64 v4; // rax
  int v6; // esi
  int v8; // r14d
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // [rsp+C8h] [rbp-80h] BYREF
  DWORD v23; // [rsp+CCh] [rbp-7Ch] BYREF
  int v24; // [rsp+D0h] [rbp-78h] BYREF
  int v25; // [rsp+D4h] [rbp-74h] BYREF
  int v26; // [rsp+D8h] [rbp-70h] BYREF
  int v27; // [rsp+DCh] [rbp-6Ch] BYREF
  int v28; // [rsp+E0h] [rbp-68h] BYREF
  int v29; // [rsp+E4h] [rbp-64h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+100h] [rbp-48h] BYREF
  __int64 v34; // [rsp+108h] [rbp-40h] BYREF
  __int64 v35; // [rsp+110h] [rbp-38h] BYREF
  __int64 v36; // [rsp+118h] [rbp-30h] BYREF
  __int64 v37; // [rsp+120h] [rbp-28h] BYREF
  __int64 v38; // [rsp+128h] [rbp-20h] BYREF
  __int64 v39; // [rsp+130h] [rbp-18h] BYREF
  __int64 v40; // [rsp+158h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 6);
  v6 = a4;
  v8 = a3;
  v9 = *(_DWORD *)(v4 + 76);
  if ( v9 >= 0 || v9 != *(_DWORD *)(v4 + 88) || (v16 = v4 + 80, v4 == -80) )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v11 = wil::details::static_lazy<XamlSwitcherLogging>::get(
            v10,
            _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
    v12 = *(_DWORD **)(v11 + 8);
    if ( *v12 > 5u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v11 + 8), 0x400000000000LL) )
    {
      LODWORD(v40) = v6;
      v25 = v8;
      v24 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      v23 = CurrentThreadId;
      v15 = *(_DWORD *)(v14 + 76);
      v30 = 0LL;
      v22 = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v12,
        (unsigned int)&unk_1806B3AF4,
        v14 + 8,
        0,
        (__int64)&v30,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v40);
    }
  }
  else
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v18 = *(_DWORD **)(wil::details::static_lazy<XamlSwitcherLogging>::get(
                         v17,
                         _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v18 > 5u && (unsigned __int8)tlgKeywordOn(v18, 0x400000000000LL) )
    {
      v31 = *(_QWORD *)(v16 + 120);
      v32 = *(_QWORD *)(v16 + 112);
      v20 = *((_QWORD *)this + 6);
      v28 = *(_DWORD *)(v16 + 104);
      v21 = *(_QWORD *)(v16 + 96);
      v30 = 0LL;
      v33 = v21;
      v34 = *(_QWORD *)(v16 + 88);
      v29 = *(_DWORD *)(v16 + 80);
      v35 = *(_QWORD *)(v16 + 72);
      v22 = *(_DWORD *)(v16 + 32);
      v36 = *(_QWORD *)(v16 + 24);
      v23 = *(_DWORD *)v16;
      v37 = *(_QWORD *)(v16 + 128);
      v24 = *(_DWORD *)(v16 + 64);
      v38 = *(_QWORD *)(v16 + 56);
      v25 = *(_DWORD *)(v16 + 8);
      LODWORD(v40) = v6;
      v26 = v8;
      v27 = a2;
      v39 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v19,
        (int)&dword_1806B399E,
        v20 + 8,
        (__int64)&v30,
        (__int64)&v39,
        (__int64)&v25,
        (__int64)&v38,
        (__int64)&v24,
        (__int64)&v37,
        (__int64)&v23,
        (__int64)&v36,
        (__int64)&v22,
        (__int64)&v35,
        (__int64)&v29,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v28,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v40);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((XamlSwitcherTelemetry::ShowXamlTaskView *)((char *)this + 8));
}
