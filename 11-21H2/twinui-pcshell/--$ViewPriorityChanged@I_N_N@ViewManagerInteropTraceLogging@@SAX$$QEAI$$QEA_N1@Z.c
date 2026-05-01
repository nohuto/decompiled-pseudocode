/*
 * XREFs of ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18012F8E4
 * Callers:
 *     _lambda_16fabc5b2bb972ab3fdf76682bec0a78_::operator() @ 0x18012F698 (_lambda_16fabc5b2bb972ab3fdf76682bec0a78_--operator().c)
 *     _lambda_3f29781fb943bbf342d9b9e3defd4b9c_::operator() @ 0x18012F7D8 (_lambda_3f29781fb943bbf342d9b9e3defd4b9c_--operator().c)
 *     _lambda_2dc6b38f508d97fb149bdc7180961dcb_::operator() @ 0x1804115EC (_lambda_2dc6b38f508d97fb149bdc7180961dcb_--operator().c)
 *     _lambda_9036c4a5e238091638ce6358157a1179_::operator() @ 0x1804123A4 (_lambda_9036c4a5e238091638ce6358157a1179_--operator().c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(
        int *a1,
        char *a2,
        char *a3)
{
  ULONG result; // eax
  __int64 v7; // rcx
  char v8; // al
  unsigned __int16 *v9; // rax
  REGHANDLE v10; // rcx
  __int64 v11; // rdx
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char v13; // [rsp+38h] [rbp-39h] BYREF
  char v14; // [rsp+39h] [rbp-38h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-35h] BYREF
  int v16; // [rsp+40h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v21; // [rsp+78h] [rbp+7h]
  int v22; // [rsp+80h] [rbp+Fh]
  int v23; // [rsp+84h] [rbp+13h]
  int *v24; // [rsp+88h] [rbp+17h]
  int v25; // [rsp+90h] [rbp+1Fh]
  int v26; // [rsp+94h] [rbp+23h]
  char *v27; // [rsp+98h] [rbp+27h]
  int v28; // [rsp+A0h] [rbp+2Fh]
  int v29; // [rsp+A4h] [rbp+33h]
  char *v30; // [rsp+A8h] [rbp+37h]
  int v31; // [rsp+B0h] [rbp+3Fh]
  int v32; // [rsp+B4h] [rbp+43h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    *(_QWORD *)&EventDescriptor.Id = &`ViewManagerInteropLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B4348;
    qword_1807B4348 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B4360 = (__int64)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&EventDescriptor, v11, v12);
  }
  result = (unsigned int)Context;
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a3;
    v32 = 0;
    v29 = 0;
    v26 = 0;
    EventDescriptor.Keyword = 0LL;
    v13 = v8;
    v14 = *a2;
    v16 = *a1;
    v30 = &v13;
    v27 = &v14;
    v24 = &v16;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v9 = *(unsigned __int16 **)(v7 + 8);
    v10 = *(_QWORD *)(v7 + 32);
    UserData.Ptr = (ULONGLONG)v9;
    v31 = 1;
    v28 = 1;
    v25 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v9;
    v21 = &unk_1806B261F;
    v23 = 1;
    UserData.Reserved = 2;
    v22 = 64;
    v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v10, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
