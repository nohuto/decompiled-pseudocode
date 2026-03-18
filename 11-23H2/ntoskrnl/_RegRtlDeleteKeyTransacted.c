/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140862E48
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406C9C2C (_CmGetDeviceSoftwareKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x140795198 (_CmAddDeviceToContainerWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x14086B268 (_RegRtlDeleteTreeInternal.c)
 *     PiDqDeleteUserObject @ 0x14095C23C (PiDqDeleteUserObject.c)
 *     _PnpCtxRegDeleteKey @ 0x140A60B0C (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140A61138 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140A61830 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A61EF4 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140A6389C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140A659A0 (_CmAddPanelDeviceWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140A65FCC (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140A6AB9C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A6AFBC (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwDeleteKey @ 0x14041C8A0 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1406CED70 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteKeyTransacted(HANDLE a1, const WCHAR *a2, __int64 a3)
{
  int v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  if ( a2 )
  {
    v3 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x10000u, &KeyHandle, a3);
    if ( v3 < 0 )
      goto LABEL_5;
    a1 = KeyHandle;
  }
  v3 = ZwDeleteKey(a1);
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
