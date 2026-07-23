/*
 * XREFs of sub_1406396B8 @ 0x1406396B8
 * Callers:
 *     sub_140579150 @ 0x140579150 (sub_140579150.c)
 *     NtShutdownSystem @ 0x1406398E0 (NtShutdownSystem.c)
 * Callees:
 *     sub_140232788 @ 0x140232788 (sub_140232788.c)
 *     sub_140578830 @ 0x140578830 (sub_140578830.c)
 *     sub_140911B58 @ 0x140911B58 (sub_140911B58.c)
 */

void sub_1406396B8()
{
  if ( qword_140C445D8 )
  {
    sub_140911B58(0LL);
    sub_140911B58(1LL);
    sub_140232788((__int64)qword_140C445D8, 10LL, 0, 0LL);
    sub_140232788((__int64)qword_140C445D8, 15LL, 0, 0LL);
    sub_140232788((__int64)qword_140C445D8, 20LL, 0, 0LL);
    sub_140232788((__int64)qword_140C445D8, 22LL, 0, 0LL);
    sub_140232788((__int64)qword_140C445D8, 25LL, 0, 0LL);
    sub_140578830();
  }
}
