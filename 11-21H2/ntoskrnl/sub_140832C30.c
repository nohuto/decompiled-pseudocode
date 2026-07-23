/*
 * XREFs of sub_140832C30 @ 0x140832C30
 * Callers:
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall sub_140832C30(__int64 a1)
{
  void *v1; // rcx
  LONG_PTR result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return ObfDereferenceObject(v1);
  return result;
}
