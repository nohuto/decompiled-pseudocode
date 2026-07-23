/*
 * XREFs of sub_1407F8C9C @ 0x1407F8C9C
 * Callers:
 *     sub_1406A05E4 @ 0x1406A05E4 (sub_1406A05E4.c)
 *     sub_1406B5FC4 @ 0x1406B5FC4 (sub_1406B5FC4.c)
 *     sub_1407E5390 @ 0x1407E5390 (sub_1407E5390.c)
 * Callees:
 *     sub_1407D936C @ 0x1407D936C (sub_1407D936C.c)
 */

__int64 __fastcall sub_1407F8C9C(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return sub_1407D936C(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
