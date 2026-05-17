/*
 * XREFs of RtlQueryPackageClaims @ 0x180073B70
 * Callers:
 *     AppModelPolicy_GetPolicy_Internal @ 0x18007397C (AppModelPolicy_GetPolicy_Internal.c)
 *     RtlQueryPackageIdentityEx @ 0x180073B00 (RtlQueryPackageIdentityEx.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800FF8E8 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     RtlpQueryPackageIdentityAttributes @ 0x180073CE0 (RtlpQueryPackageIdentityAttributes.c)
 *     RtlStringCbPrintfExW @ 0x180073E68 (RtlStringCbPrintfExW.c)
 *     RtlGUIDFromString @ 0x180075450 (RtlGUIDFromString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlQueryPackageClaims(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD *a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // [rsp+40h] [rbp-388h] BYREF
  char v15; // [rsp+48h] [rbp-380h] BYREF
  char v16; // [rsp+50h] [rbp-378h] BYREF
  __int64 v17; // [rsp+58h] [rbp-370h]

  result = RtlpQueryPackageIdentityAttributes(a1, a2, (unsigned int)&v16, a7, a8);
  v12 = result;
  if ( (int)result < 0 )
    return result;
  if ( a2 )
  {
    if ( a3 )
    {
      result = RtlStringCbPrintfExW(
                 a2,
                 *a3,
                 (unsigned int)&v14,
                 (unsigned int)&v15,
                 2048,
                 (__int64)L"%wZ",
                 *(_QWORD *)(v17 + 32));
      v12 = result;
      if ( (int)result < 0 )
        return result;
      *a3 = v14 - a2 + 2;
      goto LABEL_5;
    }
    return 3221225485LL;
  }
  if ( a3 )
    return 3221225485LL;
LABEL_5:
  if ( a4 )
  {
    result = RtlStringCbPrintfExW(a4, *a5, (unsigned int)&v14, 0, 2048, (__int64)L"%wZ", *(_QWORD *)(v17 + 32) + 16LL);
    v12 = result;
    if ( (int)result < 0 )
      return result;
    *a5 = v14 - a4 + 2;
  }
  if ( a6 )
  {
    v13 = v17;
    *a6 = 0LL;
    if ( *(_DWORD *)(v13 + 24) > 3u )
      RtlGUIDFromString(*(_QWORD *)(v13 + 32) + 48LL, a6);
  }
  return v12;
}
