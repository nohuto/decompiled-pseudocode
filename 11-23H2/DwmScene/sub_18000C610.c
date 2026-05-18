/*
 * XREFs of sub_18000C610 @ 0x18000C610
 * Callers:
 *     sub_18000C500 @ 0x18000C500 (sub_18000C500.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 * Callees:
 *     <none>
 */

int sub_18000C610()
{
  if ( qword_1801D3218 )
    return qword_1801D3218(&unk_1801D31D8);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
