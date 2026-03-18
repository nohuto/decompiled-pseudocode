/*
 * XREFs of IoEnumerateRegisteredFiltersList @ 0x1406DFB70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopGetFsRegistrationInProgress @ 0x140557FF8 (IopGetFsRegistrationInProgress.c)
 */

NTSTATUS __stdcall IoEnumerateRegisteredFiltersList(
        PDRIVER_OBJECT *DriverObjectList,
        ULONG DriverObjectListSize,
        PULONG ActualNumberDriverObjects)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v4; // ebx
  __int64 *v8; // rax
  ULONG v9; // esi
  bool v10; // cf
  __int64 v11; // rbx
  NTSTATUS i; // edi

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
  {
    if ( IopGetFsRegistrationInProgress() )
    {
      i = -1073741267;
      goto LABEL_8;
    }
    ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  }
  v8 = (__int64 *)IopFsNotifyChangeQueueHead;
  v9 = DriverObjectListSize >> 3;
  while ( v8 != &IopFsNotifyChangeQueueHead )
  {
    v8 = (__int64 *)*v8;
    ++v4;
  }
  v10 = v9 < v4;
  *ActualNumberDriverObjects = v4;
  v11 = IopFsNotifyChangeQueueHead;
  for ( i = v10 ? 0xC0000023 : 0; v9; --v9 )
  {
    if ( (__int64 *)v11 == &IopFsNotifyChangeQueueHead )
      break;
    ObfReferenceObject(*(PVOID *)(v11 + 16));
    *DriverObjectList++ = *(PDRIVER_OBJECT *)(v11 + 16);
    v11 = *(_QWORD *)v11;
  }
  ExReleaseResourceLite(&IopDatabaseResource);
LABEL_8:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return i;
}
