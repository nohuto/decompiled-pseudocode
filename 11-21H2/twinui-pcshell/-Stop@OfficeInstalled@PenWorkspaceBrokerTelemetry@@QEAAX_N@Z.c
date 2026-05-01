/*
 * XREFs of ?Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z @ 0x1803B8F64
 * Callers:
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1803B81E0 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1803B62D4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1803B62D4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1803B65A4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     ?get@?$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@P6AXXZ@Z @ 0x1803B952C (-get@-$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@.c)
 *     ?zInternalStop@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803B9624 (-zInternalStop@-$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 */

void __fastcall PenWorkspaceBrokerTelemetry::OfficeInstalled::Stop(
        PenWorkspaceBrokerTelemetry::OfficeInstalled *this,
        char a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rdi
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r9
  int v20; // [rsp+B0h] [rbp-80h] BYREF
  int v21; // [rsp+B4h] [rbp-7Ch] BYREF
  int v22; // [rsp+B8h] [rbp-78h] BYREF
  int v23; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+100h] [rbp-30h] BYREF
  __int64 v33[3]; // [rsp+108h] [rbp-28h] BYREF
  __int64 v34; // [rsp+130h] [rbp+0h] BYREF
  __int64 v35; // [rsp+140h] [rbp+10h] BYREF
  __int64 v36; // [rsp+148h] [rbp+18h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v14 = wil::details::static_lazy<PenWorkspaceBrokerLogging>::get(
            v13,
            _lambda_70bc263229c7881e4aa0a680059fb776_::_lambda_invoker_cdecl_);
    v15 = *(_DWORD **)(v14 + 8);
    if ( *v15 > 5u && tlgKeywordOn(*(_QWORD *)(v14 + 8), 0x200000000000LL) )
    {
      LOBYTE(v34) = a2;
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 6);
      LODWORD(v35) = CurrentThreadId;
      v18 = *(_DWORD *)(v17 + 76);
      v24 = 0LL;
      LODWORD(v36) = v18;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v15,
        byte_1806AF9F0,
        (const GUID *)(v17 + 8),
        v19,
        (__int64)&v24,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34);
    }
  }
  else
  {
    wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v8 = *(_DWORD **)(wil::details::static_lazy<PenWorkspaceBrokerLogging>::get(
                        v7,
                        _lambda_70bc263229c7881e4aa0a680059fb776_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
    {
      v11 = *((_QWORD *)this + 6);
      v25 = *((_QWORD *)v6 + 15);
      v12 = *((_QWORD *)v6 + 14);
      v24 = 0LL;
      v26 = v12;
      LODWORD(v35) = v6[26];
      v27 = *((_QWORD *)v6 + 12);
      v28 = *((_QWORD *)v6 + 11);
      LODWORD(v36) = v6[20];
      v29 = *((_QWORD *)v6 + 9);
      v20 = v6[8];
      v30 = *((_QWORD *)v6 + 3);
      v21 = *v6;
      v31 = *((_QWORD *)v6 + 16);
      v22 = v6[16];
      v32 = *((_QWORD *)v6 + 7);
      v23 = v6[2];
      LOBYTE(v34) = a2;
      v33[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        v9,
        (unsigned __int8 *)dword_1806AFB9E,
        (const GUID *)(v11 + 8),
        v10,
        (__int64)&v24,
        (__int64)v33,
        (__int64)&v23,
        (const wchar_t **)&v32,
        (__int64)&v22,
        (const wchar_t **)&v31,
        (__int64)&v21,
        (const WCHAR **)&v30,
        (__int64)&v20,
        (const wchar_t **)&v29,
        (__int64)&v36,
        (const wchar_t **)&v28,
        (const WCHAR **)&v27,
        (__int64)&v35,
        (const wchar_t **)&v26,
        (const WCHAR **)&v25,
        (__int64)&v34);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((PenWorkspaceBrokerTelemetry::OfficeInstalled *)((char *)this + 8));
}
