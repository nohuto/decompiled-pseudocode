/*
 * XREFs of sub_18011B850 @ 0x18011B850
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     nullsub_58 @ 0x1800A8EBC (nullsub_58.c)
 */

void __fastcall sub_18011B850()
{
  nullsub_58();
  sub_180010884((char *)qword_1801FAE18, (xmmword_1801FAE20 - qword_1801FAE18) & 0xFFFFFFFFFFFFFFF8uLL);
  qword_1801FAE18 = 0LL;
  xmmword_1801FAE20 = 0LL;
  sub_1800A9430((char **)&qword_1801FAE08);
}
