/*
 * XREFs of ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x1800B5E54
 * Callers:
 *     ??$MPCHolographicInputManager_InputDisableFlagsChanged@_N_N@ISMTracing@@SAX$$QEA_N0@Z @ 0x1800B2FD0 (--$MPCHolographicInputManager_InputDisableFlagsChanged@_N_N@ISMTracing@@SAX$$QEA_N0@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800A6BF8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_InputDisableFlagsChanged_(
        ISMTracing *this,
        const bool *a2,
        const bool *a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-18h] BYREF
  union _RTL_RUN_ONCE *v10; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+48h] [rbp-8h]
  ISMTracing *v12; // [rsp+70h] [rbp+20h] BYREF
  char v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = this;
  if ( ISMTracing::IsEnabled((char)this) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v10 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v11 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v10);
    }
    v7 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
    {
      LOBYTE(v12) = *a3;
      v13 = *a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v7,
        byte_1802216D3,
        v5,
        v6,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
