/*
 * XREFs of PnpDiagnosticTraceObject @ 0x140322E10
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x140322BD0 (PnpDeviceCompletionRoutine.c)
 *     PnpStartDeviceNode @ 0x1407936C0 (PnpStartDeviceNode.c)
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     PipEnumerateDevice @ 0x140794F6C (PipEnumerateDevice.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1407E88B0 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     IopUnloadDriver @ 0x140857B78 (IopUnloadDriver.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1408671C0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDevCfgProcessDevice @ 0x14087A430 (PiDevCfgProcessDevice.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14096E250 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpRebalance @ 0x14096EAB8 (PnpRebalance.c)
 *     PnpInitializeBootStartDriver @ 0x140B3DA00 (PnpInitializeBootStartDriver.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140B66550 (PnpEarlyLaunchImageNotificationPreProcess.c)
 *     PnpEarlyLaunchImageNotificationPostProcess @ 0x140B67FB0 (PnpEarlyLaunchImageNotificationPostProcess.c)
 * Callees:
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObject(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  REGHANDLE v2; // rbx
  int v5; // r8d
  __int16 v7; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v2 = PnpEtwHandle;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v5 = *a2;
  UserData.Reserved = 0;
  v11 = 0;
  v7 = (unsigned __int16)v5 >> 1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = *((_QWORD *)a2 + 1);
  v10 = v5;
  UserData.Size = 2;
  return EtwWrite(v2, EventDescriptor, 0LL, 2u, &UserData);
}
