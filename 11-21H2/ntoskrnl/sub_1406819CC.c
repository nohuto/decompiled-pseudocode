/*
 * XREFs of sub_1406819CC @ 0x1406819CC
 * Callers:
 *     sub_14068191C @ 0x14068191C (sub_14068191C.c)
 *     sub_1407E0DC4 @ 0x1407E0DC4 (sub_1407E0DC4.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140681A2C @ 0x140681A2C (sub_140681A2C.c)
 *     sub_1406D8370 @ 0x1406D8370 (sub_1406D8370.c)
 */

__int64 __fastcall sub_1406819CC(__int64 a1, __int64 a2)
{
  void *i; // rcx
  __int64 v4; // rax
  void *v5; // rbx
  int v6; // edi

  for ( i = 0LL; ; i = v5 )
  {
    v4 = sub_140681A2C(i);
    v5 = (void *)v4;
    if ( !v4 )
      return 0;
    v6 = sub_1406D8370(v4, a2);
    if ( v6 < 0 )
      break;
  }
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x74456F50u);
  return (unsigned int)v6;
}
