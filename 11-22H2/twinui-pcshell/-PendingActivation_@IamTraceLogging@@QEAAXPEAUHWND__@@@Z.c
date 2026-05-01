/*
 * XREFs of ?PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x18039E48C
 * Callers:
 *     ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x1803948DC (--$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C3264 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

void __fastcall IamTraceLogging::PendingActivation_(IamTraceLogging *this, union _RTL_RUN_ONCE *a2)
{
  DWORD WindowThreadProcessId; // edi
  __int64 v4; // rdx
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v6; // rcx
  DWORD v7; // [rsp+40h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-18h] BYREF
  union _RTL_RUN_ONCE *v9; // [rsp+50h] [rbp-10h] BYREF
  int v10; // [rsp+58h] [rbp-8h]
  IamTraceLogging *fPending; // [rsp+80h] [rbp+20h] BYREF
  DWORD dwProcessId; // [rsp+90h] [rbp+30h] BYREF
  DWORD v13; // [rsp+98h] [rbp+38h] BYREF

  fPending = this;
  Context = 0LL;
  WindowThreadProcessId = GetWindowThreadProcessId((HWND)a2, &dwProcessId);
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v9 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_18098DB60;
    qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v10 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v9, v4, v5);
  }
  v6 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v6 > 5u )
  {
    v7 = dwProcessId;
    v13 = WindowThreadProcessId;
    v9 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v6,
      byte_1808422C7,
      0LL,
      0LL,
      (__int64)&v9,
      (__int64)&v7,
      (__int64)&v13);
  }
}
