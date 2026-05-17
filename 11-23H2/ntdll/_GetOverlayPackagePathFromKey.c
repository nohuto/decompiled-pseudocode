/*
 * XREFs of _GetOverlayPackagePathFromKey @ 0x1800B21E4
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18000B008 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     QueryRegistryValue @ 0x1800B2300 (QueryRegistryValue.c)
 */

__int64 __fastcall GetOverlayPackagePathFromKey(__int64 a1, unsigned int *a2, _WORD *a3)
{
  unsigned int v3; // esi
  int v7; // ecx
  UNICODE_STRING v9[2]; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v3 = *a2;
  v10 = 0;
  RtlInitUnicodeString(v9, L"Latest");
  v7 = QueryRegistryValue(a1, v9, &v10, a3, a2);
  if ( v7 < 0 )
  {
LABEL_4:
    if ( a3 && v3 >= 2 )
      *a3 = 0;
    return (unsigned int)v7;
  }
  if ( v10 != 1 )
  {
    v7 = -1073741788;
    goto LABEL_4;
  }
  if ( a3 && v3 >= *a2 )
    a3[(*a2 >> 1) - 1] = 0;
  return (unsigned int)v7;
}
