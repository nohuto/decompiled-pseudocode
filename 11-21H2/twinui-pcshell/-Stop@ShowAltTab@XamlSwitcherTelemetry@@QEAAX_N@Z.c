/*
 * XREFs of ?Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x1805FC948
 * Callers:
 *     wil::details::ScopeExitFn__lambda_33e1c56ebc0f688b14996b627787f4f7___::_ScopeExitFn__lambda_33e1c56ebc0f688b14996b627787f4f7___ @ 0x1801E8CA4 (wil--details--ScopeExitFn__lambda_33e1c56ebc0f688b14996b627787f4f7___--_ScopeExitFn__lambda_33e1.c)
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x1801E8D1C (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 *     wil::details::ScopeExitFn__lambda_4bbd2daea9b54bdbb05689ab88045b07___::_ScopeExitFn__lambda_4bbd2daea9b54bdbb05689ab88045b07___ @ 0x1805F95B0 (wil--details--ScopeExitFn__lambda_4bbd2daea9b54bdbb05689ab88045b07___--_ScopeExitFn__lambda_4bbd.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1805FBBA0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18000EC20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x180017490 (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18022ACE8 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564@Z @ 0x18030CC30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18030CC30.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowAltTab::Stop(XamlSwitcherTelemetry::ShowAltTab *this, unsigned __int8 a2)
{
  int *v2; // rax
  int v4; // esi
  int v5; // ecx
  int *v6; // rdi
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 *v13; // rax
  _DWORD *v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // [rsp+B0h] [rbp-80h] BYREF
  int v18; // [rsp+B4h] [rbp-7Ch] BYREF
  int v19; // [rsp+B8h] [rbp-78h] BYREF
  int v20; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v29; // [rsp+100h] [rbp-30h] BYREF
  __int64 v30[3]; // [rsp+108h] [rbp-28h] BYREF
  __int64 v31; // [rsp+130h] [rbp+0h] BYREF
  __int64 v32; // [rsp+140h] [rbp+10h] BYREF
  __int64 v33; // [rsp+148h] [rbp+18h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v4 = a2;
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = wil::details::static_lazy<XamlSwitcherLogging>::get(
            v12,
            _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
    v14 = (_DWORD *)v13[1];
    if ( *v14 > 5u && tlgKeywordOn(v13[1], 0x400000000000LL) )
    {
      LODWORD(v31) = v4;
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      LODWORD(v32) = CurrentThreadId;
      LODWORD(v33) = *(_DWORD *)(v16 + 76);
      v21 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v14,
        (int)&unk_1806D0EA1,
        v16 + 8,
        0,
        (__int64)&v21,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = (_DWORD *)wil::details::static_lazy<XamlSwitcherLogging>::get(
                     v7,
                     _lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_)[1];
    if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
    {
      v11 = *((_QWORD *)this + 6);
      v22 = *((_QWORD *)v6 + 15);
      v23 = *((_QWORD *)v6 + 14);
      LODWORD(v32) = v6[26];
      v24 = *((_QWORD *)v6 + 12);
      v25 = *((_QWORD *)v6 + 11);
      LODWORD(v33) = v6[20];
      v26 = *((_QWORD *)v6 + 9);
      v17 = v6[8];
      v27 = *((_QWORD *)v6 + 3);
      v18 = *v6;
      v28 = *((_QWORD *)v6 + 16);
      v19 = v6[16];
      v29 = *((_QWORD *)v6 + 7);
      v20 = v6[2];
      LODWORD(v31) = v4;
      v30[0] = 0x1000000LL;
      v21 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v9,
        (unsigned __int8 *)dword_1806D0D6E,
        (const GUID *)(v11 + 8),
        v10,
        (__int64)&v21,
        (__int64)v30,
        (__int64)&v20,
        (const wchar_t **)&v29,
        (__int64)&v19,
        (const wchar_t **)&v28,
        (__int64)&v18,
        (const WCHAR **)&v27,
        (__int64)&v17,
        (const wchar_t **)&v26,
        (__int64)&v33,
        (const wchar_t **)&v25,
        (const WCHAR **)&v24,
        (__int64)&v32,
        (const wchar_t **)&v23,
        (const WCHAR **)&v22,
        (__int64)&v31);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((XamlSwitcherTelemetry::ShowAltTab *)((char *)this + 8));
}
