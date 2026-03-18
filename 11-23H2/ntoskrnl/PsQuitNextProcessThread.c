/*
 * XREFs of PsQuitNextProcessThread @ 0x140885770
 * Callers:
 *     ExpDebuggerWorker @ 0x140AB1D30 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextProcessThread(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
