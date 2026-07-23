/*
 * XREFs of KeInitializeGuardedMutex @ 0x1402E0710
 * Callers:
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 *     sub_14078DAB0 @ 0x14078DAB0 (sub_14078DAB0.c)
 *     sub_14084F9EC @ 0x14084F9EC (sub_14084F9EC.c)
 *     sub_14085D1F8 @ 0x14085D1F8 (sub_14085D1F8.c)
 *     sub_1408631AC @ 0x1408631AC (sub_1408631AC.c)
 *     sub_140864124 @ 0x140864124 (sub_140864124.c)
 *     sub_140865370 @ 0x140865370 (sub_140865370.c)
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
