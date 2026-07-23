/*
 * XREFs of sub_1403CB238 @ 0x1403CB238
 * Callers:
 *     sub_140840FF8 @ 0x140840FF8 (sub_140840FF8.c)
 *     sub_1409DA868 @ 0x1409DA868 (sub_1409DA868.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *sub_1403CB238()
{
  void *result; // rax

  result = memset(&unk_140C16820, 0, 0x408uLL);
  qword_140C16C28 = 0LL;
  return result;
}
