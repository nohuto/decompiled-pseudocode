/*
 * XREFs of ?MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z @ 0x1800A9A24
 * Callers:
 *     ??$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_NAEAK$$QEA_N2020000@Z @ 0x1800A96F8 (--$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@33333333@Z @ 0x1800A9830 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteT.c)
 */

void __fastcall ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus_(
        ISMTracing *this,
        const bool *a2,
        const unsigned int *a3,
        const bool *a4,
        const bool *a5,
        const bool *a6,
        const bool *a7,
        const bool *a8,
        const bool *a9,
        const bool *a10,
        const bool *a11)
{
  __int64 v14; // r9
  __int64 v15; // r8
  char v16; // cl
  char v17; // [rsp+78h] [rbp-21h] BYREF
  char v18; // [rsp+79h] [rbp-20h] BYREF
  char v19; // [rsp+7Ah] [rbp-1Fh] BYREF
  char v20; // [rsp+7Bh] [rbp-1Eh] BYREF
  char v21; // [rsp+7Ch] [rbp-1Dh] BYREF
  char v22; // [rsp+7Dh] [rbp-1Ch] BYREF
  char v23; // [rsp+7Eh] [rbp-1Bh] BYREF
  char v24; // [rsp+7Fh] [rbp-1Ah] BYREF
  WINBOOL fPending; // [rsp+80h] [rbp-19h] BYREF
  int v26; // [rsp+84h] [rbp-15h] BYREF
  LPVOID Context; // [rsp+88h] [rbp-11h] BYREF
  union _RTL_RUN_ONCE *v28; // [rsp+90h] [rbp-9h] BYREF
  int v29; // [rsp+98h] [rbp-1h]
  ISMTracing *v30; // [rsp+C8h] [rbp+2Fh] BYREF

  v30 = this;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v28 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v29 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v28);
  }
  v15 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v15 > 4u && (*(_BYTE *)(v15 + 16) & 1) != 0 && (*(_QWORD *)(v15 + 24) & 1LL) == *(_QWORD *)(v15 + 24) )
  {
    LOBYTE(v30) = *a11;
    v17 = *a10;
    v18 = *a9;
    v19 = *a8;
    v20 = *a7;
    v21 = *a6;
    v16 = *a5;
    v23 = *a4;
    v26 = *a3;
    v24 = *a2;
    v22 = v16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v15,
      byte_1802211AC,
      v15,
      v14,
      (__int64)&v24,
      (__int64)&v26,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v30);
  }
}
