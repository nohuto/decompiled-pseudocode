/*
 * XREFs of __tailMerge_bcrypt_dll @ 0x180096DF5
 * Callers:
 *     __imp_load_BCryptCloseAlgorithmProvider @ 0x180096DE9 (__imp_load_BCryptCloseAlgorithmProvider.c)
 *     __imp_load_BCryptDestroyHash @ 0x180096E74 (__imp_load_BCryptDestroyHash.c)
 *     __imp_load_BCryptOpenAlgorithmProvider @ 0x180096E86 (__imp_load_BCryptOpenAlgorithmProvider.c)
 *     __imp_load_BCryptGetProperty @ 0x180096E98 (__imp_load_BCryptGetProperty.c)
 *     __imp_load_BCryptCreateHash @ 0x180096EAA (__imp_load_BCryptCreateHash.c)
 *     __imp_load_BCryptHashData @ 0x180096EBC (__imp_load_BCryptHashData.c)
 *     __imp_load_BCryptFinishHash @ 0x180096ECE (__imp_load_BCryptFinishHash.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18008BB00 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_bcrypt_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_bcrypt_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
