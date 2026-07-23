/*
 * XREFs of LdrpIsILOnlyImage @ 0x1800DC654
 * Callers:
 *     LdrpRelocateImage @ 0x180086268 (LdrpRelocateImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 */

bool __fastcall LdrpIsILOnlyImage(unsigned __int64 a1)
{
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v1 = RtlpImageDirectoryEntryToDataEx(a1, 1, 0xEu, &v4, &v5);
  v2 = v5;
  if ( v1 < 0 )
    v2 = 0LL;
  return v2 && v4 >= 0x48 && (*(_BYTE *)(v2 + 16) & 1) != 0;
}
