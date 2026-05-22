/*
 * XREFs of ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18011DD40
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@XZ @ 0x18005C58C (-CalculateDevicePostureMode@DevicePostureHelpers@@YA-AW4DevicePostureMode@Input@Internal@UI@Wind.c)
 *     ?IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ @ 0x18005D010 (-IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ.c)
 *     ?TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ @ 0x180145D94 (-TraceCurrentState@VirtualTouchpadControllerProxy@@SAXXZ.c)
 *     ?Thresholds@ShellGestures@InputTraceLogging@@SAX_J0000@Z @ 0x18016D5DC (-Thresholds@ShellGestures@InputTraceLogging@@SAX_J0000@Z.c)
 */

void __fastcall InputTraceLogging::Callback(const struct _GUID *a1)
{
  DevicePostureHelpers *v1; // rcx

  if ( InputTraceLogging::s_registered )
  {
    VirtualTouchpadControllerProxy::TraceCurrentState();
    InputTraceLogging::ShellGestures::Thresholds(
      ShellGesturesRecognizer::s_thresholds,
      (unsigned int)dword_180268010,
      qword_180268018,
      (unsigned int)dword_180268020,
      (unsigned int)dword_180268024);
    DevicePostureHelpers::IsDeviceConvertible(v1);
    DevicePostureHelpers::CalculateDevicePostureMode();
  }
}
