/*
 * XREFs of RtlFindHotPatchInformation @ 0x140A7653C
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A348E8 (MiApplyDriverHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x140A36228 (MiCaptureHotPatchInfo.c)
 *     MiMapAndApplyPatchInSession @ 0x140A3A024 (MiMapAndApplyPatchInSession.c)
 *     MiOpenHotPatchFile @ 0x140A3A3C0 (MiOpenHotPatchFile.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x140214B80 (RtlImageNtHeaderEx.c)
 *     RtlFindHotPatchBase @ 0x140A7650C (RtlFindHotPatchBase.c)
 */

__int64 __fastcall RtlFindHotPatchInformation(char *BaseOfImage)
{
  ULONG *v2; // rdi
  ULONG *v3; // rsi
  PIMAGE_NT_HEADERS v4; // r14
  unsigned __int16 Machine; // bx
  ULONG *v6; // rcx
  ULONG v7; // eax
  bool v8; // cf
  char *v9; // rdx
  __int64 SizeOfImage; // r10
  unsigned int v11; // r8d
  unsigned int *v12; // r9
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // r10d
  __int64 v17; // r9
  ULONG Size; // [rsp+48h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS v20; // [rsp+50h] [rbp+18h] BYREF

  Size = 0;
  v20 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &v20);
  v4 = v20;
  Machine = v20->FileHeader.Machine;
  v6 = (ULONG *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Size);
  if ( !v6 )
    return 0LL;
  if ( Machine == 0x8664 || Machine == 0xAA64 )
  {
    v7 = Size;
    if ( Size <= 4 )
      return 0LL;
    v3 = v6;
    if ( Size != *v6 )
      return 0LL;
    v8 = Size < 0xF4;
  }
  else
  {
    if ( Machine != 332 )
      return 0LL;
    v7 = Size;
    if ( Size <= 4 )
      return 0LL;
    v2 = v6;
    if ( Size == 64 )
      v7 = *v6;
    if ( v7 != *v6 )
      return 0LL;
    v8 = v7 < 0x98;
  }
  if ( v8 )
    return 0LL;
  v9 = (char *)v6 + v7;
  if ( v9 < (char *)v6 )
    return 0LL;
  SizeOfImage = v4->OptionalHeader.SizeOfImage;
  if ( v6 >= (ULONG *)&BaseOfImage[SizeOfImage] || v9 > &BaseOfImage[SizeOfImage] )
    return 0LL;
  v11 = Machine == 0x8664 || Machine == 0xAA64 ? v3[60] : v2[37];
  if ( v11 >= 0xFFFFFFF8 || v11 == 0 || v11 + 8 > (unsigned int)SizeOfImage )
    return 0LL;
  v12 = (unsigned int *)&BaseOfImage[v11];
  switch ( *v12 )
  {
    case 1u:
      v13 = 20;
      break;
    case 2u:
      v13 = 24;
      break;
    case 3u:
      v13 = 28;
      break;
    default:
      return 0LL;
  }
  v14 = v12[1];
  if ( v14 >= v13 )
  {
    if ( v12[2] )
    {
      if ( v14 + v11 > v14 && v14 + v11 <= (unsigned int)SizeOfImage )
      {
        v15 = v12[4];
        if ( v15 <= 0x3FFFFFF9 )
        {
          v16 = 4 * v15 + v12[3];
          if ( v16 > 4 * v15 && v16 <= v14 && v15 == 1 && RtlFindHotPatchBase(v12) )
            return v17;
        }
      }
    }
  }
  return 0LL;
}
