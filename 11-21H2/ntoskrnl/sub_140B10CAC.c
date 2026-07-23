/*
 * XREFs of sub_140B10CAC @ 0x140B10CAC
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140B0EFD8 @ 0x140B0EFD8 (sub_140B0EFD8.c)
 *     sub_140B10D98 @ 0x140B10D98 (sub_140B10D98.c)
 *     sub_140B10F48 @ 0x140B10F48 (sub_140B10F48.c)
 *     sub_140B12720 @ 0x140B12720 (sub_140B12720.c)
 *     sub_140B12930 @ 0x140B12930 (sub_140B12930.c)
 *     sub_140B129C4 @ 0x140B129C4 (sub_140B129C4.c)
 *     sub_140B12A50 @ 0x140B12A50 (sub_140B12A50.c)
 */

__int64 __fastcall sub_140B10CAC(UNICODE_STRING *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  sub_140B10F48(0LL, a1);
  sub_140B10D98(0LL, a1);
  byte_140C1BDE8 = 1;
  qword_140C02BF0 = (__int64)off_140C020D8;
  qword_140C02BF8 = 8LL;
  sub_140B12A50();
  qword_140C1BDE0 = 0LL;
  memset(&off_140C02BC0, 0, 0x140uLL);
  *(_OWORD *)&off_140C067E8 = 0LL;
  sub_140B129C4();
  sub_140B12930(0LL, 0LL);
  sub_140B0EFD8(a1, v2);
  byte_140C46A78 = 1;
  sub_140B12720(0LL);
  sub_140B10F48(1LL, a1);
  sub_140B10D98(1LL, a1);
  result = sub_140B10D98(2LL, a1);
  dword_140C46BF8 = 3;
  return result;
}
