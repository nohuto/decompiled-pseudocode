/*
 * XREFs of ?MPCManager_SendHomeGestureReadyChanged_@ISMTracing@@QEAAX_NKK_KII@Z @ 0x1800AF9A8
 * Callers:
 *     ??$MPCManager_SendHomeGestureReadyChanged@AEA_NAEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEA_NAEAK1AEA_KAEAI3@Z @ 0x1800ADD90 (--$MPCManager_SendHomeGestureReadyChanged@AEA_NAEAKAEAKAEA_KAEAIAEAI@ISMTracing@@SAXAEA_NAEAK1AE.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U3@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@5355@Z @ 0x1800ADFB8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U3@U1@U3@U3@.c)
 */

void __fastcall ISMTracing::MPCManager_SendHomeGestureReadyChanged_(
        ISMTracing *this,
        char a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  WINBOOL fPending; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v14; // [rsp+6Ch] [rbp-Dh] BYREF
  unsigned int v15; // [rsp+70h] [rbp-9h] BYREF
  int v16; // [rsp+74h] [rbp-5h] BYREF
  int v17; // [rsp+78h] [rbp-1h] BYREF
  LPVOID Context; // [rsp+80h] [rbp+7h] BYREF
  __int64 v19; // [rsp+88h] [rbp+Fh] BYREF
  int v20; // [rsp+90h] [rbp+17h]
  unsigned __int64 v21; // [rsp+98h] [rbp+1Fh] BYREF
  ISMTracing *v22; // [rsp+C8h] [rbp+4Fh] BYREF

  v22 = this;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v19 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v20 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v19);
  }
  v12 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v12 > 4u
    && (*(_QWORD *)(v12 + 16) & 0x400000000001LL) != 0
    && (*(_QWORD *)(v12 + 24) & 0x400000000001LL) == *(_QWORD *)(v12 + 24) )
  {
    v14 = a7;
    v15 = a6;
    v21 = a5;
    v16 = a4;
    v17 = a3;
    LOBYTE(v22) = a2;
    v19 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      byte_1802213D2,
      v10,
      v11,
      (__int64)&v19,
      (__int64)&v22,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v21,
      (__int64)&v15,
      (__int64)&v14);
  }
}
