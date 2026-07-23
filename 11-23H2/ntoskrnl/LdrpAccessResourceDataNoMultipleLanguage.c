/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x140755918
 * Callers:
 *     LdrpFindMessageInAlternateModule @ 0x1402F6FF4 (LdrpFindMessageInAlternateModule.c)
 *     LdrpGetRcConfig @ 0x1402F77D8 (LdrpGetRcConfig.c)
 *     LdrpAccessResourceData @ 0x14075583C (LdrpAccessResourceData.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     LdrpGetImageSize @ 0x1402F7298 (LdrpGetImageSize.c)
 *     RtlAddressInSectionTable @ 0x1402F73C8 (RtlAddressInSectionTable.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402F7420 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        PVOID BaseOfImage,
        ULONG *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  _DWORD *v4; // rdi
  unsigned __int64 *v5; // r13
  __int64 v7; // rbx
  __int64 result; // rax
  unsigned __int64 v9; // r14
  ULONG *v10; // rcx
  __int64 v11; // r12
  BOOL v12; // eax
  PIMAGE_NT_HEADERS v13; // rax
  _IMAGE_NT_HEADERS64 *v14; // rdi
  unsigned __int16 Magic; // ax
  ULONG VirtualAddress; // r8d
  __int64 v17; // r15
  PIMAGE_SECTION_HEADER v18; // rax
  ULONG v19; // r8d
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  PIMAGE_SECTION_HEADER v22; // rax
  PIMAGE_SECTION_HEADER v23; // r13
  _BYTE *v24; // rax
  __int64 v25; // [rsp+28h] [rbp-40h] BYREF
  _BYTE *v26; // [rsp+30h] [rbp-38h]

  v4 = a4;
  v5 = a3;
  v7 = (__int64)BaseOfImage;
  v26 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 2u, (PULONG)&v25);
  if ( !v26 )
    return 3221225609LL;
  v25 = 0LL;
  result = LdrpGetImageSize(v7, &v25);
  if ( (int)result >= 0 )
  {
    v9 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
    v10 = a2 + 4;
    if ( (unsigned __int64)a2 < (v7 & 0xFFFFFFFFFFFFFFFCuLL) )
      return 3221225595LL;
    if ( v10 < a2 )
      return 3221225595LL;
    v11 = v25;
    if ( v25 && (unsigned __int64)v10 > v9 + v25 )
    {
      return 3221225595LL;
    }
    else
    {
      v12 = 0;
      if ( (v7 & 3) != 0 )
      {
        v12 = (v7 & 1) != 0;
        v7 &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( v12 )
      {
        v13 = RtlImageNtHeader((PVOID)v7);
        v14 = v13;
        if ( !v13 )
          return 3221225609LL;
        Magic = v13->OptionalHeader.Magic;
        if ( Magic == 267 )
        {
          VirtualAddress = v14->OptionalHeader.DataDirectory[0].VirtualAddress;
        }
        else if ( Magic == 523 )
        {
          VirtualAddress = v14->OptionalHeader.DataDirectory[2].VirtualAddress;
        }
        else
        {
          VirtualAddress = 0;
        }
        if ( !VirtualAddress )
          return 3221225609LL;
        v17 = v7 + VirtualAddress - (_QWORD)v26;
        v18 = RtlSectionTableFromVirtualAddress(v14, (PVOID)v7, VirtualAddress);
        if ( !v18 )
          return 3221225609LL;
        v19 = *a2;
        if ( *a2 > v18->Misc.PhysicalAddress )
        {
          LODWORD(v25) = v18->VirtualAddress;
          v22 = RtlSectionTableFromVirtualAddress(v14, (PVOID)v7, v19);
          v23 = v22;
          if ( !v22 )
            return 3221225609LL;
          v24 = RtlAddressInSectionTable(v14, (PVOID)v7, v22->VirtualAddress);
          v17 += &v26[v23->VirtualAddress - (unsigned __int64)(unsigned int)v25] - v24;
          v5 = a3;
        }
        v4 = a4;
      }
      else
      {
        v17 = 0LL;
      }
      if ( v5 )
      {
        v20 = v7 + *a2 - v17;
        v21 = v20 + a2[1];
        if ( v20 < v9 || v21 < v20 || v11 && v21 > v9 + v11 )
          return 3221225595LL;
        *v5 = v20;
      }
      if ( v4 )
        *v4 = a2[1];
      return 0LL;
    }
  }
  return result;
}
