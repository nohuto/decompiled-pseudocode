/*
 * XREFs of ?MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z @ 0x18010A22C
 * Callers:
 *     ??$MPCInputRouter_GetFrameworkViewTypeFromFocusTarget@AEAPEAUIFocusInputTarget@@AEAKIAEA_K@ISMTracing@@SAXAEAPEAUIFocusInputTarget@@AEAK$$QEAIAEA_K@Z @ 0x1801078C4 (--$MPCInputRouter_GetFrameworkViewTypeFromFocusTarget@AEAPEAUIFocusInputTarget@@AEAKIAEA_K@ISMTr.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@3@Z @ 0x180108014 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTe.c)
 *     ?GetFrameworkViewType@ISMTracing@@SAPEBGI@Z @ 0x180108F48 (-GetFrameworkViewType@ISMTracing@@SAPEBGI@Z.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18010946C (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+50h] [rbp-30h] BYREF
  int PIDOfTarget; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 *v13; // [rsp+58h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 FrameworkViewType; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF
  int v17; // [rsp+78h] [rbp-8h]
  ISMTracing *fPending; // [rsp+A0h] [rbp+20h] BYREF

  fPending = this;
  v13 = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, (LPVOID *)&v13)
    && (_DWORD)fPending )
  {
    v16 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
    v13 = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v17 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v16);
  }
  v8 = v13[1];
  if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
  {
    v14 = a5;
    FrameworkViewType = (__int64)ISMTracing::GetFrameworkViewType(a4);
    v11 = a3;
    PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
    v16 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v8,
      (unsigned __int8 *)dword_1802254CD,
      v9,
      v10,
      (__int64)&v16,
      (__int64)&PIDOfTarget,
      (__int64)&v11,
      (const WCHAR **)&FrameworkViewType,
      (__int64)&v14);
  }
}
