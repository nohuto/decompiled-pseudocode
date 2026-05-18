/*
 * XREFs of sub_180085DE8 @ 0x180085DE8
 * Callers:
 *     sub_18008CA6C @ 0x18008CA6C (sub_18008CA6C.c)
 *     sub_18008D514 @ 0x18008D514 (sub_18008D514.c)
 * Callees:
 *     sub_180011AC4 @ 0x180011AC4 (sub_180011AC4.c)
 */

__int64 __fastcall sub_180085DE8(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x1555555555555555LL )
    sub_180011AC4();
  return sub_18001090C(12 * a2);
}
