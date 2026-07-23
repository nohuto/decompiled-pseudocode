/*
 * XREFs of KeInitializeGuardedMutex @ 0x14031DB00
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x140781EC4 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x140783BDC (PiUEventNotifyUserMode.c)
 *     PiDqObjectManagerInit @ 0x140812A10 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x14084722C (PfTInitialize.c)
 *     CmpInitializeDelayedCloseTable @ 0x1408637E8 (CmpInitializeDelayedCloseTable.c)
 *     EtwpInitializeProviderTraits @ 0x140864AB4 (EtwpInitializeProviderTraits.c)
 *     CmpInitSIDToHiveMapping @ 0x140866114 (CmpInitSIDToHiveMapping.c)
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
