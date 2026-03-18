/*
 * XREFs of DxgkMiracastStopMiracastSession @ 0x1C00630E4
 * Callers:
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C02D3CA0 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0060B60 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0060D90 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C039F134 (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastStopMiracastSession(const WCHAR *a1, struct _KEVENT *a2)
{
  char *DeviceContextFromName; // rax
  int *v4; // rdi
  unsigned int v6; // ebx

  DeviceContextFromName = (char *)DpiMiracastGetDeviceContextFromName(a1);
  v4 = (int *)DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    v6 = DpiMiracastStopMiracastSessionSync(DeviceContextFromName, 0, 0LL, a2, 0x80u, 0);
    DpiMiracastReleaseMiracastDeviceContext(v4, (unsigned int)v4);
    return v6;
  }
  else
  {
    WdLogSingleEntry1(2LL, -2147483642LL);
    if ( a2 )
      ObfDereferenceObject(a2);
    return 2147483654LL;
  }
}
