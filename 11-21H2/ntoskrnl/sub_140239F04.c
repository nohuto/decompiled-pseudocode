/*
 * XREFs of sub_140239F04 @ 0x140239F04
 * Callers:
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_1403137B0 @ 0x1403137B0 (sub_1403137B0.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BA864 @ 0x1405BA864 (sub_1405BA864.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140239F04(_QWORD *a1)
{
  if ( (*a1 & 0x400LL) != 0 )
    return 0LL;
  else
    return (*a1 >> 26) & 1LL;
}
