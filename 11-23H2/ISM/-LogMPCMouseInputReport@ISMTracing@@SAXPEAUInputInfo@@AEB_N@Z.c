/*
 * XREFs of ?LogMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C7054
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800C6FB0 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@444333@Z @ 0x1800C4A28 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U1@U1@U1@@-$_tlgWriteT.c)
 */

void __fastcall ISMTracing::LogMPCMouseInputReport(struct InputInfo *a1, const bool *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  _BYTE v7[4]; // [rsp+70h] [rbp+7h] BYREF
  WINBOOL fPending; // [rsp+74h] [rbp+Bh] BYREF
  int v9; // [rsp+78h] [rbp+Fh] BYREF
  int v10; // [rsp+7Ch] [rbp+13h] BYREF
  int v11; // [rsp+80h] [rbp+17h] BYREF
  int v12; // [rsp+84h] [rbp+1Bh] BYREF
  int v13; // [rsp+88h] [rbp+1Fh] BYREF
  int v14; // [rsp+8Ch] [rbp+23h] BYREF
  LPVOID Context; // [rsp+90h] [rbp+27h] BYREF
  union _RTL_RUN_ONCE *v16; // [rsp+98h] [rbp+2Fh] BYREF
  int v17; // [rsp+A0h] [rbp+37h]
  char v18; // [rsp+D0h] [rbp+67h] BYREF
  char v19; // [rsp+E0h] [rbp+77h] BYREF
  char v20; // [rsp+E8h] [rbp+7Fh] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v16 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v17 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v16);
  }
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
  {
    v9 = *((_DWORD *)a1 + 26);
    v10 = *((_DWORD *)a1 + 25);
    v11 = *((_DWORD *)a1 + 24);
    v18 = *((_BYTE *)a1 + 120);
    v19 = *((_BYTE *)a1 + 125);
    v20 = *((_BYTE *)a1 + 121);
    v7[0] = *a2;
    v12 = *((_DWORD *)a1 + 2);
    v13 = *((_DWORD *)a1 + 1);
    v14 = *(_DWORD *)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      byte_18022266D,
      v4,
      v5,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)v7,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
