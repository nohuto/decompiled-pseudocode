/*
 * XREFs of ?HandleEditControlFocusChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180154710
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18005AAB8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??$HandleEditControlFocusChanged@AEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1802DE2E6 (--$HandleEditControlFocusChanged@AEAEAEBW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKe.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlFocusChanged(
        KeyboardHosting::TabTipAdapterPolicy *this,
        char a2,
        enum Windows::Internal::Shell::Text::ShellRequestType *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  int v13; // [rsp+48h] [rbp-8h]
  bool v14; // [rsp+80h] [rbp+30h] BYREF
  char v15; // [rsp+88h] [rbp+38h] BYREF
  WINBOOL fPending; // [rsp+90h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+98h] [rbp+48h] BYREF

  v15 = a2;
  if ( a3 )
  {
    *(_DWORD *)a3 = 0;
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context)
      && fPending )
    {
      v12 = (__int64)&`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper;
      Context = &qword_18098E9B8;
      qword_18098E9B8 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098E9D0 = (__int64)&`TouchKeyboardExperienceTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
      v13 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v12, v8, v9);
    }
    v10 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v10 > 5u
      && (*(_BYTE *)(v10 + 16) & 0x10) != 0
      && (*(_QWORD *)(v10 + 24) & 0x10LL) == *(_QWORD *)(v10 + 24) )
    {
      v15 = *(_BYTE *)a3;
      v12 = 0x1000000LL;
      v14 = a2 != 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        v10,
        (int)&unk_180864BA2,
        v6,
        v7,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v12);
    }
  }
  else
  {
    TouchKeyboardExperienceTelemetryLogger::HandleEditControlFocusChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType const &>(&v15);
  }
  *((_BYTE *)this + 556) = 0;
  *((_BYTE *)this + 600) = a2 != 0;
  return 0LL;
}
