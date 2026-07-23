/*
 * XREFs of sub_140B2FD20 @ 0x140B2FD20
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *sub_140B2FD20()
{
  void *result; // rax

  dword_140C204A8 = 6;
  LODWORD(unk_140C20400) = 787;
  qword_140C20418 = (__int64)sub_140224B50;
  qword_140C20420 = 0LL;
  qword_140C20458 = (__int64)sub_140224980;
  qword_140C20438 = 0LL;
  qword_140C20410 = 0LL;
  LODWORD(dword_140C20440) = 787;
  qword_140C20460 = 0LL;
  qword_140C20478 = 0LL;
  qword_140C20450 = 0LL;
  qword_140C1C9A0 = 2097153LL;
  result = memset(&qword_140C1C9A8, 0, 0x100uLL);
  qword_140C203E0 = 0LL;
  return result;
}
