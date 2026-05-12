/*
 * XREFs of StorSetIoGatewayEmptyEvent @ 0x1C0059728
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C008CBD0 (RaidAdapterStopDeviceIrp.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     <none>
 */

int __fastcall StorSetIoGatewayEmptyEvent(__int64 a1, struct _KEVENT *a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *(_QWORD *)(a1 + 48);
  v5 = 0;
  if ( *(_DWORD *)(v4 + 840) )
  {
    while ( 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 320LL * v5), &LockHandle);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 320LL * v5 + 192), 0, 0) )
        break;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v4 = *(_QWORD *)(a1 + 48);
      if ( ++v5 >= *(_DWORD *)(v4 + 840) )
        goto LABEL_6;
    }
    *(_QWORD *)(320LL * v5 + a1 + 200) = a2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v4 = *(_QWORD *)(a1 + 48);
  }
LABEL_6:
  if ( v5 >= *(_DWORD *)(v4 + 840) )
    LODWORD(v4) = KeSetEvent(a2, 0, 0);
  return v4;
}
