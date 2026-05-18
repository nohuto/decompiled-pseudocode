/*
 * XREFs of sub_18000DCC0 @ 0x18000DCC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E0D4 @ 0x18000E0D4 (sub_18000E0D4.c)
 */

void *sub_18000DCC0()
{
  if ( !byte_1801D32EC )
  {
    sub_18000E0D4((LPCWSTR)sub_18000EE20);
    byte_1801D32EC = 1;
  }
  return &unk_1801D3310;
}
