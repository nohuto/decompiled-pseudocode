/*
 * XREFs of sub_18000DF50 @ 0x18000DF50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E3C4 @ 0x18000E3C4 (sub_18000E3C4.c)
 */

void *sub_18000DF50()
{
  if ( !byte_18003296C )
  {
    sub_18000E3C4((LPCWSTR)sub_18000FA10);
    byte_18003296C = 1;
  }
  return &unk_180032BE0;
}
