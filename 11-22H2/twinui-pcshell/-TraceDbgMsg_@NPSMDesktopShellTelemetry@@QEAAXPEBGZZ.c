/*
 * XREFs of ?TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ @ 0x180036710
 * Callers:
 *     ??$TraceDbgMsg@AEAY0BC@$$CBGAEAPEAUHWND__@@@NPSMDesktopShellTelemetry@@SAXAEAY0BC@$$CBGAEAPEAUHWND__@@@Z @ 0x180036428 (--$TraceDbgMsg@AEAY0BC@$$CBGAEAPEAUHWND__@@@NPSMDesktopShellTelemetry@@SAXAEAY0BC@$$CBGAEAPEAUHW.c)
 *     ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1800364FC (-_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x1800368A4 (StringVPrintfWorkerW.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 */

void NPSMDesktopShellTelemetry::TraceDbgMsg_(NPSMDesktopShellTelemetry *this, const unsigned __int16 *a2, ...)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int16 *v5; // rax
  REGHANDLE v6; // rcx
  WINBOOL fPending[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C8h] BYREF
  size_t pcchNewDestLength; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  union _RTL_RUN_ONCE *v11; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+68h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-98h] BYREF
  void *v14; // [rsp+80h] [rbp-88h]
  int v15; // [rsp+88h] [rbp-80h]
  int v16; // [rsp+8Ch] [rbp-7Ch]
  wchar_t *v17; // [rsp+90h] [rbp-78h]
  int v18; // [rsp+98h] [rbp-70h]
  int v19; // [rsp+9Ch] [rbp-6Ch]
  wchar_t pszDest[2048]; // [rsp+A8h] [rbp-60h] BYREF
  va_list va; // [rsp+10E8h] [rbp+FE0h] BYREF

  va_start(va, a2);
  memset_0(pszDest, 0, sizeof(pszDest));
  pcchNewDestLength = 0LL;
  StringVPrintfWorkerW(pszDest, 0x800uLL, &pcchNewDestLength, a2, va);
  *(_QWORD *)&EventDescriptor.Id = 0LL;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`NPSMDesktopShellLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    v11 = &`NPSMDesktopShellLogging::Instance'::`2'::wrapper;
    Context = &qword_18098ED58;
    qword_18098ED58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098ED70 = (__int64)&`NPSMDesktopShellLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a200443fcc2186113617defd521f394c_::_lambda_invoker_cdecl_);
    LODWORD(v12) = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v11);
  }
  v3 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( pszDest[v4] );
    v19 = 0;
    v18 = 2 * v4 + 2;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v5 = *(unsigned __int16 **)(v3 + 8);
    v6 = *(_QWORD *)(v3 + 32);
    UserData.Ptr = (ULONGLONG)v5;
    v17 = pszDest;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *v5;
    v14 = &unk_18087B84A;
    UserData.Reserved = 2;
    v15 = 28;
    v16 = 1;
    LODWORD(pcchNewDestLength) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v6, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
