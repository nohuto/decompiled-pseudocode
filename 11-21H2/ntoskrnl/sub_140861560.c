/*
 * XREFs of sub_140861560 @ 0x140861560
 * Callers:
 *     sub_140261354 @ 0x140261354 (sub_140261354.c)
 *     sub_14085E9A0 @ 0x14085E9A0 (sub_14085E9A0.c)
 *     sub_1409D4AF4 @ 0x1409D4AF4 (sub_1409D4AF4.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1408615B8 @ 0x1408615B8 (sub_1408615B8.c)
 */

__int64 __fastcall sub_140861560(_QWORD *a1)
{
  int v2; // ebx
  void *v3; // rcx
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = sub_1408615B8(a1, &v5);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *a1 = v5;
    v2 = 0;
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v2;
}
