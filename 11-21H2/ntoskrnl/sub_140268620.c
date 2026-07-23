/*
 * XREFs of sub_140268620 @ 0x140268620
 * Callers:
 *     sub_140264720 @ 0x140264720 (sub_140264720.c)
 *     sub_140265BE4 @ 0x140265BE4 (sub_140265BE4.c)
 *     sub_140266158 @ 0x140266158 (sub_140266158.c)
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_140268520 @ 0x140268520 (sub_140268520.c)
 *     sub_1402C15F0 @ 0x1402C15F0 (sub_1402C15F0.c)
 *     sub_140325830 @ 0x140325830 (sub_140325830.c)
 *     sub_14038E4BC @ 0x14038E4BC (sub_14038E4BC.c)
 *     sub_1403D5CF4 @ 0x1403D5CF4 (sub_1403D5CF4.c)
 *     sub_14045C812 @ 0x14045C812 (sub_14045C812.c)
 *     sub_1405C0D40 @ 0x1405C0D40 (sub_1405C0D40.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140268620(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140C50780 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C50780;
  return HIDWORD(v1) == 4294967293;
}
