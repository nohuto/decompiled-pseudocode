/*
 * XREFs of InvokeMouseCursorPositionCallout @ 0x1C01E7ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01DBD60 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InvokeMouseCursorPositionCallout(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9[2]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v10[20]; // [rsp+30h] [rbp-C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v9, "MouseCursorPosCallout", 0LL);
  if ( !CInputThreadBase::IsInputThread(gpInputThread) && !CInputThreadBase::IsInputThread(gpKernelSensorThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  memset(v10, 0, sizeof(v10));
  v10[0] = 0x300000000LL;
  v10[3] = a3;
  LODWORD(v10[2]) = a1;
  v10[1] = a2;
  InputExtensibilityCallout::CallUserModeLockFree(
    gpInputExtensibilityCallout,
    (struct _CLIENT_DEVICE_NOTIFICATION *)v10);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v9);
}
