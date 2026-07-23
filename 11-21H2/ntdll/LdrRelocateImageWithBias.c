/*
 * XREFs of LdrRelocateImageWithBias @ 0x18008B610
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x180088EBC (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrProcessRelocationBlockLongLong @ 0x18008B70C (LdrProcessRelocationBlockLongLong.c)
 */

NTSTATUS __cdecl LdrRelocateImageWithBias(
        PVOID NewBase,
        LONGLONG Bias,
        PSTR LoaderName,
        NTSTATUS Success,
        NTSTATUS Conflict,
        NTSTATUS Invalid)
{
  NTSTATUS v6; // ebx
  PIMAGE_NT_HEADERS v8; // rdi
  unsigned __int64 v9; // rbp
  NTSTATUS v10; // eax
  PIMAGE_NT_HEADERS v11; // rcx
  unsigned int v12; // esi
  int v13; // r8d
  PSTR OutHeaders; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+20h] BYREF

  OutHeaders = LoaderName;
  v6 = 0;
  v16 = 0;
  if ( RtlImageNtHeaderEx(1u, NewBase, 0LL, (PIMAGE_NT_HEADERS *)&OutHeaders) < 0 )
    return -1073741701;
  v8 = (PIMAGE_NT_HEADERS)OutHeaders;
  if ( *((_WORD *)OutHeaders + 12) == 267 )
  {
    v9 = *((unsigned int *)OutHeaders + 13);
  }
  else
  {
    if ( *((_WORD *)OutHeaders + 12) != 523 )
      return -1073741701;
    v9 = *((_QWORD *)OutHeaders + 6);
  }
  v10 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)NewBase, 1, 5u, &v16, (PIMAGE_NT_HEADERS)&OutHeaders);
  v11 = (PIMAGE_NT_HEADERS)OutHeaders;
  if ( v10 < 0 )
    v11 = 0LL;
  if ( !v11 )
    return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
  v12 = v16;
  if ( !v16 )
    return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v13 = *(_DWORD *)&v11->FileHeader.Machine;
    v12 -= v13;
    v11 = (PIMAGE_NT_HEADERS)LdrProcessRelocationBlockLongLong(
                               v8->FileHeader.Machine,
                               (int)NewBase + v11->Signature,
                               (unsigned int)(v13 - 8) >> 1,
                               (int)v11 + 8,
                               (__int64)NewBase - v9);
    if ( !v11 )
      break;
    if ( !v12 )
      return v6;
  }
  return -1073741701;
}
