/*
 * XREFs of KeAcquireGuardedMutex @ 0x14029ECC0
 * Callers:
 *     sub_14070A064 @ 0x14070A064 (sub_14070A064.c)
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     sub_14078B7C4 @ 0x14078B7C4 (sub_14078B7C4.c)
 *     sub_14078D5D8 @ 0x14078D5D8 (sub_14078D5D8.c)
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 */

void __stdcall KeAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // si

  v2 = sub_140347C10(Mutex, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Mutex->Count, 0) )
    sub_14029EF4C(Mutex, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  Mutex->Owner = KeGetCurrentThread();
  Mutex->OldIrql = CurrentIrql;
}
