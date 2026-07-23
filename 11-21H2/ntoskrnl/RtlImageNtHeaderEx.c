/*
 * XREFs of RtlImageNtHeaderEx @ 0x1402FD9C0
 * Callers:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_1402D6CE8 @ 0x1402D6CE8 (sub_1402D6CE8.c)
 *     sub_1402D99BC @ 0x1402D99BC (sub_1402D99BC.c)
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 *     sub_1403C38EC @ 0x1403C38EC (sub_1403C38EC.c)
 *     sub_1406734EC @ 0x1406734EC (sub_1406734EC.c)
 *     sub_14067368C @ 0x14067368C (sub_14067368C.c)
 *     sub_140706200 @ 0x140706200 (sub_140706200.c)
 *     sub_140758C68 @ 0x140758C68 (sub_140758C68.c)
 *     sub_14075AEA4 @ 0x14075AEA4 (sub_14075AEA4.c)
 *     sub_14075C190 @ 0x14075C190 (sub_14075C190.c)
 *     sub_14082CB7C @ 0x14082CB7C (sub_14082CB7C.c)
 *     sub_14097638C @ 0x14097638C (sub_14097638C.c)
 *     sub_1409BE864 @ 0x1409BE864 (sub_1409BE864.c)
 *     sub_1409C0580 @ 0x1409C0580 (sub_1409C0580.c)
 *     sub_140A89C30 @ 0x140A89C30 (sub_140A89C30.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS v4; // r10d
  char v5; // al
  ULONG64 v6; // rcx
  _IMAGE_NT_HEADERS64 *v7; // rax

  if ( !OutHeaders )
    return -1073741811;
  v4 = 0;
  *OutHeaders = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 || (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( Size < 0x40 )
      return -1073741701;
  }
  if ( *(_WORD *)BaseOfImage == 23117 )
  {
    v6 = *((unsigned int *)BaseOfImage + 15);
    if ( !v5 || v6 < Size && (unsigned int)v6 < 0xFFFFFFE7 && v6 + 24 < Size )
    {
      v7 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v6);
      if ( (char *)BaseOfImage + v6 >= BaseOfImage
        && ((unsigned __int64)BaseOfImage >= 0x7FFFFFFEFFFFLL
         || (unsigned __int64)v7 < 0x7FFFFFFEFFFFLL && (unsigned __int64)&v7[1] < 0x7FFFFFFEFFFFLL)
        && v7->Signature == 17744 )
      {
        *OutHeaders = v7;
        return v4;
      }
    }
  }
  return -1073741701;
}
