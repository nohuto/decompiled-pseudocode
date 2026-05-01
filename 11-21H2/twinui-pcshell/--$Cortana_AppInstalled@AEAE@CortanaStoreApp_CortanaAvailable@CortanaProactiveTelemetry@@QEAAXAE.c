/*
 * XREFs of ??$Cortana_AppInstalled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x180134A94
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800889D0 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

int __fastcall CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::Cortana_AppInstalled<unsigned char &>(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  bool v6; // zf
  __int64 v7; // r8
  unsigned __int16 *v8; // rax
  REGHANDLE v9; // rcx
  __int64 v10; // rdx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  bool v13; // [rsp+38h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+3Ch] [rbp-25h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-19h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-9h]
  __int64 v18; // [rsp+60h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  void *v20; // [rsp+78h] [rbp+17h]
  int v21; // [rsp+80h] [rbp+1Fh]
  int v22; // [rsp+84h] [rbp+23h]
  bool *v23; // [rsp+88h] [rbp+27h]
  int v24; // [rsp+90h] [rbp+2Fh]
  int v25; // [rsp+94h] [rbp+33h]
  __int64 *v26; // [rsp+98h] [rbp+37h]
  int v27; // [rsp+A0h] [rbp+3Fh]
  int v28; // [rsp+A4h] [rbp+43h]

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    *(_QWORD *)&EventDescriptor.Id = &`CortanaProactiveLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B4040;
    qword_1807B4040 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B4058 = (__int64)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&EventDescriptor, v10, v11);
  }
  LODWORD(v4) = (_DWORD)Context;
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_QWORD *)(v5 + 16) & 0x400000000000LL) != 0 )
  {
    v4 = *(_QWORD *)(v5 + 24) & 0x400000000000LL;
    if ( v4 == *(_QWORD *)(v5 + 24) )
    {
      v6 = *a2 == 0;
      v7 = *(_QWORD *)(a1 + 48);
      v26 = &v18;
      v13 = !v6;
      v28 = 0;
      v25 = 0;
      v23 = &v13;
      *(_DWORD *)&EventDescriptor.Level = 5;
      v8 = *(unsigned __int16 **)(v5 + 8);
      v9 = *(_QWORD *)(v5 + 32);
      UserData.Ptr = (ULONGLONG)v8;
      v24 = 1;
      EventDescriptor.Keyword = 0x400000000000LL;
      v18 = 0x1000000LL;
      v27 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *v8;
      v20 = &unk_1806ACD3D;
      v22 = 1;
      UserData.Reserved = 2;
      v21 = 57;
      v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v4) = EventWriteTransfer(v9, &EventDescriptor, (LPCGUID)(v7 + 8), 0LL, 4u, &UserData);
    }
  }
  return v4;
}
