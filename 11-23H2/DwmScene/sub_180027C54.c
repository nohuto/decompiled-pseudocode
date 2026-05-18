/*
 * XREFs of sub_180027C54 @ 0x180027C54
 * Callers:
 *     sub_180081688 @ 0x180081688 (sub_180081688.c)
 *     sub_18009FFB8 @ 0x18009FFB8 (sub_18009FFB8.c)
 * Callees:
 *     sub_180011AC4 @ 0x180011AC4 (sub_180011AC4.c)
 */

__int64 __fastcall sub_180027C54(unsigned __int64 a1)
{
  if ( a1 > 0x492492492492492LL )
    sub_180011AC4();
  return 56 * a1;
}
