/*
 * XREFs of sub_1403747E4 @ 0x1403747E4
 * Callers:
 *     sub_14030C870 @ 0x14030C870 (sub_14030C870.c)
 *     sub_1403744D8 @ 0x1403744D8 (sub_1403744D8.c)
 *     sub_140374864 @ 0x140374864 (sub_140374864.c)
 * Callees:
 *     sub_14030D400 @ 0x14030D400 (sub_14030D400.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

unsigned __int64 __fastcall sub_1403747E4(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_14030D400(a1, v8);
  v1 = (unsigned int)sub_140363220(1);
  v2 = (unsigned int)sub_140363220(1);
  v3 = v8[1] - v8[0] + 1LL;
  v4 = v1 | (v2 << 32);
  if ( _BitScanReverse64((unsigned __int64 *)&v6, v3) )
    v3 = 1LL << v6;
  return (((v8[0] + (v4 & (v3 - 1))) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
}
