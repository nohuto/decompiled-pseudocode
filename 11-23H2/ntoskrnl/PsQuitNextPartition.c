/*
 * XREFs of PsQuitNextPartition @ 0x1405A65A0
 * Callers:
 *     ExpNodeHotAddProcessorWorker @ 0x140A007D0 (ExpNodeHotAddProcessorWorker.c)
 *     MiMirrorBrownPhase @ 0x140AAC62C (MiMirrorBrownPhase.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x1402F9C4C (PsDereferencePartition.c)
 */

LONG_PTR __fastcall PsQuitNextPartition(PVOID Object)
{
  PsDereferencePartition((__int64)Object);
  return ObfDereferenceObjectWithTag(Object, 0x6E457350u);
}
