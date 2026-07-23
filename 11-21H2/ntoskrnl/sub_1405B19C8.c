/*
 * XREFs of sub_1405B19C8 @ 0x1405B19C8
 * Callers:
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_1405B0B24 @ 0x1405B0B24 (sub_1405B0B24.c)
 * Callees:
 *     sub_1404192EC @ 0x1404192EC (sub_1404192EC.c)
 */

__int64 __fastcall sub_1405B19C8(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 160) )
  {
    if ( sub_1404192EC() - *(_QWORD *)(a1 + 160) < 0x23C34600 )
      return 1LL;
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  return 0LL;
}
