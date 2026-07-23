/*
 * XREFs of sub_1403DC9D4 @ 0x1403DC9D4
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     sub_1403DCA14 @ 0x1403DCA14 (sub_1403DCA14.c)
 *     sub_140848BE8 @ 0x140848BE8 (sub_140848BE8.c)
 */

void sub_1403DC9D4()
{
  __int64 v0; // rcx

  if ( !byte_140D068E2 )
  {
    sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
    if ( (int)sub_1403DCA14() >= 0 )
    {
      sub_140293A88((__int64)word_140C0B8E0, (__int64)sub_1405D90B0, 0LL, 0LL);
      LOBYTE(v0) = 1;
      sub_140848BE8(v0);
    }
    else
    {
      sub_140224C00(&qword_140C22FE0);
    }
  }
}
