/*
 * XREFs of ??0AutoProviderRegistrar@@QEAA@P6AXXZ0@Z @ 0x18015481C
 * Callers:
 *     _dynamic_initializer_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__ @ 0x180009F50 (_dynamic_initializer_for__g_ProviderRegistrationMicrosoft_Windows_Deplorch__.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

AutoProviderRegistrar *__fastcall AutoProviderRegistrar::AutoProviderRegistrar(
        AutoProviderRegistrar *this,
        void (*a2)(void),
        void (*a3)(void))
{
  int v3; // edi
  HMODULE ModuleHandleW; // rbx
  __int64 (__fastcall *ProcAddress)(LPCGUID, WMIDPREQUEST, PTRACEHANDLE); // rax
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [rsp+40h] [rbp-148h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+50h] [rbp-138h] BYREF

  g_ProviderRegistrationMicrosoft_Windows_Deplorch = AutoUnregisterMicrosoft_Windows_Deplorch;
  if ( !Microsoft_Windows_Deplorch_Context )
  {
    v3 = 0;
    if ( McGenTracingSupportInit )
      goto LABEL_9;
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( !GetVersionExW(&VersionInformation) )
      goto LABEL_4;
    McGenPreVista = VersionInformation.dwMajorVersion < 6;
    if ( VersionInformation.dwMajorVersion > 6
      || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion > 1 )
    {
      v3 = 1;
    }
    if ( VersionInformation.dwMajorVersion >= 6 )
    {
LABEL_4:
      ModuleHandleW = GetModuleHandleW(L"advapi32.dll");
      if ( ModuleHandleW || v3 && (ModuleHandleW = GetModuleHandleW(L"api-ms-win-eventing-provider-l1-1-0.dll")) != 0LL )
      {
        PfnEventWrite = (__int64)GetProcAddress(ModuleHandleW, "EventWrite");
        if ( PfnEventWrite )
        {
          ProcAddress = (__int64 (__fastcall *)(LPCGUID, WMIDPREQUEST, PTRACEHANDLE))GetProcAddress(
                                                                                       ModuleHandleW,
                                                                                       "EventRegister");
          PfnEventRegister = ProcAddress;
          if ( ProcAddress )
          {
            PfnEventUnregister = (__int64)GetProcAddress(ModuleHandleW, "EventUnregister");
            if ( PfnEventUnregister )
              goto LABEL_8;
          }
          PfnEventRegister = McGenEventTracingRegister;
        }
      }
      McGenPreVista = 1;
    }
LABEL_8:
    McGenTracingSupportInit = 1;
LABEL_9:
    if ( McGenPreVista )
    {
      TraceGuidReg.RegHandle = 0LL;
      Microsoft_Windows_Deplorch_Context = (ULONG64)&Microsoft_Windows_Deplorch_Context;
      TraceGuidReg.Guid = &Microsoft_Windows_Deplorch;
      RegisterTraceGuidsW(
        McGenControlCallback,
        &Microsoft_Windows_Deplorch_Context,
        &Microsoft_Windows_Deplorch,
        1u,
        &TraceGuidReg,
        0LL,
        0LL,
        &Microsoft_Windows_Deplorch_Context);
    }
    else
    {
      ((void (__fastcall *)(const GUID *, void (__fastcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, unsigned __int16 *), ULONG64 *, ULONG64 *))PfnEventRegister)(
        &Microsoft_Windows_Deplorch,
        McGenControlCallbackV2,
        &Microsoft_Windows_Deplorch_Context,
        &Microsoft_Windows_Deplorch_Context);
    }
  }
  return (AutoProviderRegistrar *)&g_ProviderRegistrationMicrosoft_Windows_Deplorch;
}
