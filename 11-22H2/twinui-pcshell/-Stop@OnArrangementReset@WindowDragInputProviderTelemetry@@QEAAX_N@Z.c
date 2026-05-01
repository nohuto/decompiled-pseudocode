/*
 * XREFs of ?Stop@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAX_N@Z @ 0x18068C12C
 * Callers:
 *     ?OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z @ 0x18068B628 (-OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644534@Z @ 0x18065D9E4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18065D9E4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@434@Z @ 0x18065E31C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall WindowDragInputProviderTelemetry::OnArrangementReset::Stop(
        WindowDragInputProviderTelemetry::OnArrangementReset *this,
        unsigned __int8 a2)
{
  int *v2; // rax
  int v4; // esi
  int v5; // ecx
  int *v6; // rdi
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  _DWORD *v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+D0h] [rbp-80h] BYREF
  int v17; // [rsp+D4h] [rbp-7Ch] BYREF
  int v18; // [rsp+D8h] [rbp-78h] BYREF
  int v19; // [rsp+DCh] [rbp-74h] BYREF
  int v20; // [rsp+E0h] [rbp-70h] BYREF
  int v21; // [rsp+E4h] [rbp-6Ch] BYREF
  __int64 v22; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+F8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+100h] [rbp-50h] BYREF
  __int64 v26; // [rsp+108h] [rbp-48h] BYREF
  __int64 v27; // [rsp+110h] [rbp-40h] BYREF
  __int64 v28; // [rsp+118h] [rbp-38h] BYREF
  __int64 v29; // [rsp+120h] [rbp-30h] BYREF
  __int64 v30; // [rsp+128h] [rbp-28h] BYREF
  __int64 v31; // [rsp+130h] [rbp-20h] BYREF
  __int64 v32; // [rsp+138h] [rbp-18h] BYREF
  __int64 v33; // [rsp+140h] [rbp-10h] BYREF
  __int64 v34; // [rsp+170h] [rbp+20h] BYREF
  __int64 v35; // [rsp+180h] [rbp+30h] BYREF
  __int64 v36; // [rsp+188h] [rbp+38h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v4 = a2;
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v11,
                      (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v12 > 5u )
    {
      LODWORD(v34) = v4;
      v23 = 0x1000000LL;
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      LODWORD(v35) = CurrentThreadId;
      LODWORD(v36) = *(_DWORD *)(v14 + 76);
      v22 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        byte_1808750C2,
        (const GUID *)(v14 + 8),
        v15,
        (__int64)&v22,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v23,
        (__int64)&v34);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                     v7,
                     (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v8 > 5u )
    {
      v25 = *((_QWORD *)v6 + 6);
      LODWORD(v35) = v6[17];
      LODWORD(v36) = v6[4];
      v26 = *((_QWORD *)v6 + 15);
      v27 = *((_QWORD *)v6 + 14);
      v16 = v6[26];
      v10 = *((_QWORD *)this + 6);
      v28 = *((_QWORD *)v6 + 12);
      v29 = *((_QWORD *)v6 + 11);
      v17 = v6[20];
      v30 = *((_QWORD *)v6 + 9);
      v18 = v6[8];
      v31 = *((_QWORD *)v6 + 3);
      v19 = *v6;
      v32 = *((_QWORD *)v6 + 16);
      v20 = v6[16];
      v33 = *((_QWORD *)v6 + 7);
      v21 = v6[2];
      LODWORD(v34) = v4;
      v24 = 0x1000000LL;
      v22 = 0x1000000LL;
      v23 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        (unsigned __int8 *)dword_18087513C,
        (const GUID *)(v10 + 8),
        v9,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (const wchar_t **)&v33,
        (__int64)&v20,
        (const wchar_t **)&v32,
        (__int64)&v19,
        (const WCHAR **)&v31,
        (__int64)&v18,
        (const wchar_t **)&v30,
        (__int64)&v17,
        (const wchar_t **)&v29,
        (const WCHAR **)&v28,
        (__int64)&v16,
        (const wchar_t **)&v27,
        (const WCHAR **)&v26,
        (__int64)&v36,
        (__int64)&v35,
        (const wchar_t **)&v25,
        (__int64)&v24,
        (__int64)&v34);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
