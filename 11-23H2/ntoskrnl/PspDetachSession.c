/*
 * XREFs of PspDetachSession @ 0x1407C5F3C
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x140356450 (MmDetachSession.c)
 */

LONG_PTR __fastcall PspDetachSession(PVOID Object, $115DCDF994C6370D29323EAB0E0C9502 *a2)
{
  MmDetachSession((__int64)Object, a2);
  return ObfDereferenceObject(Object);
}
