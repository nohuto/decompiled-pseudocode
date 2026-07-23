/*
 * XREFs of sub_14024A35C @ 0x14024A35C
 * Callers:
 *     sub_140200230 @ 0x140200230 (sub_140200230.c)
 *     sub_1402003C0 @ 0x1402003C0 (sub_1402003C0.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_14024A2B8 @ 0x14024A2B8 (sub_14024A2B8.c)
 *     sub_140278460 @ 0x140278460 (sub_140278460.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_140589B90 @ 0x140589B90 (sub_140589B90.c)
 *     sub_14058CAA0 @ 0x14058CAA0 (sub_14058CAA0.c)
 *     sub_1405AED7C @ 0x1405AED7C (sub_1405AED7C.c)
 *     sub_1405C1CE0 @ 0x1405C1CE0 (sub_1405C1CE0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14024A35C(_QWORD *a1)
{
  if ( (*a1 & 0xFFFFFFFFFFELL) != 0 )
    return 8 * (*a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    return 0LL;
}
