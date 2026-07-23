/*
 * XREFs of PsQuitNextPartition @ 0x1405A6B10
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x140A00A60 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x140AAC49C (MiMirrorBrownPhase.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
