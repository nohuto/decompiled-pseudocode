/*
 * XREFs of ??$SetPresentationState@III@CAppManagerTelemetry@@SAX$$QEAI00@Z @ 0x180022474
 * Callers:
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x180022280 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

ULONG __fastcall CAppManagerTelemetry::SetPresentationState<unsigned int,unsigned int,unsigned int>(
        int *a1,
        int *a2,
        int *a3)
{
  ULONG result; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int16 *v9; // rax
  REGHANDLE v10; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  int v12; // [rsp+3Ch] [rbp-35h] BYREF
  int v13; // [rsp+40h] [rbp-31h] BYREF
  int v14; // [rsp+44h] [rbp-2Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v17; // [rsp+60h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v19; // [rsp+78h] [rbp+7h]
  int v20; // [rsp+80h] [rbp+Fh]
  int v21; // [rsp+84h] [rbp+13h]
  int *v22; // [rsp+88h] [rbp+17h]
  int v23; // [rsp+90h] [rbp+1Fh]
  int v24; // [rsp+94h] [rbp+23h]
  int *v25; // [rsp+98h] [rbp+27h]
  int v26; // [rsp+A0h] [rbp+2Fh]
  int v27; // [rsp+A4h] [rbp+33h]
  int *v28; // [rsp+A8h] [rbp+37h]
  int v29; // [rsp+B0h] [rbp+3Fh]
  int v30; // [rsp+B4h] [rbp+43h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    *(_QWORD *)&EventDescriptor.Id = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_18098DB60;
    qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&EventDescriptor);
  }
  result = (unsigned int)Context;
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *a3;
    v30 = 0;
    v27 = 0;
    v24 = 0;
    EventDescriptor.Keyword = 0LL;
    v12 = v8;
    v13 = *a2;
    v14 = *a1;
    v28 = &v12;
    v25 = &v13;
    v22 = &v14;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v9 = *(unsigned __int16 **)(v7 + 8);
    v10 = *(_QWORD *)(v7 + 32);
    UserData.Ptr = (ULONGLONG)v9;
    v29 = 4;
    v26 = 4;
    v23 = 4;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *v9;
    v19 = &unk_1808460CE;
    UserData.Reserved = 2;
    v20 = 56;
    v21 = 1;
    v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(v10, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return result;
}
