/*
 * XREFs of ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x1800BCF6C
 * Callers:
 *     ??$MPCCursorManager_MouseInterceptUpdate@AEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_N00@Z @ 0x1800BCA2C (--$MPCCursorManager_MouseInterceptUpdate@AEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_N00@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@33@Z @ 0x1800BCBB0 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

void __fastcall ISMTracing::MPCCursorManager_MouseInterceptUpdate_(
        ISMTracing *this,
        const bool *a2,
        const bool *a3,
        const bool *a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  char v10; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v11[3]; // [rsp+41h] [rbp-1Fh] BYREF
  WINBOOL fPending; // [rsp+44h] [rbp-1Ch] BYREF
  LPVOID Context; // [rsp+48h] [rbp-18h] BYREF
  union _RTL_RUN_ONCE *v14; // [rsp+50h] [rbp-10h] BYREF
  int v15; // [rsp+58h] [rbp-8h]
  ISMTracing *v16; // [rsp+80h] [rbp+20h] BYREF

  v16 = this;
  if ( ISMTracing::IsEnabled((char)this) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v14 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v15 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v14);
    }
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
    {
      LOBYTE(v16) = *a4;
      v10 = *a3;
      v11[0] = *a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v9,
        byte_180221F6F,
        v7,
        v8,
        (__int64)v11,
        (__int64)&v10,
        (__int64)&v16);
    }
  }
}
