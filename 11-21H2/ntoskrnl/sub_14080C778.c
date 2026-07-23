/*
 * XREFs of sub_14080C778 @ 0x14080C778
 * Callers:
 *     sub_1403A147C @ 0x1403A147C (sub_1403A147C.c)
 *     sub_140B04F8C @ 0x140B04F8C (sub_140B04F8C.c)
 *     sub_140B252DC @ 0x140B252DC (sub_140B252DC.c)
 *     sub_140B52A10 @ 0x140B52A10 (sub_140B52A10.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14080C778(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  _QWORD v9[14]; // [rsp+20h] [rbp-88h] BYREF

  v5 = a3;
  v6 = a4;
  memset(v9, 0, 0x68uLL);
  v9[1] = a1;
  v9[2] = a2;
  v9[3] = v5;
  v9[4] = v6;
  return sub_140358A20(2u, 211, 0, (__int64)v9);
}
