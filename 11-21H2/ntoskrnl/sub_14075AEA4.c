/*
 * XREFs of sub_14075AEA4 @ 0x14075AEA4
 * Callers:
 *     sub_140294C30 @ 0x140294C30 (sub_140294C30.c)
 *     sub_1402D9A20 @ 0x1402D9A20 (sub_1402D9A20.c)
 *     sub_1403C3840 @ 0x1403C3840 (sub_1403C3840.c)
 *     sub_1403C38EC @ 0x1403C38EC (sub_1403C38EC.c)
 *     sub_1405EEB40 @ 0x1405EEB40 (sub_1405EEB40.c)
 *     sub_1405EEC28 @ 0x1405EEC28 (sub_1405EEC28.c)
 *     sub_14075C190 @ 0x14075C190 (sub_14075C190.c)
 *     sub_14082CB7C @ 0x14082CB7C (sub_14082CB7C.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall sub_14075AEA4(PVOID BaseOfImage)
{
  _DWORD *v2; // rcx
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  Size = 0;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  if ( !BaseOfImage )
    return 0LL;
  v2 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Size);
  if ( (unsigned __int64)BaseOfImage < 0x7FFFFFFEFFFFLL
    && ((unsigned __int64)(v2 + 1) > 0x7FFFFFFF0000LL || v2 + 1 < v2) )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( v2 && Size && Size == *v2 && OutHeaders->FileHeader.Machine == 0x8664 )
    return v2;
  else
    return 0LL;
}
