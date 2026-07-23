/*
 * XREFs of sub_14035A6C8 @ 0x14035A6C8
 * Callers:
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1403591D8 @ 0x1403591D8 (sub_1403591D8.c)
 *     sub_14035A424 @ 0x14035A424 (sub_14035A424.c)
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 * Callees:
 *     sub_14035A7F8 @ 0x14035A7F8 (sub_14035A7F8.c)
 */

char __fastcall sub_14035A6C8(unsigned __int8 *a1)
{
  char result; // al

  if ( (a1[19] & 1) == 0 )
    return a1[48];
  if ( !a1[17] )
    return sub_14035A7F8(a1);
  result = a1[-96 * a1[16] - 1501];
  if ( result > 30 )
    return 30;
  return result;
}
