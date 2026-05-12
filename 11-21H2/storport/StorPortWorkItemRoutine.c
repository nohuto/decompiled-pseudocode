/*
 * XREFs of StorPortWorkItemRoutine @ 0x1C0044090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     RaidReleaseAdapterRemoveLock @ 0x1C0024BE2 (RaidReleaseAdapterRemoveLock.c)
 */

void __fastcall StorPortWorkItemRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  void *DeviceExtension; // rdi
  void (__fastcall *v4)(__int64, _QWORD, PVOID); // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( DeviceExtension )
  {
    if ( Context )
    {
      _InterlockedExchange((volatile __int32 *)Context + 6, 1);
      v4 = (void (__fastcall *)(__int64, _QWORD, PVOID))_InterlockedExchange64((volatile __int64 *)Context + 1, 0LL);
      if ( v4 )
      {
        v4(*((_QWORD *)DeviceExtension + 72) + 16LL, *((_QWORD *)Context + 2), Context);
        if ( _InterlockedExchange((volatile __int32 *)Context + 6, 0) == 2 )
        {
          IoFreeWorkItem(*(PIO_WORKITEM *)Context);
          *(_QWORD *)Context = 0LL;
          ExFreePoolWithTag(Context, 0x49576152u);
          _InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 1190);
        }
      }
    }
    RaidReleaseAdapterRemoveLock((__int64)DeviceExtension);
  }
}
