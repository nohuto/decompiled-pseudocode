/*
 * XREFs of ?Stop@OnGetWindowArrangementRects@CSnapComponentTelemetry@@QEAAXKPEAUtagRECT@@0@Z @ 0x180596788
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180072890 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445444444444@Z @ 0x1805911BC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1805911BC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444@Z @ 0x180591694 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlg.c)
 */

void __fastcall CSnapComponentTelemetry::OnGetWindowArrangementRects::Stop(
        CSnapComponentTelemetry::OnGetWindowArrangementRects *this,
        DWORD a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  __int64 v4; // rax
  int v9; // ecx
  __int64 v10; // r14
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // r9
  LONG v14; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  _DWORD *v17; // r14
  DWORD CurrentThreadId; // eax
  __int64 v19; // r8
  LONG v20; // eax
  __int64 v21; // r9
  LONG v22; // [rsp+108h] [rbp-80h] BYREF
  DWORD v23; // [rsp+10Ch] [rbp-7Ch] BYREF
  DWORD v24; // [rsp+110h] [rbp-78h] BYREF
  LONG v25; // [rsp+114h] [rbp-74h] BYREF
  LONG v26; // [rsp+118h] [rbp-70h] BYREF
  LONG v27; // [rsp+11Ch] [rbp-6Ch] BYREF
  LONG bottom; // [rsp+120h] [rbp-68h] BYREF
  LONG left; // [rsp+124h] [rbp-64h] BYREF
  LONG top; // [rsp+128h] [rbp-60h] BYREF
  LONG right; // [rsp+12Ch] [rbp-5Ch] BYREF
  LONG v32; // [rsp+130h] [rbp-58h] BYREF
  LONG v33; // [rsp+134h] [rbp-54h] BYREF
  LONG v34; // [rsp+138h] [rbp-50h] BYREF
  LONG v35; // [rsp+13Ch] [rbp-4Ch] BYREF
  LONG v36; // [rsp+140h] [rbp-48h] BYREF
  LONG v37; // [rsp+144h] [rbp-44h] BYREF
  __int64 v38; // [rsp+148h] [rbp-40h] BYREF
  __int64 v39; // [rsp+150h] [rbp-38h] BYREF
  __int64 v40; // [rsp+158h] [rbp-30h] BYREF
  __int64 v41; // [rsp+160h] [rbp-28h] BYREF
  __int64 v42; // [rsp+168h] [rbp-20h] BYREF
  __int64 v43; // [rsp+170h] [rbp-18h] BYREF
  __int64 v44; // [rsp+178h] [rbp-10h] BYREF
  __int64 v45; // [rsp+180h] [rbp-8h] BYREF
  __int64 v46; // [rsp+188h] [rbp+0h] BYREF
  __int64 v47; // [rsp+190h] [rbp+8h] BYREF
  __int64 v48; // [rsp+198h] [rbp+10h] BYREF
  __int64 v49; // [rsp+1C8h] [rbp+40h] BYREF

  v4 = *((_QWORD *)this + 6);
  v9 = *(_DWORD *)(v4 + 76);
  if ( v9 >= 0 || v9 != *(_DWORD *)(v4 + 88) || (v10 = v4 + 80, v4 == -80) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v17 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v16,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v17 > 5u )
    {
      LODWORD(v49) = a4->bottom;
      right = a4->right;
      top = a4->top;
      left = a4->left;
      bottom = a3->bottom;
      v27 = a3->right;
      v26 = a3->top;
      v25 = a3->left;
      v24 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *((_QWORD *)this + 6);
      v23 = CurrentThreadId;
      v20 = *(_DWORD *)(v19 + 76);
      v38 = 0LL;
      v22 = v20;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v17,
        byte_1806C9933,
        (const GUID *)(v19 + 8),
        v21,
        (__int64)&v38,
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
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v12 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v11,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v12 > 5u )
    {
      LODWORD(v49) = a4->bottom;
      v32 = a4->right;
      v33 = a4->top;
      v34 = a4->left;
      v35 = a3->bottom;
      v36 = a3->right;
      v37 = a3->top;
      v14 = a3->left;
      v38 = 0LL;
      v15 = *((_QWORD *)this + 6);
      v22 = v14;
      v39 = *(_QWORD *)(v10 + 48);
      v24 = *(_DWORD *)(v10 + 68);
      v25 = *(_DWORD *)(v10 + 16);
      v40 = *(_QWORD *)(v10 + 120);
      v41 = *(_QWORD *)(v10 + 112);
      v26 = *(_DWORD *)(v10 + 104);
      v42 = *(_QWORD *)(v10 + 96);
      v43 = *(_QWORD *)(v10 + 88);
      v27 = *(_DWORD *)(v10 + 80);
      v44 = *(_QWORD *)(v10 + 72);
      bottom = *(_DWORD *)(v10 + 32);
      v45 = *(_QWORD *)(v10 + 24);
      left = *(_DWORD *)v10;
      v46 = *(_QWORD *)(v10 + 128);
      top = *(_DWORD *)(v10 + 64);
      v47 = *(_QWORD *)(v10 + 56);
      right = *(_DWORD *)(v10 + 8);
      v23 = a2;
      v48 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        (unsigned __int8 *)dword_1806C977E,
        (const GUID *)(v15 + 8),
        v13,
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
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v49);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CSnapComponentTelemetry::OnGetWindowArrangementRects *)((char *)this + 8));
}
