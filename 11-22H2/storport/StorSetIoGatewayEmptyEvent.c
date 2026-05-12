/*
 * XREFs of StorSetIoGatewayEmptyEvent @ 0x1C00666B4
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C001E658 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0038A6C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00A711C (RaidAdapterStopDeviceIrp.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 * Callees:
 *     <none>
 */

int __fastcall StorSetIoGatewayEmptyEvent(__int64 a1, struct _KEVENT *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 904LL) )
  {
    while ( 1 )
    {
      v5 = a1 + 320LL * v4;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5, &LockHandle);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 192), 0, 0) )
        break;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( ++v4 >= *(_DWORD *)(*(_QWORD *)(a1 + 48) + 904LL) )
        goto LABEL_6;
    }
    *(_QWORD *)(v5 + 200) = a2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_6:
  v6 = *(_QWORD *)(a1 + 48);
  if ( v4 >= *(_DWORD *)(v6 + 904) )
    LODWORD(v6) = KeSetEvent(a2, 0, 0);
  return v6;
}
