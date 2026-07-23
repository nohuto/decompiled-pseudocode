/*
 * XREFs of sub_14040D570 @ 0x14040D570
 * Callers:
 *     sub_140401350 @ 0x140401350 (sub_140401350.c)
 *     sub_14040D260 @ 0x14040D260 (sub_14040D260.c)
 *     sub_14040D558 @ 0x14040D558 (sub_14040D558.c)
 * Callees:
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

__int64 __fastcall sub_14040D570(int a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    sub_14056AF38(1684629364LL);
  return (unsigned int)((a1 << 6) + 32);
}
