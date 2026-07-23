/*
 * XREFs of sub_140B019D0 @ 0x140B019D0
 * Callers:
 *     sub_140B03360 @ 0x140B03360 (sub_140B03360.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     sub_140828B8C @ 0x140828B8C (sub_140828B8C.c)
 */

int sub_140B019D0()
{
  int result; // eax

  result = sub_140828B8C();
  if ( result >= 0 )
  {
    byte_140C1C390 = 1;
    result = ExSubscribeWnfStateChange((int)&qword_140C1C380, (int)&qword_140011C28, 1, 0, (__int64)sub_1408097A0, 0LL);
    if ( result >= 0 )
    {
      qword_140C1C3B0 = 0LL;
      xmmword_140C1C3A0 = 0LL;
      byte_140C1C379 = 1;
    }
  }
  return result;
}
