/*
 * XREFs of sub_1403C378C @ 0x1403C378C
 * Callers:
 *     sub_1403C3548 @ 0x1403C3548 (sub_1403C3548.c)
 *     sub_1405EF24C @ 0x1405EF24C (sub_1405EF24C.c)
 * Callees:
 *     sub_1402DB3F0 @ 0x1402DB3F0 (sub_1402DB3F0.c)
 *     sub_1402DB460 @ 0x1402DB460 (sub_1402DB460.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

_BYTE *__fastcall sub_1403C378C(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        int a7,
        char a8)
{
  __int64 v11; // [rsp+40h] [rbp-38h] BYREF
  int v12; // [rsp+48h] [rbp-30h]
  __int16 v13; // [rsp+4Ch] [rbp-2Ch]

  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  sub_1402DB460(a5 + (*a6 & 0xFFF), a3, a4, a6, a7, a8, (__int64)&v11);
  return sub_1402DB3F0(a1, a2, &v11, a5 + (*a6 & 0xFFF));
}
