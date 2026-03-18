/*
 * XREFs of KeInitializeGuardedMutex @ 0x14031D870
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x140781CD4 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x1407839EC (PiUEventNotifyUserMode.c)
 *     PiDqObjectManagerInit @ 0x140812740 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x140846F2C (PfTInitialize.c)
 *     CmpInitializeDelayedCloseTable @ 0x1408635A8 (CmpInitializeDelayedCloseTable.c)
 *     EtwpInitializeProviderTraits @ 0x140864874 (EtwpInitializeProviderTraits.c)
 *     CmpInitSIDToHiveMapping @ 0x140865ED4 (CmpInitSIDToHiveMapping.c)
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
