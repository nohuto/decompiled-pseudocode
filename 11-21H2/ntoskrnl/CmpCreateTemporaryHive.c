/*
 * XREFs of CmpCreateTemporaryHive @ 0x14065C990
 * Callers:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 */

__int64 __fastcall CmpCreateTemporaryHive(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v6; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v7[432]; // [rsp+70h] [rbp-1C8h] BYREF

  v4 = 0LL;
  v6 = 0LL;
  memset(v7, 0, sizeof(v7));
  if ( (int)CmpCreateHive((unsigned int)&v6, 0, 1, 0, 0LL, 0LL, 0LL, 16908288, a1, a2, 0LL, (__int64)v7) >= 0 )
    return v6;
  return v4;
}
