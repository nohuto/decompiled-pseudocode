/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x18003A234
 * Callers:
 *     LdrpGetRcConfig @ 0x1800385FC (LdrpGetRcConfig.c)
 *     LdrpAccessResourceData @ 0x180038740 (LdrpAccessResourceData.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180063EB0 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpFindMessageInAlternateModule @ 0x18006D5A8 (LdrpFindMessageInAlternateModule.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180033A60 (RtlAddressInSectionTable.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180034310 (RtlSectionTableFromVirtualAddress.c)
 *     LdrpGetImageSize @ 0x18003A4FC (LdrpGetImageSize.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(PVOID BaseOfImage, ULONG *a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int64 v7; // rbx
  int v8; // eax
  _IMAGE_NT_HEADERS64 *v9; // rsi
  char *v10; // rcx
  BOOL v11; // eax
  unsigned int VirtualAddress; // r8d
  _DWORD *v13; // rdx
  unsigned int NumberOfSections; // r10d
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  char *v17; // rdx
  __int64 v18; // r15
  PIMAGE_SECTION_HEADER v19; // rax
  PIMAGE_SECTION_HEADER v20; // rsi
  _BYTE *v21; // rax
  unsigned int ImageSize; // [rsp+30h] [rbp-78h]
  char *v24; // [rsp+38h] [rbp-70h]
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+40h] [rbp-68h] BYREF
  BOOL v26; // [rsp+48h] [rbp-60h]
  int v27; // [rsp+4Ch] [rbp-5Ch]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-58h] BYREF
  __int64 v29; // [rsp+58h] [rbp-50h] BYREF
  _DWORD *v30; // [rsp+60h] [rbp-48h]
  _IMAGE_NT_HEADERS64 *v31; // [rsp+68h] [rbp-40h]
  unsigned __int64 v32; // [rsp+70h] [rbp-38h]
  PVOID BaseOfImagea; // [rsp+B0h] [rbp+8h]

  BaseOfImagea = BaseOfImage;
  v7 = (unsigned __int64)BaseOfImage;
  v8 = RtlpImageDirectoryEntryToDataEx(BaseOfImage, (PIMAGE_NT_HEADERS)&NtHeaders);
  v9 = NtHeaders;
  if ( v8 < 0 )
    v9 = 0LL;
  NtHeaders = v9;
  v31 = v9;
  if ( !v9 )
    return 3221225609LL;
  v29 = 0LL;
  ImageSize = LdrpGetImageSize(v7, &v29);
  if ( ImageSize == -1073741701 )
    return 3221225595LL;
  v10 = (char *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
  v32 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned __int64)a2 <= (v7 & 0xFFFFFFFFFFFFFFFCuLL) || v29 && a2 >= (ULONG *)&v10[v29] )
    return 3221225595LL;
  v11 = 0;
  v26 = 0;
  if ( (v7 & 3) != 0 )
  {
    v11 = (v7 & 1) != 0;
    v26 = v11;
    v7 &= 0xFFFFFFFFFFFFFFFCuLL;
    BaseOfImagea = v10;
  }
  if ( v11 )
  {
    OutHeaders = 0LL;
    RtlImageNtHeaderEx(1u, (PVOID)v7, 0LL, &OutHeaders);
    NtHeaders = OutHeaders;
    if ( !OutHeaders )
      return 3221225609LL;
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
    }
    else if ( OutHeaders->OptionalHeader.Magic == 523 )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
    }
    else
    {
      VirtualAddress = 0;
    }
    if ( !VirtualAddress )
      return 3221225609LL;
    v24 = (char *)(v7 + VirtualAddress - (_QWORD)v9);
    v13 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
    v30 = v13;
    NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
    v15 = 0;
    v27 = 0;
    while ( v15 < NumberOfSections )
    {
      v16 = v13[3];
      if ( VirtualAddress >= v16 && VirtualAddress < v13[4] + v16 )
        goto LABEL_19;
      v13 += 10;
      v30 = v13;
      v27 = ++v15;
    }
    v13 = 0LL;
LABEL_19:
    if ( !v13 )
      return 3221225609LL;
    if ( *a2 > v13[2] )
    {
      v18 = (unsigned int)v13[3];
      v19 = RtlSectionTableFromVirtualAddress(NtHeaders, v13, *a2);
      v20 = v19;
      if ( !v19 )
        return 3221225609LL;
      v7 = (unsigned __int64)BaseOfImagea;
      v21 = RtlAddressInSectionTable(NtHeaders, BaseOfImagea, v19->VirtualAddress);
      v24 += (char *)v31 + v20->VirtualAddress - v18 - v21;
    }
    else
    {
      v7 = (unsigned __int64)BaseOfImagea;
    }
  }
  else
  {
    v24 = 0LL;
  }
  if ( a3
    && ((v17 = (char *)(v7 + *a2 - (_QWORD)v24), *a3 = v17, (unsigned __int64)v17 <= v32)
     || v29 && (unsigned __int64)v17 >= v32 + v29) )
  {
    *a3 = 0LL;
    return 3221225595LL;
  }
  else
  {
    if ( a4 )
      *a4 = a2[1];
    return ImageSize;
  }
}
