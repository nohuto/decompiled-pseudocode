/*
 * XREFs of ?Stop@ShowSnapAssist@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x18076E674
 * Callers:
 *     ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x18076EC60 (-ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x18001C97C (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18002CD64 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564@Z @ 0x1803C914C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1803C914C.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowSnapAssist::Stop(XamlSwitcherTelemetry::ShowSnapAssist *this, char a2)
{
  int *v2; // rax
  int v4; // ecx
  int *v5; // rdi
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 *v12; // rax
  _DWORD *v13; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  int v16; // [rsp+B0h] [rbp-80h] BYREF
  int v17; // [rsp+B4h] [rbp-7Ch] BYREF
  __int64 v18; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v20; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v27; // [rsp+100h] [rbp-30h] BYREF
  __int64 v28[3]; // [rsp+108h] [rbp-28h] BYREF
  __int64 v29; // [rsp+130h] [rbp+0h] BYREF
  __int64 v30; // [rsp+138h] [rbp+8h] BYREF
  __int64 v31; // [rsp+140h] [rbp+10h] BYREF
  __int64 v32; // [rsp+148h] [rbp+18h] BYREF

  LOBYTE(v30) = a2;
  v2 = (int *)*((_QWORD *)this + 6);
  v4 = v2[19];
  if ( v4 >= 0 || v4 != v2[22] || (v5 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = wil::details::static_lazy<XamlSwitcherLogging>::get(
            v11,
            (void (__cdecl *)())_lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
    v13 = (_DWORD *)v12[1];
    if ( *v13 > 5u && tlgKeywordOn(v12[1], 0x400000000000LL) )
    {
      LODWORD(v30) = 1;
      CurrentThreadId = GetCurrentThreadId();
      v15 = *((_QWORD *)this + 6);
      LODWORD(v29) = CurrentThreadId;
      LODWORD(v31) = *(_DWORD *)(v15 + 76);
      v32 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v13,
        (int)&unk_1808810A1,
        v15 + 8,
        0,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v29,
        (__int64)&v30);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v7 = (_DWORD *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                     v6,
                     (void (__cdecl *)())_lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1];
    if ( *v7 > 5u && tlgKeywordOn((__int64)v7, 0x400000000000LL) )
    {
      v10 = *((_QWORD *)this + 6);
      v19 = *((_QWORD *)v5 + 15);
      v20 = *((_QWORD *)v5 + 14);
      LODWORD(v29) = v5[26];
      v21 = *((_QWORD *)v5 + 12);
      v22 = *((_QWORD *)v5 + 11);
      LODWORD(v31) = v5[20];
      v23 = *((_QWORD *)v5 + 9);
      LODWORD(v32) = v5[8];
      v24 = *((_QWORD *)v5 + 3);
      v16 = *v5;
      v25 = *((_QWORD *)v5 + 16);
      v17 = v5[16];
      v26 = *((_QWORD *)v5 + 7);
      LODWORD(v18) = v5[2];
      LODWORD(v30) = 1;
      v27 = 0x1000000LL;
      v28[0] = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v8,
        (unsigned __int8 *)dword_180880F6A,
        (const GUID *)(v10 + 8),
        v9,
        (__int64)v28,
        (__int64)&v27,
        (__int64)&v18,
        (const wchar_t **)&v26,
        (__int64)&v17,
        (const wchar_t **)&v25,
        (__int64)&v16,
        (const WCHAR **)&v24,
        (__int64)&v32,
        (const wchar_t **)&v23,
        (__int64)&v31,
        (const wchar_t **)&v22,
        (const WCHAR **)&v21,
        (__int64)&v29,
        (const wchar_t **)&v20,
        (const WCHAR **)&v19,
        (__int64)&v30);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
