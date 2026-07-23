/*
 * XREFs of sub_140B1ADD8 @ 0x140B1ADD8
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_14084428C @ 0x14084428C (sub_14084428C.c)
 */

__int64 sub_140B1ADD8()
{
  ExInitializeResourceLite(&stru_140C46AC0);
  qword_140C46AA0 = 0LL;
  sub_1407756F4(1);
  qword_140C46A98 = (__int64)&qword_140C46A90;
  qword_140C46A90 = (__int64)&qword_140C46A90;
  qword_140C46B38 = (__int64)&qword_140C46B30;
  qword_140C46B30 = (__int64)&qword_140C46B30;
  qword_140C46A88 = (__int64)&qword_140C46A80;
  qword_140C46A80 = (__int64)&qword_140C46A80;
  sub_14084428C();
  return 0LL;
}
