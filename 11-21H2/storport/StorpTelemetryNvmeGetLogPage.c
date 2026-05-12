/*
 * XREFs of StorpTelemetryNvmeGetLogPage @ 0x1C0062E50
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0063D00 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     StorpTelemetrySendUnitNvmeLogPage @ 0x1C006424C (StorpTelemetrySendUnitNvmeLogPage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall StorpTelemetryNvmeGetLogPage(
        __int64 a1,
        int a2,
        unsigned int a3,
        _DWORD *a4,
        ULONG InputBufferLength)
{
  NTSTATUS result; // eax
  PIRP v8; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( InputBufferLength < (unsigned __int64)a3 + 48 )
    return -1073741789;
  a4[1] = 0;
  *a4 = 50;
  a4[5] = 0;
  a4[4] = a2;
  a4[7] = a3;
  a4[2] = 3;
  a4[3] = 2;
  a4[6] = 40;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(
         0x2D1400u,
         *(PDEVICE_OBJECT *)(a1 + 8),
         a4,
         InputBufferLength,
         a4,
         InputBufferLength,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v8 )
    return -1073741670;
  v8->IoStatus.Status = -1073741637;
  result = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v8);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 && (*a4 != 48 || a4[1] != 48 || a4[6] < 0x28u) )
    return -1073741637;
  return result;
}
