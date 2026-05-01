/*
 * XREFs of McGenEventTracingRegister @ 0x1802851E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall McGenEventTracingRegister(
        LPCGUID ControlGuid,
        void (__fastcall *RequestAddress)(LPCGUID SourceId, ULONG IsEnabled, UCHAR Level, ULONGLONG MatchAnyKeyword, ULONGLONG MatchAllKeyword, PEVENT_FILTER_DESCRIPTOR FilterData, unsigned __int16 *CallbackContext),
        PTRACEHANDLE RegistrationHandle,
        _QWORD *a4)
{
  unsigned int v4; // ebx
  int v10; // esi
  HMODULE ModuleHandleW; // rdi
  void (__fastcall *v12)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, unsigned __int16 *); // rdx
  ULONG (__stdcall *v14)(WMIDPREQUESTCODE, PVOID, ULONG *, PVOID); // rcx
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [rsp+40h] [rbp-178h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+50h] [rbp-168h] BYREF

  v4 = 0;
  if ( !a4 )
    return 87LL;
  if ( *a4 )
    return v4;
  v10 = 0;
  if ( !McGenTracingSupportInit )
  {
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( GetVersionExW(&VersionInformation) )
    {
      McGenPreVista = VersionInformation.dwMajorVersion < 6;
      if ( VersionInformation.dwMajorVersion > 6
        || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion > 1 )
      {
        v10 = 1;
      }
      if ( VersionInformation.dwMajorVersion < 6 )
        goto LABEL_19;
    }
    ModuleHandleW = GetModuleHandleW(L"advapi32.dll");
    if ( ModuleHandleW || v10 && (ModuleHandleW = GetModuleHandleW(L"api-ms-win-eventing-provider-l1-1-0.dll")) != 0LL )
    {
      PfnEventWrite = (__int64)GetProcAddress(ModuleHandleW, "EventWrite");
      if ( PfnEventWrite )
      {
        PfnEventRegister = (__int64 (__fastcall *)(LPCGUID, WMIDPREQUEST, PTRACEHANDLE))GetProcAddress(
                                                                                          ModuleHandleW,
                                                                                          "EventRegister");
        if ( PfnEventRegister )
        {
          PfnEventUnregister = (__int64)GetProcAddress(ModuleHandleW, "EventUnregister");
          if ( PfnEventUnregister )
            goto LABEL_19;
        }
        PfnEventRegister = McGenEventTracingRegister;
      }
    }
    McGenPreVista = 1;
LABEL_19:
    McGenTracingSupportInit = 1;
  }
  if ( !McGenPreVista )
  {
    v12 = McGenControlCallbackV2;
    if ( RequestAddress )
      v12 = RequestAddress;
    return (unsigned int)((__int64 (__fastcall *)(LPCGUID, void (__fastcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, unsigned __int16 *), PTRACEHANDLE, _QWORD *))PfnEventRegister)(
                           ControlGuid,
                           v12,
                           RegistrationHandle,
                           a4);
  }
  if ( RegistrationHandle )
  {
    v14 = McGenControlCallback;
    if ( RequestAddress )
      v14 = (ULONG (__stdcall *)(WMIDPREQUESTCODE, PVOID, ULONG *, PVOID))RequestAddress;
    *a4 = RegistrationHandle;
    TraceGuidReg.Guid = ControlGuid;
    TraceGuidReg.RegHandle = 0LL;
    return RegisterTraceGuidsW(v14, RegistrationHandle, ControlGuid, 1u, &TraceGuidReg, 0LL, 0LL, RegistrationHandle);
  }
  return 87;
}
