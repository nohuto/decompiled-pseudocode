/*
 * XREFs of MouseClassGetWaitWakeEnableState @ 0x1C000CF10
 * Callers:
 *     MouseStart @ 0x1C0002AB0 (MouseStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002D60 (__security_check_cookie.c)
 *     memset @ 0x1C0003200 (memset.c)
 *     MouseQueryDeviceKey @ 0x1C000D080 (MouseQueryDeviceKey.c)
 */

char __fastcall MouseClassGetWaitWakeEnableState(__int64 a1)
{
  NTSTATUS v2; // eax
  int DeviceKey; // eax
  void *v4; // rcx
  ULONGLONG v5; // rax
  int v6; // edi
  void *DeviceRegKey; // [rsp+38h] [rbp-190h] BYREF
  _BYTE OutputBuffer[80]; // [rsp+40h] [rbp-188h] BYREF
  _OSVERSIONINFOEXW VersionInfo; // [rsp+90h] [rbp-138h] BYREF

  DeviceRegKey = 0LL;
  v2 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 24), 1u, 0x1F0000u, &DeviceRegKey);
  if ( v2 >= 0 )
  {
    DeviceKey = MouseQueryDeviceKey(DeviceRegKey);
    v4 = DeviceRegKey;
    if ( DeviceKey >= 0 )
    {
      *(_BYTE *)(a1 + 345) = 0;
      LOBYTE(v2) = ZwClose(v4);
      return v2;
    }
    LOBYTE(v2) = ZwClose(DeviceRegKey);
    DeviceRegKey = 0LL;
  }
  if ( !*(_BYTE *)(a1 + 345) )
  {
    memset(&VersionInfo, 0, sizeof(VersionInfo));
    VersionInfo.dwOSVersionInfoSize = 284;
    VersionInfo.wProductType = 1;
    v5 = VerSetConditionMask(0LL, 0x80u, 1u);
    v2 = RtlVerifyVersionInfo(&VersionInfo, 0x80u, v5);
    if ( v2 >= 0 )
    {
      memset(OutputBuffer, 0, 0x4CuLL);
      v6 = 4;
      v2 = ZwPowerInformation(SystemPowerCapabilities, 0LL, 0, OutputBuffer, 0x4Cu);
      if ( v2 >= 0 )
      {
        if ( !OutputBuffer[5] )
        {
          if ( OutputBuffer[4] )
          {
            v6 = 3;
          }
          else
          {
            LOBYTE(v2) = -OutputBuffer[3];
            v6 = OutputBuffer[3] != 0 ? 2 : 0;
          }
        }
        if ( *(_DWORD *)(a1 + 272) >= v6 )
          *(_BYTE *)(a1 + 345) = 1;
      }
    }
  }
  return v2;
}
