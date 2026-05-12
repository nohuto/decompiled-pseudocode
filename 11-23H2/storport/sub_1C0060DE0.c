/*
 * XREFs of sub_1C0060DE0 @ 0x1C0060DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C005C994 @ 0x1C005C994 (sub_1C005C994.c)
 *     sub_1C0061CC4 @ 0x1C0061CC4 (sub_1C0061CC4.c)
 */

void __fastcall sub_1C0060DE0(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  PVOID DeviceExtension; // rdi
  struct _IO_WORKITEM *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 230, &LockHandle);
  v4 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 227);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 == Context )
  {
    sub_1C005C994(*((_QWORD *)DeviceExtension + 3), *((_DWORD *)DeviceExtension + 24), -2147221375, 1);
    ++*(_DWORD *)(*((_QWORD *)DeviceExtension + 3) + 4636LL);
    sub_1C0061CC4(DeviceExtension);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 230, &LockHandle);
    if ( *((struct _IO_WORKITEM **)DeviceExtension + 227) == Context )
    {
      *((_QWORD *)DeviceExtension + 227) = 0LL;
      *((_DWORD *)DeviceExtension + 456) = 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  IoFreeWorkItem(Context);
  sub_1C000729C((__int64)DeviceExtension);
}
