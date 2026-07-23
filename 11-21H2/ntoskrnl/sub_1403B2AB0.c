/*
 * XREFs of sub_1403B2AB0 @ 0x1403B2AB0
 * Callers:
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14033BEC0 @ 0x14033BEC0 (sub_14033BEC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403B2AB0(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 > 0xFFFFF6BFFFFFFF78uLL || v1 < 0xFFFFF68000000000uLL )
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
  else
    return 0LL;
}
