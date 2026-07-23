/*
 * XREFs of sub_140604224 @ 0x140604224
 * Callers:
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405FDEFC @ 0x1405FDEFC (sub_1405FDEFC.c)
 *     sub_140602478 @ 0x140602478 (sub_140602478.c)
 *     sub_140602EB8 @ 0x140602EB8 (sub_140602EB8.c)
 *     sub_140603390 @ 0x140603390 (sub_140603390.c)
 *     sub_140603974 @ 0x140603974 (sub_140603974.c)
 */

unsigned __int64 sub_140604224()
{
  _QWORD v1[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v2; // [rsp+70h] [rbp+8h] BYREF

  sub_140603974();
  sub_140602EB8();
  memset(v1, 0, 0x40uLL);
  v2 = 0LL;
  v1[5] = &v2;
  if ( sub_1405FDEFC((__int64)v1) )
    sub_140602478();
  return sub_140603390();
}
