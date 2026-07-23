/*
 * XREFs of _GetOverlayPackagePathFromKey @ 0x1800B1F36
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x180050A04 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     QueryRegistryValue @ 0x1801290E0 (QueryRegistryValue.c)
 */

__int64 __fastcall GetOverlayPackagePathFromKey(HANDLE KeyHandle, unsigned int *a2, _WORD *a3)
{
  unsigned int v3; // esi
  int v7; // ecx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a2;
  RtlInitUnicodeString(&ValueName, L"Latest");
  v7 = QueryRegistryValue(KeyHandle, &ValueName, (__int64)a2);
  if ( v7 >= 0 )
    v7 = -1073741788;
  if ( a3 && v3 >= 2 )
    *a3 = 0;
  return (unsigned int)v7;
}
