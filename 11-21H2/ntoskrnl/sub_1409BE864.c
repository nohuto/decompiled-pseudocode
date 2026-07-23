/*
 * XREFs of sub_1409BE864 @ 0x1409BE864
 * Callers:
 *     sub_14098325C @ 0x14098325C (sub_14098325C.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     sub_1409BE7A8 @ 0x1409BE7A8 (sub_1409BE7A8.c)
 */

__int64 __fastcall sub_1409BE864(PVOID BaseOfImage)
{
  unsigned int v1; // ebx
  PIMAGE_NT_HEADERS v3; // rdi
  WORD Magic; // ax
  ULONGLONG ImageBase_high; // rbp
  unsigned __int16 *v6; // rax
  ULONG v7; // esi
  unsigned int v8; // r8d
  PIMAGE_NT_HEADERS v10; // [rsp+70h] [rbp+18h] BYREF
  ULONG Size; // [rsp+78h] [rbp+20h] BYREF

  v1 = 0;
  Size = 0;
  v10 = 0LL;
  if ( RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &v10) < 0 )
    return (unsigned int)-1073741701;
  v3 = v10;
  Magic = v10->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    ImageBase_high = HIDWORD(v10->OptionalHeader.ImageBase);
  }
  else
  {
    if ( Magic != 523 )
      return (unsigned int)-1073741701;
    ImageBase_high = v10->OptionalHeader.ImageBase;
  }
  v6 = (unsigned __int16 *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 5u, &Size);
  if ( !v6 )
    return (v3->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
  v7 = Size;
  if ( !Size )
    return (v3->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v8 = *((_DWORD *)v6 + 1);
    v7 -= v8;
    v6 = sub_1409BE7A8(
           v3->FileHeader.Machine,
           (__int64)BaseOfImage + *(unsigned int *)v6,
           (v8 - 8) >> 1,
           v6 + 4,
           (__int64)BaseOfImage - ImageBase_high);
    if ( !v6 )
      break;
    if ( !v7 )
      return v1;
  }
  return (unsigned int)-1073741701;
}
