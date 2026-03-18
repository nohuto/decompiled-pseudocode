/*
 * XREFs of FxLibraryCommonCommission @ 0x1C002BFD8
 * Callers:
 *     LibraryCommission @ 0x1C0017660 (LibraryCommission.c)
 * Callees:
 *     ?FxTraceInitialize@@YAJXZ @ 0x1C002292C (-FxTraceInitialize@@YAJXZ.c)
 *     ?GetTriageInfo@@YAXXZ @ 0x1C002BCEC (-GetTriageInfo@@YAXXZ.c)
 *     FxLibraryGlobalsCommission @ 0x1C0043F0C (FxLibraryGlobalsCommission.c)
 *     RegisterTelemetryProvider @ 0x1C004DB60 (RegisterTelemetryProvider.c)
 */

__int64 __fastcall FxLibraryCommonCommission()
{
  int v0; // ebx

  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryCommission\n");
  }
  v0 = FxLibraryGlobalsCommission();
  if ( v0 >= 0 )
  {
    RegisterTelemetryProvider();
    if ( (int)FxTraceInitialize() < 0 )
    {
      if ( WdfLdrDbgPrintOn )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "Failed to initialize tracing for WDF\n");
      }
    }
    else
    {
      unk_1C009FEF0 = 1;
    }
    gOsVersion.dwOSVersionInfoSize = 276;
    RtlGetVersion(&gOsVersion);
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "OsVersion(%d.%d)\n", gOsVersion.dwMajorVersion, gOsVersion.dwMinorVersion);
    }
    GetTriageInfo();
    return 0LL;
  }
  else
  {
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "FxLibraryGlobalsCommission failed %X\n", v0);
    }
    return (unsigned int)v0;
  }
}
