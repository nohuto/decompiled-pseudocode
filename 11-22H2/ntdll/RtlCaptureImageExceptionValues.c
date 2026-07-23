/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x18002C38C
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180020CE0 (RtlpxLookupFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002C31C (RtlInsertInvertedFunctionTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(unsigned __int64 a1, __int64 *a2, unsigned int *a3)
{
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v5 = RtlpImageDirectoryEntryToDataEx(a1, 1, 3u, a3, &v8);
  v6 = v8;
  if ( v5 < 0 )
    v6 = 0LL;
  *a2 = v6;
  if ( !v6 )
    *a3 = 0;
  return 0LL;
}
