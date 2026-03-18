/*
 * XREFs of UsbhAcquireApiLock @ 0x1C003D610
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C003DB64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003E348 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C003E67C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C003E8F4 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003EBB8 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003EE8C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F11C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003F5CC (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C003F8F4 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C003FC08 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C003FEF8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C00401D8 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C00404C8 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0031220 (UsbhAcquireFdoPnpLock.c)
 */

__int64 __fastcall UsbhAcquireApiLock(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // rbx
  _DWORD *v6; // rax
  int v7; // esi
  _DWORD *v8; // rax
  int v9; // eax
  __int64 v10; // r10

  v3 = a2;
  Log(a1, 32, 1095774507, 0LL, a2);
  v6 = FdoExt(a1);
  v7 = 0;
  KeWaitForSingleObject(v6 + 1230, Executive, 0, 0, 0LL);
  v8 = FdoExt(a1);
  v9 = UsbhAcquireFdoPnpLock(a1, (__int64)(v8 + 434), 11, v3, 1);
  v10 = v9;
  *a3 = 1;
  if ( v9 != 5 )
  {
    if ( v9 == 6 )
      Log(a1, 32, 1095774563, 0LL, v3);
    v7 = -1073741810;
  }
  Log(a1, 32, 1095774497, v7, v10);
  return (unsigned int)v7;
}
