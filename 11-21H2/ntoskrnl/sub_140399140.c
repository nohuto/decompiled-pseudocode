/*
 * XREFs of sub_140399140 @ 0x140399140
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_1402246C0 @ 0x1402246C0 (sub_1402246C0.c)
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_14081A3AC @ 0x14081A3AC (sub_14081A3AC.c)
 */

void sub_140399140()
{
  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  sub_1402246C0(0LL);
  byte_140D07398 = 1;
  byte_140C203A0 = 1;
  sub_14081A3AC();
  sub_140224C00(&qword_140C22FE0);
}
