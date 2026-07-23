/*
 * XREFs of sub_1406DA910 @ 0x1406DA910
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1406DA950 @ 0x1406DA950 (sub_1406DA950.c)
 */

__int64 __fastcall sub_1406DA910(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  int v3; // ebx

  v2 = *(void **)(a1 + 32);
  v3 = sub_1406DA950(a2, v2);
  if ( v3 >= 0 )
    ObfReferenceObject(v2);
  return (unsigned int)v3;
}
