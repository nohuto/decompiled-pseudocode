/*
 * XREFs of __tailMerge_api_ms_win_security_cryptoapi_l1_1_0_dll @ 0x1801C89F6
 * Callers:
 *     __imp_load_CryptReleaseContext @ 0x1801C89EA (__imp_load_CryptReleaseContext.c)
 *     __imp_load_CryptAcquireContextW @ 0x1801C8ABD (__imp_load_CryptAcquireContextW.c)
 *     __imp_load_CryptCreateHash @ 0x1801C8ACF (__imp_load_CryptCreateHash.c)
 *     __imp_load_CryptHashData @ 0x1801C8AE1 (__imp_load_CryptHashData.c)
 *     __imp_load_CryptGetHashParam @ 0x1801C8AF3 (__imp_load_CryptGetHashParam.c)
 *     __imp_load_CryptDestroyHash @ 0x1801C8B05 (__imp_load_CryptDestroyHash.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801865D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_security_cryptoapi_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_cryptoapi_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
