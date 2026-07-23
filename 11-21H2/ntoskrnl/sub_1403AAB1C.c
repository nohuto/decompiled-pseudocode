/*
 * XREFs of sub_1403AAB1C @ 0x1403AAB1C
 * Callers:
 *     sub_1403AAA10 @ 0x1403AAA10 (sub_1403AAA10.c)
 *     sub_1403D2700 @ 0x1403D2700 (sub_1403D2700.c)
 *     sub_1403D2750 @ 0x1403D2750 (sub_1403D2750.c)
 *     sub_1405075B4 @ 0x1405075B4 (sub_1405075B4.c)
 *     sub_140507820 @ 0x140507820 (sub_140507820.c)
 *     sub_140A53718 @ 0x140A53718 (sub_140A53718.c)
 *     sub_140A5A98C @ 0x140A5A98C (sub_140A5A98C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403AAB1C(__int64 a1, __int64 a2)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return qword_140C549A8 + 192LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return qword_140D010E8 + 192LL * (unsigned int)sub_14042A5E0(a1, a2);
}
