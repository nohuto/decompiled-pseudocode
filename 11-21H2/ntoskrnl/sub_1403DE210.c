/*
 * XREFs of sub_1403DE210 @ 0x1403DE210
 * Callers:
 *     sub_140AFF910 @ 0x140AFF910 (sub_140AFF910.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 (__fastcall *sub_1403DE210())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&qword_140C10BE0, 0, 0x88uLL);
  qword_140C10BE8 = (__int64)&qword_140C10BE0;
  qword_140C10BE0 = (__int64)&qword_140C10BE0;
  qword_140C10C18 = (__int64)sub_1406462D0;
  qword_140C10C50 = (__int64)sub_1406462F0;
  result = sub_140644030;
  qword_140C10C60 = (__int64)sub_140644030;
  qword_140C10BF0 = 0LL;
  dword_140C10C00 = 275;
  qword_140C10C20 = (__int64)&qword_140C10BE0;
  qword_140C10C38 = 0LL;
  qword_140C10C10 = 0LL;
  qword_140C10C58 = (__int64)&qword_140C10BE0;
  qword_140C10C40 = 0LL;
  return result;
}
