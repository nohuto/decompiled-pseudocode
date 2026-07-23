/*
 * XREFs of LdrpCorValidateImage @ 0x18008C52C
 * Callers:
 *     LdrpCompleteMapModule @ 0x18004CFB8 (LdrpCompleteMapModule.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall LdrpCorValidateImage(unsigned __int64 a1)
{
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 OutHeaders; // [rsp+50h] [rbp+18h] BYREF

  v1 = RtlpImageDirectoryEntryToDataEx(a1, 1, 9u, &v4, (PIMAGE_NT_HEADERS)&OutHeaders);
  v2 = OutHeaders;
  if ( v1 < 0 )
    v2 = 0LL;
  return v2 != 0 ? 0xC000007B : 0;
}
