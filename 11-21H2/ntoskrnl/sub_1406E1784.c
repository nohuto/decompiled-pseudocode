/*
 * XREFs of sub_1406E1784 @ 0x1406E1784
 * Callers:
 *     sub_140687EEC @ 0x140687EEC (sub_140687EEC.c)
 *     sub_1409B0334 @ 0x1409B0334 (sub_1409B0334.c)
 *     sub_140A34510 @ 0x140A34510 (sub_140A34510.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1406E1784(__int64 a1)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 1516) & 1) != 0 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 1264) )
    return 1;
  return result;
}
