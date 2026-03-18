/*
 * XREFs of FxLibraryCommonDecommission @ 0x1C005FF88
 * Callers:
 *     LibraryDecommission @ 0x1C0052CE0 (LibraryDecommission.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1C00603FC (McGenEventUnregister_EtwUnregister.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C008FA38 (UninitializeTelemetryAssertsKM.c)
 *     FxUninitializeBugCheckDriverInfo @ 0x1C0091130 (FxUninitializeBugCheckDriverInfo.c)
 */

__int64 __fastcall FxLibraryCommonDecommission()
{
  REGHANDLE RegHandle; // rcx
  unsigned __int64 *v1; // rcx

  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: enter\n");
  }
  if ( FxLibraryGlobals.InternalTracingInitialized )
  {
    IoWMIRegistrationControl(&WPP_GLOBAL_WDF_Control, 0x80000002);
    FxLibraryGlobals.InternalTracingInitialized = 0;
  }
  UninitializeTelemetryAssertsKM();
  RegHandle = Tlgg_TelemetryProviderProv.RegHandle;
  Tlgg_TelemetryProviderProv.RegHandle = 0LL;
  Tlgg_TelemetryProviderProv.LevelPlus1 = 0;
  EtwUnregister(RegHandle);
  McGenEventUnregister_EtwUnregister(v1);
  if ( FxLibraryGlobals.DriverTracker.m_PoolToFree )
  {
    ExFreePoolWithTag(FxLibraryGlobals.DriverTracker.m_PoolToFree, 0);
    FxLibraryGlobals.DriverTracker.m_PoolToFree = 0LL;
  }
  FxLibraryGlobals.DriverTracker.m_DriverUsage = 0LL;
  FxLibraryGlobals.DriverTracker.m_Number = 0;
  FxUninitializeBugCheckDriverInfo();
  FxLibraryGlobals.FxDriverGlobalsListLock.m_DbgFlagIsInitialized = 0;
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: exit\n");
  }
  return 0LL;
}
