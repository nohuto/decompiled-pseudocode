/*
 * XREFs of sub_1406FC03C @ 0x1406FC03C
 * Callers:
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_1406F884C @ 0x1406F884C (sub_1406F884C.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 */

void *__fastcall sub_1406FC03C(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 3) == 0 )
    return 0LL;
  v2 = (void *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  ObfReferenceObject(v2);
  return v2;
}
