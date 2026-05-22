/*
 * XREFs of ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800B6210
 * Callers:
 *     ??$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization@AEAPEAULegacyInputInfo@@@ISMTracing@@SAXAEAPEAULegacyInputInfo@@@Z @ 0x1800B3224 (--$MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization@AEAPEAULegacyInputI.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x1800B37DC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_(
        ISMTracing *this,
        struct LegacyInputInfo *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // [rsp+60h] [rbp+17h] BYREF
  int v7; // [rsp+64h] [rbp+1Bh] BYREF
  int v8; // [rsp+68h] [rbp+1Fh] BYREF
  int v9; // [rsp+6Ch] [rbp+23h] BYREF
  int v10; // [rsp+70h] [rbp+27h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+2Fh] BYREF
  union _RTL_RUN_ONCE *v12; // [rsp+80h] [rbp+37h] BYREF
  int v13; // [rsp+88h] [rbp+3Fh]
  ISMTracing *fPending; // [rsp+B0h] [rbp+67h] BYREF
  int v15; // [rsp+C0h] [rbp+77h] BYREF
  int v16; // [rsp+C8h] [rbp+7Fh] BYREF

  fPending = this;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v12 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v13 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v12);
  }
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
  {
    v15 = *((_DWORD *)a2 + 35);
    v16 = *((_DWORD *)a2 + 34);
    v6 = *((_DWORD *)a2 + 33);
    v7 = *((_DWORD *)a2 + 32);
    v8 = *((_DWORD *)a2 + 31);
    v9 = *((_DWORD *)a2 + 30);
    v10 = *((_DWORD *)a2 + 20);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      byte_180221984,
      v3,
      v4,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v16,
      (__int64)&v15);
  }
}
