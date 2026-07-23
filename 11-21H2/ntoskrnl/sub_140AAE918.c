/*
 * XREFs of sub_140AAE918 @ 0x140AAE918
 * Callers:
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 *     sub_140AB0910 @ 0x140AB0910 (sub_140AB0910.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_140AADBBC @ 0x140AADBBC (sub_140AADBBC.c)
 *     sub_140AADC80 @ 0x140AADC80 (sub_140AADC80.c)
 *     sub_140AAE9F4 @ 0x140AAE9F4 (sub_140AAE9F4.c)
 *     sub_140AAEBD8 @ 0x140AAEBD8 (sub_140AAEBD8.c)
 */

__int64 sub_140AAE918()
{
  sub_140AAEBD8(0LL);
  if ( qword_140C0E038 )
  {
    sub_140AAEBD8(qword_140C0E038);
    if ( *(_QWORD *)qword_140C0E038 && (*(_DWORD *)(qword_140C0E038 + 12) & 1) == 0 )
      sub_1403A8CB4(*(_QWORD *)qword_140C0E038);
    sub_1403A8CB4(qword_140C0E038);
    qword_140C0E038 = 0LL;
  }
  if ( qword_140C0DFC0 )
  {
    sub_1403A8CB4(qword_140C0DFC0);
    qword_140C0DFC0 = 0LL;
    sub_140AADC80(0LL, 0, 0LL);
    qword_140C0E040 = 0LL;
    qword_140C0E058 = 0LL;
    qword_140C0E050 = 0LL;
  }
  sub_140AAE9F4();
  sub_140AADBBC(2);
  dword_140C0DF90 = 0;
  return 0LL;
}
