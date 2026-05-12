/*
 * XREFs of StorpAdapterTopologyWorkItemRoutine @ 0x1C0021950
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

void __fastcall StorpAdapterTopologyWorkItemRoutine(__int64 DeviceObject, struct _IO_WORKITEM *Context)
{
  void *v2; // r14
  _DWORD *OutputBuffer; // rbx
  char v6; // r15
  ULONG OutputBufferLength; // edi
  PIRP v8; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+Fh] BYREF
  __int64 InputBuffer; // [rsp+78h] [rbp+1Fh] BYREF
  int v12; // [rsp+80h] [rbp+27h]

  v2 = *(void **)(DeviceObject + 64);
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  v12 = 0;
  memset(&Event, 0, sizeof(Event));
  OutputBuffer = 0LL;
  v6 = 0;
  if ( !KeGetCurrentIrql() )
  {
    OutputBufferLength = 18768;
    while ( 1 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      OutputBuffer = (_DWORD *)RaidAllocatePool(64LL, OutputBufferLength, 1700028754LL, DeviceObject);
      if ( !OutputBuffer )
        break;
      InputBuffer = 53LL;
      v8 = IoBuildDeviceIoControlRequest(
             0x2D1400u,
             *((PDEVICE_OBJECT *)v2 + 1),
             &InputBuffer,
             0xCu,
             OutputBuffer,
             OutputBufferLength,
             0,
             &Event,
             &IoStatusBlock);
      if ( !v8 )
        break;
      v8->IoStatus.Status = -1073741637;
      if ( IofCallDriver(*((PDEVICE_OBJECT *)v2 + 1), v8) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( OutputBuffer[1] <= OutputBufferLength || v6 )
        break;
      OutputBufferLength = OutputBuffer[1];
      ExFreePoolWithTag(OutputBuffer, 0x65546152u);
      v6 = 1;
    }
  }
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v2 + 37));
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0x65546152u);
  if ( Context )
    IoFreeWorkItem(Context);
}
