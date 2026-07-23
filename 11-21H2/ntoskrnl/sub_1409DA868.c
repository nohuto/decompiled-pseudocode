/*
 * XREFs of sub_1409DA868 @ 0x1409DA868
 * Callers:
 *     sub_1406E6B08 @ 0x1406E6B08 (sub_1406E6B08.c)
 *     sub_140815DC8 @ 0x140815DC8 (sub_140815DC8.c)
 *     sub_14083F570 @ 0x14083F570 (sub_14083F570.c)
 *     sub_1409DA758 @ 0x1409DA758 (sub_1409DA758.c)
 * Callees:
 *     sub_1403CB238 @ 0x1403CB238 (sub_1403CB238.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409DAC68 @ 0x1409DAC68 (sub_1409DAC68.c)
 *     sub_1409DB3FC @ 0x1409DB3FC (sub_1409DB3FC.c)
 */

__int64 sub_1409DA868()
{
  qword_140C16E50 = 0LL;
  byte_140C16E48 = 0;
  byte_140C16C30 = 0;
  dword_140C18E90 = 600;
  sub_1409DB3FC();
  dword_140C18E94 = 0;
  dword_140C18E98 = 0;
  memset(qword_140C16C40, 0, 0x208uLL);
  memset(qword_140C16E80, 0, 0x2008uLL);
  qword_140C18E88 = 0LL;
  dword_140C16810 = 0;
  qword_140C16818 = 0LL;
  qword_140C16808 = (__int64)&qword_140C16800;
  qword_140C16800 = (__int64)&qword_140C16800;
  sub_1403CB238();
  return sub_1409DAC68();
}
