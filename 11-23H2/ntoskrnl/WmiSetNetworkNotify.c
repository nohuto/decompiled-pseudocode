/*
 * XREFs of WmiSetNetworkNotify @ 0x1409E1ACC
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1407D5360 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1407D56D4 (EtwpDisableKernelTrace.c)
 * Callees:
 *     WmipBuildTraceDeviceList @ 0x1403A3AD0 (WmipBuildTraceDeviceList.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140849184 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipFreeTraceDeviceList @ 0x1408492B8 (WmipFreeTraceDeviceList.c)
 */

__int64 __fastcall WmiSetNetworkNotify(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1;
  P = 0LL;
  v4 = 0;
  v1 = WmipBuildTraceDeviceList(0x200000, &P, &v4);
  if ( v1 >= 0 )
  {
    v1 = WmipSendWmiIrpToTraceDeviceList((__int64)P, v4, 0xAu, 8u, (__int64)&v3);
    if ( v1 >= 0 )
      v1 = 0;
  }
  if ( P )
    WmipFreeTraceDeviceList((__int64 *)P, v4);
  return (unsigned int)v1;
}
