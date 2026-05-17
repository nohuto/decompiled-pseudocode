/*
 * XREFs of _GetOverlayPackageTypeFromKey @ 0x1800B2282
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18000B008 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     QueryRegistryValue @ 0x1800B2300 (QueryRegistryValue.c)
 */

__int64 __fastcall GetOverlayPackageTypeFromKey(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  UNICODE_STRING v5; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  int v7; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 4;
  RtlInitUnicodeString(&v5, L"Type");
  result = QueryRegistryValue(a1, &v5, &v6, a2, &v7);
  if ( (_DWORD)result == -1073741772 )
  {
    *a2 = 0;
    return 0LL;
  }
  else if ( (int)result >= 0 && v6 != 4 )
  {
    return 3221225508LL;
  }
  return result;
}
