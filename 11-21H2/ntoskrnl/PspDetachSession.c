/*
 * XREFs of PspDetachSession @ 0x1406A8EC8
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspDetachSession(PVOID Object, __int64 a2)
{
  MmDetachSession((__int64)Object, a2);
  return ObfDereferenceObject(Object);
}
