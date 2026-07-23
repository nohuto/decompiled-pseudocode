/*
 * XREFs of sub_140863DA8 @ 0x140863DA8
 * Callers:
 *     sub_14067BD84 @ 0x14067BD84 (sub_14067BD84.c)
 *     sub_14068B750 @ 0x14068B750 (sub_14068B750.c)
 *     sub_1408575AC @ 0x1408575AC (sub_1408575AC.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140945F80 @ 0x140945F80 (sub_140945F80.c)
 */

LONG_PTR __fastcall sub_140863DA8(__int64 a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  if ( *(_BYTE *)(a1 + 64) )
    result = sub_140945F80(*(_QWORD *)(a1 + 48));
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    return ObfDereferenceObject(v2);
  return result;
}
