/*
 * XREFs of KeOutPageEnclavePage @ 0x14056D598
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiEncls @ 0x1404205F0 (KiEncls.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiEnclsStatus @ 0x14056D6C8 (KiEnclsStatus.c)
 */

__int64 __fastcall KeOutPageEnclavePage(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v5; // [rsp+A0h] [rbp+0h] BYREF

  memset((void *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) + 128), 0, 0x80uLL);
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  *(_QWORD *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = ((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL)
                                                                      + 128;
  *(_QWORD *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFF80uLL) + 8) = a2;
  v3 = KiEncls(0xBu);
  return KiEnclsStatus(v3);
}
