/*
 * XREFs of sub_18008D4EC @ 0x18008D4EC
 * Callers:
 *     sub_18008C8C8 @ 0x18008C8C8 (sub_18008C8C8.c)
 * Callees:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 */

__int64 __fastcall sub_18008D4EC(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x1555555555555555LL )
    sub_180011B80();
  return sub_18008D514();
}
