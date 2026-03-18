/*
 * XREFs of FreeIndex @ 0x1C0146218
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PVOID __fastcall FreeIndex(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID result; // rax

  if ( gSessionId != gServiceSessionId || gServiceSessionId )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  PsTlsFree(*((unsigned int *)gpxsGlobals + 12));
  result = gpxsGlobals;
  *((_DWORD *)gpxsGlobals + 12) = 0;
  return result;
}
