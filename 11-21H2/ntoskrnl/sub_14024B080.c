/*
 * XREFs of sub_14024B080 @ 0x14024B080
 * Callers:
 *     sub_140421050 @ 0x140421050 (sub_140421050.c)
 *     sub_140421230 @ 0x140421230 (sub_140421230.c)
 *     sub_140421380 @ 0x140421380 (sub_140421380.c)
 *     sub_1404214D0 @ 0x1404214D0 (sub_1404214D0.c)
 *     sub_1404270A0 @ 0x1404270A0 (sub_1404270A0.c)
 *     sub_140427200 @ 0x140427200 (sub_140427200.c)
 * Callees:
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 */

__int64 __fastcall sub_14024B080(__int64 a1)
{
  __int64 result; // rax

  if ( qword_140D06DB0 )
    return sub_140345190(a1 + 35560, 0);
  return result;
}
