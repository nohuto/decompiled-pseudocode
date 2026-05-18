/*
 * XREFs of sub_18000DFD0 @ 0x18000DFD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E3A8 @ 0x18000E3A8 (sub_18000E3A8.c)
 */

void *sub_18000DFD0()
{
  if ( !byte_1801F7410 )
  {
    sub_18000E3A8((LPCWSTR)sub_18000F0B0);
    byte_1801F7410 = 1;
  }
  return &unk_1801F7420;
}
