/*
 * XREFs of SepNotifyFileSystems @ 0x1409D0470
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SepNotifyFileSystems(char *P)
{
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall **i)(char *); // rbx
  PVOID j; // rbx
  void *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  for ( i = (void (__fastcall **)(char *))SeFileSystemNotifyRoutinesHead; i; i = (void (__fastcall **)(char *))*i )
    i[1](P + 32);
  for ( j = SeFileSystemNotifyRoutinesExHead; j; j = *(PVOID *)j )
    (*((void (__fastcall **)(char *, _QWORD, _QWORD))j + 1))(P + 32, *((_QWORD *)P + 5), *((_QWORD *)j + 2));
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v5 = (void *)*((_QWORD *)P + 5);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x53466553u);
  ExFreePoolWithTag(P, 0);
}
