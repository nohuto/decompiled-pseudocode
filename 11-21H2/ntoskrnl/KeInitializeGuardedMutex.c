/*
 * XREFs of KeInitializeGuardedMutex @ 0x1402E0710
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14078B2D4 (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x14078DAB0 (PiUEventInitClientRegistrationContext.c)
 *     PfTInitialize @ 0x14084F9EC (PfTInitialize.c)
 *     PiDqObjectManagerInit @ 0x14085D1F8 (PiDqObjectManagerInit.c)
 *     CmpInitializeDelayedCloseTable @ 0x1408631AC (CmpInitializeDelayedCloseTable.c)
 *     EtwpInitializeProviderTraits @ 0x140864124 (EtwpInitializeProviderTraits.c)
 *     CmpInitSIDToHiveMapping @ 0x140865370 (CmpInitSIDToHiveMapping.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  Mutex->Count = 1;
  Mutex->Owner = 0LL;
  Mutex->Contention = 0;
  Mutex->Event.Header.SignalState = 0;
  Mutex->Event.Header.WaitListHead.Blink = &Mutex->Event.Header.WaitListHead;
  Mutex->Event.Header.WaitListHead.Flink = &Mutex->Event.Header.WaitListHead;
  LOWORD(Mutex->Event.Header.Lock) = 1;
  Mutex->Event.Header.Size = 6;
}
