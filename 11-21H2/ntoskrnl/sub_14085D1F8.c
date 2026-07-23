/*
 * XREFs of sub_14085D1F8 @ 0x14085D1F8
 * Callers:
 *     sub_140B2B1C0 @ 0x140B2B1C0 (sub_140B2B1C0.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1402E0710 (KeInitializeGuardedMutex.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char (__fastcall *__fastcall sub_14085D1F8(PERESOURCE Resource, int a2))(PERESOURCE Resource)
{
  char (__fastcall *result)(PERESOURCE); // rax

  memset(Resource, 0, 0xF0uLL);
  *(_DWORD *)&Resource[2].ActiveCount = a2;
  ExInitializeResourceLite(Resource);
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&Resource[1]);
  Resource[1].SpinLock = (KSPIN_LOCK)&Resource[1].CreatorBackTraceIndex;
  Resource[1].CreatorBackTraceIndex = (ULONG_PTR)&Resource[1].CreatorBackTraceIndex;
  Resource[2].SystemResourcesList.Blink = &Resource[2].SystemResourcesList;
  Resource[2].SystemResourcesList.Flink = &Resource[2].SystemResourcesList;
  result = sub_140775990;
  *(_QWORD *)&Resource[1].OwnerEntry.0 = 0LL;
  *(_QWORD *)&Resource[1].NumberOfSharedWaiters = sub_140775990;
  Resource[1].Reserved2 = Resource;
  return result;
}
