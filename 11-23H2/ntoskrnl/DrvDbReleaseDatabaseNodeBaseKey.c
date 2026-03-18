/*
 * XREFs of DrvDbReleaseDatabaseNodeBaseKey @ 0x140876DBC
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x140876BB8 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x140A6AE40 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x140A6C330 (DrvDbGetObjectList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     DrvDbUnloadDatabaseNode @ 0x1408773D8 (DrvDbUnloadDatabaseNode.c)
 */

__int64 __fastcall DrvDbReleaseDatabaseNodeBaseKey(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // ebx

  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 152), 1u);
  if ( (*(_DWORD *)(a2 + 64) & 2) == 0 )
  {
    v8 = ZwClose(a4);
    if ( v8 >= 0 )
      v8 = DrvDbUnloadDatabaseNode(a1, a2);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v8;
}
