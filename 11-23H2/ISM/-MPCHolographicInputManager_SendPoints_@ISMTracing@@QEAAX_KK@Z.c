/*
 * XREFs of ?MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z @ 0x1800B68FC
 * Callers:
 *     ??$MPCHolographicInputManager_SendPoints@IW4InputType@@@ISMTracing@@SAX$$QEAI$$QEAW4InputType@@@Z @ 0x1800B3528 (--$MPCHolographicInputManager_SendPoints@IW4InputType@@@ISMTracing@@SAX$$QEAI$$QEAW4InputType@@@.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B3CCC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_SendPoints_(ISMTracing *this, union _RTL_RUN_ONCE *a2, int a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  LPVOID Context; // [rsp+30h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v9; // [rsp+38h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp-10h]
  ISMTracing *fPending; // [rsp+70h] [rbp+20h] BYREF
  int v12; // [rsp+88h] [rbp+38h] BYREF

  fPending = this;
  if ( ISMTracing::IsEnabled((char)this) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      v9 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v10 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v9);
    }
    v7 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
    {
      v12 = a3;
      v9 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v7,
        byte_180221A9A,
        v5,
        v6,
        (__int64)&v9,
        (__int64)&v12);
    }
  }
}
