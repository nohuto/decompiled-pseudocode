/*
 * XREFs of sub_140AACA74 @ 0x140AACA74
 * Callers:
 *     sub_140AAB07C @ 0x140AAB07C (sub_140AAB07C.c)
 *     sub_140AAE9F4 @ 0x140AAE9F4 (sub_140AAE9F4.c)
 *     sub_140AB0AB0 @ 0x140AB0AB0 (sub_140AB0AB0.c)
 *     sub_140AB0E60 @ 0x140AB0E60 (sub_140AB0E60.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_140AACFEC @ 0x140AACFEC (sub_140AACFEC.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 */

void sub_140AACA74()
{
  if ( (dword_140C0DF90 & 0xC00) != 0xC00 )
  {
    sub_140AACFEC(0LL, 7LL, 0LL);
    sub_1403A7BF0();
    KeWaitForSingleObject(&stru_140D009C0, Executive, 0, 0, 0LL);
    sub_1403A7C40();
    if ( qword_140C0B258 )
    {
      sub_140AAD3E0(qword_140C0B258);
      qword_140C0B258 = 0LL;
    }
    if ( qword_140C0B288 )
    {
      sub_140AAD3E0(qword_140C0B288);
      qword_140C0B288 = 0LL;
    }
    if ( qword_140C0B290 )
    {
      sub_140AAD3E0(qword_140C0B290);
      qword_140C0B290 = 0LL;
    }
    if ( qword_140C0B298 )
    {
      sub_140AAD3E0(qword_140C0B298);
      qword_140C0B298 = 0LL;
    }
    if ( qword_140C0B2C8 )
    {
      sub_140AAD3E0(qword_140C0B2C8);
      qword_140C0B2C8 = 0LL;
    }
    if ( qword_140C0B2D0 )
    {
      sub_140AAD3E0(qword_140C0B2D0);
      qword_140C0B2D0 = 0LL;
    }
  }
}
