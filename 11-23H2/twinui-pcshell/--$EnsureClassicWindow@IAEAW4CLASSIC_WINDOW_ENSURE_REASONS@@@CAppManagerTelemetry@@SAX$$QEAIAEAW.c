/*
 * XREFs of ??$EnsureClassicWindow@IAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@CAppManagerTelemetry@@SAX$$QEAIAEAW4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1803A81E8
 * Callers:
 *     ?EnsureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1803A8AE0 (-EnsureClassicWindow@CClassicWindowManager@@UEAAJPEAUHWND__@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800B2DB8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

char __fastcall CAppManagerTelemetry::EnsureClassicWindow<unsigned int,enum CLASSIC_WINDOW_ENSURE_REASONS &>(
        int *a1,
        int *a2)
{
  __int64 v4; // rdx
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char result; // al
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // r9
  int v10; // [rsp+40h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF
  int v13; // [rsp+58h] [rbp-8h]
  WINBOOL fPending; // [rsp+90h] [rbp+30h] BYREF
  int v15; // [rsp+98h] [rbp+38h] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v12 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_18098DB60;
    qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v13 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v12, v4, v5);
  }
  result = (char)Context;
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v7 > 5u )
  {
    result = tlgKeywordOn((__int64)v7, 0x200000000000LL);
    if ( result )
    {
      v15 = *a2;
      v10 = *a1;
      v12 = 0x1000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
               v8,
               (int)&unk_180843143,
               0,
               v9,
               (__int64)&v10,
               (__int64)&v15,
               (__int64)&v12);
    }
  }
  return result;
}
