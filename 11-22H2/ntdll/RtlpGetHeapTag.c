/*
 * XREFs of RtlpGetHeapTag @ 0x1800E2F80
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x1800E2370 (RtlQueryProcessHeapInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800E3410 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     RtlQueryHeapInformation @ 0x18008AD00 (RtlQueryHeapInformation.c)
 */

__int64 __fastcall RtlpGetHeapTag(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = RtlQueryHeapInformation(a1, 7, &v4, 8uLL, 0LL);
  v2 = v4;
  if ( v1 < 0 )
    return 0LL;
  return v2;
}
