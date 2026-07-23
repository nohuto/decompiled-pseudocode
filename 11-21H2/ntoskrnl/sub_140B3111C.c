/*
 * XREFs of sub_140B3111C @ 0x140B3111C
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void *sub_140B3111C()
{
  void *result; // rax

  qword_140C506F8 = -1LL;
  sub_14042A5E0(30LL, 16LL);
  result = &unk_140C506E8;
  qword_140C50708 = &unk_140C506E8;
  return result;
}
