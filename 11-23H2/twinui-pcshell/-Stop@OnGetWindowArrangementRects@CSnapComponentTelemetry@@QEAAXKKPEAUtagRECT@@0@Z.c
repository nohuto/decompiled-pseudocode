/*
 * XREFs of ?Stop@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXKKPEAUtagRECT@@0@Z @ 0x1806641F4
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180661C80 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180110428 (-zInternalStop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564454444444444@Z @ 0x18065DD3C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18065DD3C.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444@Z @ 0x18065E3C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_.c)
 */

void __fastcall CSnapComponentTelemetry::OnGetWindowArrangementRects::Stop(
        CSnapComponentTelemetry::OnGetWindowArrangementRects *this,
        int a2,
        DWORD a3,
        struct tagRECT *a4,
        struct tagRECT *a5)
{
  __int64 v5; // rax
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rcx
  _DWORD *v13; // r9
  __int64 v14; // r8
  __int64 v15; // rcx
  _DWORD *v16; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  LONG v19; // eax
  __int64 v20; // r9
  LONG v21; // [rsp+118h] [rbp-80h] BYREF
  DWORD v22; // [rsp+11Ch] [rbp-7Ch] BYREF
  int v23; // [rsp+120h] [rbp-78h] BYREF
  DWORD v24; // [rsp+124h] [rbp-74h] BYREF
  LONG v25; // [rsp+128h] [rbp-70h] BYREF
  LONG v26; // [rsp+12Ch] [rbp-6Ch] BYREF
  LONG v27; // [rsp+130h] [rbp-68h] BYREF
  LONG bottom; // [rsp+134h] [rbp-64h] BYREF
  LONG left; // [rsp+138h] [rbp-60h] BYREF
  LONG top; // [rsp+13Ch] [rbp-5Ch] BYREF
  LONG right; // [rsp+140h] [rbp-58h] BYREF
  LONG v32; // [rsp+144h] [rbp-54h] BYREF
  LONG v33; // [rsp+148h] [rbp-50h] BYREF
  LONG v34; // [rsp+14Ch] [rbp-4Ch] BYREF
  LONG v35; // [rsp+150h] [rbp-48h] BYREF
  LONG v36; // [rsp+154h] [rbp-44h] BYREF
  LONG v37; // [rsp+158h] [rbp-40h] BYREF
  __int64 v38; // [rsp+160h] [rbp-38h] BYREF
  __int64 v39; // [rsp+168h] [rbp-30h] BYREF
  __int64 v40; // [rsp+170h] [rbp-28h] BYREF
  __int64 v41; // [rsp+178h] [rbp-20h] BYREF
  __int64 v42; // [rsp+180h] [rbp-18h] BYREF
  __int64 v43; // [rsp+188h] [rbp-10h] BYREF
  __int64 v44; // [rsp+190h] [rbp-8h] BYREF
  __int64 v45; // [rsp+198h] [rbp+0h] BYREF
  __int64 v46; // [rsp+1A0h] [rbp+8h] BYREF
  __int64 v47; // [rsp+1A8h] [rbp+10h] BYREF
  __int64 v48; // [rsp+1B0h] [rbp+18h] BYREF
  __int64 v49; // [rsp+1D8h] [rbp+40h] BYREF

  v5 = *((_QWORD *)this + 6);
  v10 = *(_DWORD *)(v5 + 76);
  if ( v10 >= 0 || v10 != *(_DWORD *)(v5 + 88) || (v11 = v5 + 80, v5 == -80) )
  {
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v16 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v15,
                      (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v16 > 5u )
    {
      v24 = a3;
      v23 = a2;
      LODWORD(v49) = a5->bottom;
      right = a5->right;
      top = a5->top;
      left = a5->left;
      bottom = a4->bottom;
      v27 = a4->right;
      v26 = a4->top;
      v25 = a4->left;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 6);
      v22 = CurrentThreadId;
      v19 = *(_DWORD *)(v18 + 76);
      v38 = 0LL;
      v21 = v19;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v16,
        byte_180872578,
        (const GUID *)(v18 + 8),
        v20,
        (__int64)&v38,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v23,
        (__int64)&v24,
        (__int64)&v25,
        (__int64)&v26,
        (__int64)&v27,
        (__int64)&bottom,
        (__int64)&left,
        (__int64)&top,
        (__int64)&right,
        (__int64)&v49);
    }
  }
  else
  {
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v13 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v12,
                      (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v13 > 5u )
    {
      v38 = 0LL;
      v14 = *((_QWORD *)this + 6);
      v22 = a3;
      LODWORD(v49) = a5->bottom;
      v32 = a5->right;
      v33 = a5->top;
      v34 = a5->left;
      v35 = a4->bottom;
      v36 = a4->right;
      v37 = a4->top;
      v21 = a4->left;
      v39 = *(_QWORD *)(v11 + 48);
      v24 = *(_DWORD *)(v11 + 68);
      v25 = *(_DWORD *)(v11 + 16);
      v40 = *(_QWORD *)(v11 + 120);
      v41 = *(_QWORD *)(v11 + 112);
      v26 = *(_DWORD *)(v11 + 104);
      v42 = *(_QWORD *)(v11 + 96);
      v43 = *(_QWORD *)(v11 + 88);
      v27 = *(_DWORD *)(v11 + 80);
      v44 = *(_QWORD *)(v11 + 72);
      bottom = *(_DWORD *)(v11 + 32);
      v45 = *(_QWORD *)(v11 + 24);
      left = *(_DWORD *)v11;
      v46 = *(_QWORD *)(v11 + 128);
      top = *(_DWORD *)(v11 + 64);
      v47 = *(_QWORD *)(v11 + 56);
      right = *(_DWORD *)(v11 + 8);
      v23 = a2;
      v48 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v13,
        (unsigned __int8 *)dword_180872642,
        (const GUID *)(v14 + 8),
        (__int64)v13,
        (__int64)&v38,
        (__int64)&v48,
        (__int64)&right,
        (const wchar_t **)&v47,
        (__int64)&top,
        (const wchar_t **)&v46,
        (__int64)&left,
        (const WCHAR **)&v45,
        (__int64)&bottom,
        (const wchar_t **)&v44,
        (__int64)&v27,
        (const wchar_t **)&v43,
        (const WCHAR **)&v42,
        (__int64)&v26,
        (const wchar_t **)&v41,
        (const WCHAR **)&v40,
        (__int64)&v25,
        (__int64)&v24,
        (const wchar_t **)&v39,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v49);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
