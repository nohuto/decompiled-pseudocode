/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x1800345EC
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x18003449C (RtlInsertInvertedFunctionTable.c)
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(void *a1, _QWORD *a2, _DWORD *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 OutHeaders; // [rsp+48h] [rbp+10h] BYREF

  v5 = RtlpImageDirectoryEntryToDataEx(a1, (PIMAGE_NT_HEADERS)&OutHeaders);
  v6 = OutHeaders;
  if ( v5 < 0 )
    v6 = 0LL;
  *a2 = v6;
  if ( !v6 )
    *a3 = 0;
  return 0LL;
}
