/*
 * XREFs of sub_1408650D0 @ 0x1408650D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

LONG_PTR __fastcall sub_1408650D0(PVOID Object)
{
  KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  byte_140D3B046 = 1;
  return ObfDereferenceObject(Object);
}
