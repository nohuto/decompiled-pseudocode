/*
 * XREFs of sub_1402375D8 @ 0x1402375D8
 * Callers:
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 * Callees:
 *     sub_140237628 @ 0x140237628 (sub_140237628.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

LONG_PTR __fastcall sub_1402375D8(PVOID *a1)
{
  LONG_PTR result; // rax

  if ( *a1 )
  {
    sub_140237628(a1, 1LL, 0LL, 1LL);
    KeWaitForSingleObject(*a1, Executive, 0, 0, 0LL);
    return ObfDereferenceObjectWithTag(*a1, 0x746C6644u);
  }
  return result;
}
