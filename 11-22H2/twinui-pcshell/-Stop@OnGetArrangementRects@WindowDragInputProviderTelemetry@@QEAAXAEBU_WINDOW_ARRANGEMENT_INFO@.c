/*
 * XREFs of ?Stop@OnGetArrangementRects@WindowDragInputProviderTelemetry@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18068C3B0
 * Callers:
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x18068B7B0 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U1@U_tlgWrapperPtrSize@@U5@U2@U2@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564453AEBU_tlgWrapperPtrSize@@744434@Z @ 0x18068A634 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18068A634.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U_tlgWrapperPtrSize@@U3@U2@U2@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@43AEBU_tlgWrapperPtrSize@@544434@Z @ 0x18068AAD8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U_tlgWrapperPtrSize@@U3@U2@U2@U.c)
 */

void __fastcall WindowDragInputProviderTelemetry::OnGetArrangementRects::Stop(
        WindowDragInputProviderTelemetry::OnGetArrangementRects *this,
        const struct _WINDOW_ARRANGEMENT_INFO *a2)
{
  int *v2; // rax
  int v5; // ecx
  int *v6; // rsi
  __int64 v7; // rcx
  _DWORD *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  _DWORD *v11; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+100h] [rbp-80h] BYREF
  DWORD v16; // [rsp+104h] [rbp-7Ch] BYREF
  int v17; // [rsp+108h] [rbp-78h] BYREF
  int v18; // [rsp+10Ch] [rbp-74h] BYREF
  int v19; // [rsp+110h] [rbp-70h] BYREF
  int v20; // [rsp+114h] [rbp-6Ch] BYREF
  int v21; // [rsp+118h] [rbp-68h] BYREF
  int v22; // [rsp+11Ch] [rbp-64h] BYREF
  int v23; // [rsp+120h] [rbp-60h] BYREF
  __int64 v24; // [rsp+128h] [rbp-58h] BYREF
  __int64 v25; // [rsp+130h] [rbp-50h] BYREF
  __int64 v26; // [rsp+138h] [rbp-48h] BYREF
  __int64 v27; // [rsp+140h] [rbp-40h] BYREF
  int v28; // [rsp+148h] [rbp-38h]
  __int64 v29; // [rsp+150h] [rbp-30h] BYREF
  int v30; // [rsp+158h] [rbp-28h]
  __int64 v31; // [rsp+160h] [rbp-20h] BYREF
  __int64 v32; // [rsp+168h] [rbp-18h] BYREF
  __int64 v33; // [rsp+170h] [rbp-10h] BYREF
  __int64 v34; // [rsp+178h] [rbp-8h] BYREF
  __int64 v35; // [rsp+180h] [rbp+0h] BYREF
  __int64 v36; // [rsp+188h] [rbp+8h] BYREF
  __int64 v37; // [rsp+190h] [rbp+10h] BYREF
  __int64 v38; // [rsp+198h] [rbp+18h] BYREF
  __int64 v39; // [rsp+1A0h] [rbp+20h] BYREF
  __int64 v40; // [rsp+1A8h] [rbp+28h] BYREF
  __int64 v41; // [rsp+1D0h] [rbp+50h] BYREF
  __int64 v42; // [rsp+1E0h] [rbp+60h] BYREF
  __int64 v43; // [rsp+1E8h] [rbp+68h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v11 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v10,
                      (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v11 > 5u )
    {
      LODWORD(v41) = *((_DWORD *)a2 + 18);
      v26 = *((_QWORD *)a2 + 8);
      LODWORD(v42) = *((_DWORD *)a2 + 14);
      LODWORD(v43) = *((_DWORD *)a2 + 9);
      v17 = *((_DWORD *)a2 + 4);
      v29 = (__int64)a2 + 40;
      v30 = 16;
      v25 = 0x1000000LL;
      v27 = (__int64)a2 + 20;
      v28 = 16;
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 6);
      v16 = CurrentThreadId;
      v15 = *(_DWORD *)(v13 + 76);
      v24 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v11,
        byte_180874DD6,
        (const GUID *)(v13 + 8),
        v14,
        (__int64)&v24,
        (__int64)&v15,
        (__int64)&v16,
        (__int64)&v25,
        &v27,
        &v29,
        (__int64)&v17,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v26,
        (__int64)&v41);
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
      LODWORD(v41) = *((_DWORD *)a2 + 18);
      v31 = *((_QWORD *)a2 + 8);
      LODWORD(v42) = *((_DWORD *)a2 + 14);
      LODWORD(v43) = *((_DWORD *)a2 + 9);
      v18 = *((_DWORD *)a2 + 4);
      v9 = *((_QWORD *)this + 6);
      v27 = (__int64)a2 + 40;
      v28 = 16;
      v29 = (__int64)a2 + 20;
      v33 = *((_QWORD *)v6 + 6);
      v19 = v6[17];
      v20 = v6[4];
      v34 = *((_QWORD *)v6 + 15);
      v35 = *((_QWORD *)v6 + 14);
      v21 = v6[26];
      v36 = *((_QWORD *)v6 + 12);
      v37 = *((_QWORD *)v6 + 11);
      v22 = v6[20];
      v38 = *((_QWORD *)v6 + 9);
      v23 = v6[8];
      v39 = *((_QWORD *)v6 + 3);
      v15 = *v6;
      v40 = *((_QWORD *)v6 + 16);
      v16 = v6[16];
      v24 = *((_QWORD *)v6 + 7);
      v17 = v6[2];
      v30 = 16;
      v32 = 0x1000000LL;
      v25 = 0x1000000LL;
      v26 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v8,
        (unsigned __int8 *)dword_180874ECF,
        (const GUID *)(v9 + 8),
        (__int64)v8,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v17,
        (const wchar_t **)&v24,
        (__int64)&v16,
        (const wchar_t **)&v40,
        (__int64)&v15,
        (const WCHAR **)&v39,
        (__int64)&v23,
        (const wchar_t **)&v38,
        (__int64)&v22,
        (const wchar_t **)&v37,
        (const WCHAR **)&v36,
        (__int64)&v21,
        (const wchar_t **)&v35,
        (const WCHAR **)&v34,
        (__int64)&v20,
        (__int64)&v19,
        (const wchar_t **)&v33,
        (__int64)&v32,
        &v29,
        &v27,
        (__int64)&v18,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v31,
        (__int64)&v41);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
