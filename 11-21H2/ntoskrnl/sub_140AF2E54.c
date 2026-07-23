/*
 * XREFs of sub_140AF2E54 @ 0x140AF2E54
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_140659320 @ 0x140659320 (sub_140659320.c)
 *     sub_140AF2DE0 @ 0x140AF2DE0 (sub_140AF2DE0.c)
 */

void sub_140AF2E54()
{
  if ( byte_140D06888 && (int)sub_140AF2DE0() >= 0 )
  {
    byte_140D3B01E = 1;
    sub_140659320(0);
  }
  else
  {
    byte_140D3B01E = 0;
  }
}
