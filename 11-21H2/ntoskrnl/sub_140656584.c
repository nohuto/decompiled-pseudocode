/*
 * XREFs of sub_140656584 @ 0x140656584
 * Callers:
 *     sub_140656340 @ 0x140656340 (sub_140656340.c)
 * Callees:
 *     sub_140656234 @ 0x140656234 (sub_140656234.c)
 *     sub_1406565BC @ 0x1406565BC (sub_1406565BC.c)
 */

bool __fastcall sub_140656584(__int64 a1)
{
  __int16 v2; // cx

  while ( 1 )
  {
    v2 = sub_1406565BC(a1, 0LL);
    if ( v2 >= 0 )
      break;
    sub_140656234(v2);
  }
  return (v2 & 0x4000) != 0;
}
