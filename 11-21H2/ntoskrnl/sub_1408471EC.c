/*
 * XREFs of sub_1408471EC @ 0x1408471EC
 * Callers:
 *     sub_14070F0D8 @ 0x14070F0D8 (sub_14070F0D8.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14070F2D8 @ 0x14070F2D8 (sub_14070F2D8.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     sub_1407E0C48 @ 0x1407E0C48 (sub_1407E0C48.c)
 *     sub_140847400 @ 0x140847400 (sub_140847400.c)
 */

__int64 __fastcall sub_1408471EC(__int64 a1, _BYTE *a2)
{
  if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
    sub_140847400(a1, a2);
  if ( *(_QWORD *)(a1 + 1208) )
    sub_1407E0C48(a1);
  ObfReferenceObject(a2);
  a2[204] = 1;
  return sub_14070F2D8((__int64 *)(a1 + 1208), (__int64)a2);
}
