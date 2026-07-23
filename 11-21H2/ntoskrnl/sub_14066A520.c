/*
 * XREFs of sub_14066A520 @ 0x14066A520
 * Callers:
 *     sub_140669CBC @ 0x140669CBC (sub_140669CBC.c)
 *     sub_1406B6830 @ 0x1406B6830 (sub_1406B6830.c)
 *     sub_1406B6958 @ 0x1406B6958 (sub_1406B6958.c)
 *     sub_140918574 @ 0x140918574 (sub_140918574.c)
 *     sub_1409188E8 @ 0x1409188E8 (sub_1409188E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14066A520(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( !*a1 )
    v2 = a1[2];
  if ( a2 )
    *a2 = (*a1 != 0) + 1;
  return v2;
}
