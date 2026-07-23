/*
 * XREFs of sub_140AAB7B4 @ 0x140AAB7B4
 * Callers:
 *     sub_140AAB07C @ 0x140AAB07C (sub_140AAB07C.c)
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 *     sub_140AAE9F4 @ 0x140AAE9F4 (sub_140AAE9F4.c)
 *     sub_140AAED7C @ 0x140AAED7C (sub_140AAED7C.c)
 *     sub_140AB1400 @ 0x140AB1400 (sub_140AB1400.c)
 * Callees:
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 */

BOOLEAN sub_140AAB7B4()
{
  BOOLEAN result; // al

  if ( byte_140D01570 )
  {
    result = KeCancelTimer(&stru_140D03C40);
    byte_140D01570 = 0;
  }
  return result;
}
