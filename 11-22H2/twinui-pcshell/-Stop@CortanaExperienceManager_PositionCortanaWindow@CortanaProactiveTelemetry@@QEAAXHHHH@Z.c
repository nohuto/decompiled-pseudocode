/*
 * XREFs of ?Stop@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHHHH@Z @ 0x18047D17C
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18047B868 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180486518 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AXXZ@Z @ 0x1800BC960 (-get@-$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AX.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454444@Z @ 0x1804766E8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1804766E8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444@Z @ 0x180476A74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::Stop(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  int *v5; // rax
  int v10; // ecx
  int *v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rcx
  _DWORD *v17; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v19; // r8
  int v20; // [rsp+E8h] [rbp-80h] BYREF
  DWORD v21; // [rsp+ECh] [rbp-7Ch] BYREF
  int v22; // [rsp+F0h] [rbp-78h] BYREF
  int v23; // [rsp+F4h] [rbp-74h] BYREF
  int v24; // [rsp+F8h] [rbp-70h] BYREF
  int v25; // [rsp+FCh] [rbp-6Ch] BYREF
  int v26; // [rsp+100h] [rbp-68h] BYREF
  int v27; // [rsp+104h] [rbp-64h] BYREF
  int v28; // [rsp+108h] [rbp-60h] BYREF
  int v29; // [rsp+10Ch] [rbp-5Ch] BYREF
  int v30; // [rsp+110h] [rbp-58h] BYREF
  __int64 v31; // [rsp+118h] [rbp-50h] BYREF
  __int64 v32; // [rsp+120h] [rbp-48h] BYREF
  __int64 v33; // [rsp+128h] [rbp-40h] BYREF
  __int64 v34; // [rsp+130h] [rbp-38h] BYREF
  __int64 v35; // [rsp+138h] [rbp-30h] BYREF
  __int64 v36; // [rsp+140h] [rbp-28h] BYREF
  __int64 v37; // [rsp+148h] [rbp-20h] BYREF
  __int64 v38; // [rsp+150h] [rbp-18h] BYREF
  __int64 v39; // [rsp+158h] [rbp-10h] BYREF
  __int64 v40; // [rsp+160h] [rbp-8h] BYREF
  __int64 v41; // [rsp+168h] [rbp+0h] BYREF
  __int64 v42; // [rsp+198h] [rbp+30h] BYREF

  v5 = (int *)*((_QWORD *)this + 6);
  v10 = v5[19];
  if ( v10 >= 0 || v10 != v5[22] || (v11 = v5 + 20, v5 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v17 = (_DWORD *)wil::details::static_lazy<CortanaProactiveLogging>::get(
                      v16,
                      _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_)[1];
    if ( *v17 > 5u )
    {
      LODWORD(v42) = a5;
      v24 = a4;
      v23 = a3;
      v22 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *((_QWORD *)this + 6);
      v21 = CurrentThreadId;
      v20 = *(_DWORD *)(v19 + 76);
      v31 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v17,
        byte_180855CD0,
        (const GUID *)(v19 + 8),
        0LL,
        (__int64)&v31,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v42);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = (_DWORD *)wil::details::static_lazy<CortanaProactiveLogging>::get(
                      v12,
                      _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_)[1];
    if ( *v13 > 5u )
    {
      LODWORD(v42) = a5;
      v32 = *((_QWORD *)v11 + 6);
      v28 = v11[17];
      v29 = v11[4];
      v33 = *((_QWORD *)v11 + 15);
      v34 = *((_QWORD *)v11 + 14);
      v30 = v11[26];
      v15 = *((_QWORD *)this + 6);
      v35 = *((_QWORD *)v11 + 12);
      v36 = *((_QWORD *)v11 + 11);
      v20 = v11[20];
      v37 = *((_QWORD *)v11 + 9);
      v21 = v11[8];
      v38 = *((_QWORD *)v11 + 3);
      v22 = *v11;
      v39 = *((_QWORD *)v11 + 16);
      v23 = v11[16];
      v40 = *((_QWORD *)v11 + 7);
      v24 = v11[2];
      v41 = 0x1000000LL;
      v31 = 0x1000000LL;
      v25 = a4;
      v26 = a3;
      v27 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v13,
        (unsigned __int8 *)dword_180855F99,
        (const GUID *)(v15 + 8),
        v14,
        (__int64)&v31,
        (__int64)&v41,
        (__int64)&v24,
        (const wchar_t **)&v40,
        (__int64)&v23,
        (const wchar_t **)&v39,
        (__int64)&v22,
        (const WCHAR **)&v38,
        (__int64)&v21,
        (const wchar_t **)&v37,
        (__int64)&v20,
        (const wchar_t **)&v36,
        (const WCHAR **)&v35,
        (__int64)&v30,
        (const wchar_t **)&v34,
        (const WCHAR **)&v33,
        (__int64)&v29,
        (__int64)&v28,
        (const wchar_t **)&v32,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v42);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
