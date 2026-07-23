/*
 * XREFs of sub_1406A1350 @ 0x1406A1350
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1406A1000 @ 0x1406A1000 (sub_1406A1000.c)
 * Callees:
 *     sub_140984460 @ 0x140984460 (sub_140984460.c)
 */

__int64 __fastcall sub_1406A1350(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 > 2 )
    return sub_140984460(a1, v1, 0LL, 0LL);
  return result;
}
