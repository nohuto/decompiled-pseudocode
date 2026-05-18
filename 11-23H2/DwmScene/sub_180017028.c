/*
 * XREFs of sub_180017028 @ 0x180017028
 * Callers:
 *     sub_18001B57C @ 0x18001B57C (sub_18001B57C.c)
 *     sub_180081A84 @ 0x180081A84 (sub_180081A84.c)
 *     sub_180085C40 @ 0x180085C40 (sub_180085C40.c)
 *     sub_18008F290 @ 0x18008F290 (sub_18008F290.c)
 *     sub_18009FED4 @ 0x18009FED4 (sub_18009FED4.c)
 *     sub_1800DACE4 @ 0x1800DACE4 (sub_1800DACE4.c)
 *     sub_1800DADD4 @ 0x1800DADD4 (sub_1800DADD4.c)
 * Callees:
 *     sub_180011AC4 @ 0x180011AC4 (sub_180011AC4.c)
 */

__int64 __fastcall sub_180017028(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180011AC4();
  return 4 * a1;
}
