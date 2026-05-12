/*
 * XREFs of sub_1C0011B08 @ 0x1C0011B08
 * Callers:
 *     sub_1C00119D8 @ 0x1C00119D8 (sub_1C00119D8.c)
 *     sub_1C00A7F18 @ 0x1C00A7F18 (sub_1C00A7F18.c)
 *     sub_1C00A82EC @ 0x1C00A82EC (sub_1C00A82EC.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0011B58 @ 0x1C0011B58 (sub_1C0011B58.c)
 */

__int64 __fastcall sub_1C0011B08(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 568) || !*(_QWORD *)(a1 + 576) )
    return 0LL;
  if ( (unsigned int)sub_1C0007798(a1, 1) )
    return (unsigned int)sub_1C0011B58(a1);
  return v1;
}
