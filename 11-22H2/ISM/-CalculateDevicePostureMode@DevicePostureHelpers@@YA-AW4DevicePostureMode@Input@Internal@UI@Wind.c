/*
 * XREFs of ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@XZ @ 0x18006E1F0
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18012BD30 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?EvaluatePosture@Postures@InputTraceLogging@@SAXKK_NW4DevicePostureMode@Input@Internal@UI@Windows@@@Z @ 0x18006E3F8 (-EvaluatePosture@Postures@InputTraceLogging@@SAXKK_NW4DevicePostureMode@Input@Internal@UI@Window.c)
 *     ?IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ @ 0x18006ED90 (-IsValidTabletDisplayConfig@DevicePostureHelpers@@YA_NXZ.c)
 */

__int64 DevicePostureHelpers::CalculateDevicePostureMode()
{
  unsigned int v0; // ebx
  bool IsValidTabletDisplayConfig; // di
  unsigned int v2; // esi
  unsigned int SystemMetrics; // ebp
  __int64 v4; // r8
  DevicePostureHelpers *v5; // rcx

  v0 = 0;
  IsValidTabletDisplayConfig = 0;
  v2 = -1;
  SystemMetrics = GetSystemMetrics(8195);
  if ( !SystemMetrics )
  {
    v2 = GetSystemMetrics(8196);
    if ( !v2 )
    {
      IsValidTabletDisplayConfig = DevicePostureHelpers::IsValidTabletDisplayConfig(v5);
      if ( IsValidTabletDisplayConfig )
        v0 = SystemMetrics + 1;
    }
  }
  LOBYTE(v4) = IsValidTabletDisplayConfig;
  InputTraceLogging::Postures::EvaluatePosture(SystemMetrics, v2, v4, v0);
  return v0;
}
