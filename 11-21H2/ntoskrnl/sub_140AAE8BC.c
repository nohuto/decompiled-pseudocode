/*
 * XREFs of sub_140AAE8BC @ 0x140AAE8BC
 * Callers:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_140B56D04 @ 0x140B56D04 (sub_140B56D04.c)
 * Callees:
 *     sub_14055161C @ 0x14055161C (sub_14055161C.c)
 *     sub_140AAD188 @ 0x140AAD188 (sub_140AAD188.c)
 *     sub_140AAE968 @ 0x140AAE968 (sub_140AAE968.c)
 *     sub_140AAED40 @ 0x140AAED40 (sub_140AAED40.c)
 *     sub_140AB0910 @ 0x140AB0910 (sub_140AB0910.c)
 */

__int64 sub_140AAE8BC()
{
  if ( !byte_140C54D48 )
    return 0LL;
  sub_14055161C();
  byte_140C54D49 = 0;
  byte_140C54D48 = 0;
  sub_140AAD188(0);
  byte_140C54905 = 0;
  sub_140AAED40(0LL);
  byte_140C54904 = 0;
  byte_140C54D38 = 0;
  if ( qword_140C54D30 )
  {
    sub_140AAE968();
    qword_140C54D30 = 0LL;
  }
  return sub_140AB0910();
}
