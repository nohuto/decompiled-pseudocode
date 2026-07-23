/*
 * XREFs of RtlpGetHeapTag @ 0x1800E2F80
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x1800E2370 (RtlQueryProcessHeapInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800E3410 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     RtlQueryHeapInformation @ 0x18008AD00 (RtlQueryHeapInformation.c)
 */

__int64 __fastcall RtlpGetHeapTag(void *a1)
{
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  __int64 HeapInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = RtlQueryHeapInformation(a1, HeapTag, &HeapInformation, 8uLL, 0LL);
  v2 = HeapInformation;
  if ( v1 < 0 )
    return 0LL;
  return v2;
}
