/*
 * XREFs of _GetOverlayPackageTypeFromKey @ 0x1800B1FD4
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x180050A04 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     QueryRegistryValue @ 0x1801290E0 (QueryRegistryValue.c)
 */

__int64 __fastcall GetOverlayPackageTypeFromKey(HANDLE KeyHandle, _DWORD *a2)
{
  __int64 result; // rax
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v6) = 4;
  RtlInitUnicodeString(&ValueName, L"Type");
  result = QueryRegistryValue(KeyHandle, &ValueName, (__int64)&v6);
  if ( (_DWORD)result == -1073741772 )
  {
    *a2 = 0;
    return 0LL;
  }
  else if ( (int)result >= 0 )
  {
    return 3221225508LL;
  }
  return result;
}
