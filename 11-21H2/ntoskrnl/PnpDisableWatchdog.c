/*
 * XREFs of PnpDisableWatchdog @ 0x14074D6EC
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x1402D3290 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     PnpDeviceEventWorker @ 0x1407D5E30 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PnpFreeWatchdog @ 0x1402D3C18 (PnpFreeWatchdog.c)
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     PnpRecordBlackbox @ 0x14074ED04 (PnpRecordBlackbox.c)
 *     PnpWatchdogEtwWrite @ 0x140950084 (PnpWatchdogEtwWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDisableWatchdog(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  ExDeleteTimer(*(_QWORD *)(v1 + 56), 1, 1, 0LL);
  *(_QWORD *)(v1 + 56) = 0LL;
  if ( *(int *)(v1 + 96) > 0 )
    KeWaitForSingleObject((PVOID)(v1 + 104), Executive, 0, 0, 0LL);
  ExFreePoolWithTag((PVOID)v1, 0x54645750u);
  v3 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0LL;
  PnpRecordBlackbox(0LL, v3);
  if ( *(_BYTE *)(a1 + 32) )
    PnpWatchdogEtwWrite(a1, 0LL);
  PnpFreeWatchdog((void *)a1);
}
