/*
 * XREFs of sub_14065C990 @ 0x14065C990
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 */

__int64 __fastcall sub_14065C990(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v6; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v7[432]; // [rsp+70h] [rbp-1C8h] BYREF

  v4 = 0LL;
  v6 = 0LL;
  memset(v7, 0, sizeof(v7));
  if ( (int)sub_14068A7FC((unsigned int)&v6, 0, 1, 0, 0LL, 0LL, 0LL, 16908288, a1, a2, 0LL, (__int64)v7) >= 0 )
    return v6;
  return v4;
}
