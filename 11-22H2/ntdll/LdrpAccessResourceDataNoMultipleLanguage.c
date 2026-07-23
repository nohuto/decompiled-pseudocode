/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x180023A40
 * Callers:
 *     LdrpGetRcConfig @ 0x180007D68 (LdrpGetRcConfig.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180007FE4 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpAccessResourceData @ 0x180022C2C (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     LdrpFindMessageInAlternateModule @ 0x180068204 (LdrpFindMessageInAlternateModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x1800270A0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180028E30 (RtlSectionTableFromVirtualAddress.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x18002A814 (RtlpImageDirectoryEntryToData64.c)
 *     RtlAddressInSectionTable @ 0x18002B2C0 (RtlAddressInSectionTable.c)
 *     Feature_Servicing_ImageSizeBlankFont__private_IsEnabled @ 0x18009E374 (Feature_Servicing_ImageSizeBlankFont__private_IsEnabled.c)
 *     ZwQueryVirtualMemory @ 0x18009F250 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpAccessResourceDataNoMultipleLanguage(
        unsigned __int64 BaseOfImage,
        ULONG *a2,
        char **a3,
        _DWORD *a4)
{
  char *v5; // r14
  bool v6; // bl
  PVOID v7; // rdi
  __int64 v8; // rsi
  _IMAGE_NT_HEADERS64 *v9; // r15
  NTSTATUS v10; // ecx
  unsigned __int16 Magic; // ax
  NTSTATUS VirtualMemory; // ebx
  _IMAGE_NT_HEADERS64 *SizeOfImage; // rdi
  __int64 VirtualAddress; // r9
  _DWORD *v16; // rdx
  unsigned int NumberOfSections; // r10d
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  int v20; // eax
  unsigned __int16 v21; // cx
  _IMAGE_NT_HEADERS64 *v22; // rbx
  BOOL v23; // eax
  __int64 v24; // rcx
  unsigned __int16 v25; // ax
  unsigned int v26; // r9d
  _DWORD *v27; // rdx
  unsigned int v28; // r10d
  unsigned int v29; // r8d
  unsigned int v30; // ecx
  __int64 v31; // rdi
  PIMAGE_SECTION_HEADER v32; // rax
  _IMAGE_NT_HEADERS64 *v33; // r11
  PIMAGE_SECTION_HEADER v34; // rbx
  PVOID v35; // rax
  __int64 v36; // rax
  char *v37; // rbx
  _IMAGE_NT_HEADERS64 *v38; // rsi
  __int64 v39; // [rsp+40h] [rbp-C8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp-C0h] BYREF
  PIMAGE_NT_HEADERS v41; // [rsp+50h] [rbp-B8h] BYREF
  _IMAGE_NT_HEADERS64 *v42; // [rsp+58h] [rbp-B0h]
  PIMAGE_NT_HEADERS v43; // [rsp+60h] [rbp-A8h] BYREF
  int v44; // [rsp+68h] [rbp-A0h]
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+70h] [rbp-98h]
  BOOL v46; // [rsp+78h] [rbp-90h]
  unsigned int i; // [rsp+7Ch] [rbp-8Ch]
  __int64 v48; // [rsp+80h] [rbp-88h]
  unsigned __int64 v49; // [rsp+88h] [rbp-80h]
  _DWORD *v50; // [rsp+90h] [rbp-78h]
  _DWORD *v51; // [rsp+98h] [rbp-70h]
  char MemoryInformation[16]; // [rsp+A0h] [rbp-68h] BYREF
  _IMAGE_NT_HEADERS64 *v53; // [rsp+B0h] [rbp-58h]
  char *BaseOfImagea; // [rsp+110h] [rbp+8h]

  BaseOfImagea = (char *)BaseOfImage;
  v5 = (char *)BaseOfImage;
  v6 = 1;
  v7 = (PVOID)BaseOfImage;
  v49 = BaseOfImage;
  OutHeaders = 0LL;
  v8 = 0LL;
  v39 = 0LL;
  v41 = (PIMAGE_NT_HEADERS)(BaseOfImage & 3);
  if ( (BaseOfImage & 3) != 0 )
  {
    v6 = (BaseOfImage & 1) == 0;
    v7 = (PVOID)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v49 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v9 = (_IMAGE_NT_HEADERS64 *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
  v10 = RtlImageNtHeaderEx(1u, v7, 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) > 2 )
      {
        VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
        if ( (_DWORD)VirtualAddress )
        {
          LODWORD(NtHeaders) = OutHeaders->OptionalHeader.DataDirectory[0].Size;
          if ( v6 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
          {
            v8 = (__int64)v7 + VirtualAddress;
            v39 = (__int64)v7 + VirtualAddress;
            v10 = 0;
          }
          else
          {
            v16 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
            v50 = v16;
            NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
            v18 = 0;
            v44 = 0;
            while ( v18 < NumberOfSections )
            {
              v19 = v16[3];
              if ( (unsigned int)VirtualAddress >= v19 && (unsigned int)VirtualAddress < v16[4] + v19 )
              {
                if ( v16 )
                  v8 = (__int64)v7 + (unsigned int)v16[5] - (unsigned __int64)(unsigned int)v16[3] + VirtualAddress;
                break;
              }
              v16 += 10;
              v50 = v16;
              v44 = ++v18;
            }
            v39 = v8;
            v20 = 0;
            if ( !v8 )
              v20 = -1073741811;
            v10 = v20;
            v5 = BaseOfImagea;
          }
        }
        else
        {
          v10 = -1073741822;
        }
      }
      else
      {
        v10 = -1073741811;
      }
    }
    else if ( Magic == 523 )
    {
      v10 = RtlpImageDirectoryEntryToData64(v7, OutHeaders, (__int64)&v39);
      v8 = v39;
    }
    else
    {
      v10 = -1073741811;
    }
  }
  if ( v10 < 0 )
    v8 = 0LL;
  v39 = v8;
  v48 = v8;
  if ( !v8 )
    return 3221225609LL;
  ((void (*)(void))Feature_Servicing_ImageSizeBlankFont__private_IsEnabled)();
  VirtualMemory = 0;
  SizeOfImage = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  RtlImageNtHeaderEx(1u, v9, 0LL, &v43);
  if ( !v43 )
  {
LABEL_40:
    VirtualMemory = -1073741701;
    goto LABEL_41;
  }
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    v21 = v43->OptionalHeader.Magic;
    if ( v21 == 267 )
    {
      SizeOfImage = (_IMAGE_NT_HEADERS64 *)v43->OptionalHeader.SizeOfImage;
      v42 = SizeOfImage;
      goto LABEL_41;
    }
    if ( v21 == 523 )
    {
      SizeOfImage = (_IMAGE_NT_HEADERS64 *)v43->OptionalHeader.SizeOfImage;
      v42 = SizeOfImage;
      goto LABEL_41;
    }
    v42 = 0LL;
    goto LABEL_40;
  }
  SizeOfImage = (_IMAGE_NT_HEADERS64 *)LdrpGetFileSizeFromLoadAsDataTable(v5);
  v42 = SizeOfImage;
  if ( !SizeOfImage )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v9,
                      MemoryRegionInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
    if ( VirtualMemory < 0 )
    {
      VirtualMemory = -1073741793;
    }
    else
    {
      SizeOfImage = v53;
      v42 = v53;
    }
  }
LABEL_41:
  v43 = SizeOfImage;
  if ( VirtualMemory >= 0 )
  {
    OutHeaders = v9;
    v22 = (_IMAGE_NT_HEADERS64 *)(a2 + 4);
    if ( (unsigned int)((__int64 (*)(void))Feature_Servicing_ImageSizeBlankFont__private_IsEnabled)() )
    {
      if ( a2 < (ULONG *)v9 || v22 < (_IMAGE_NT_HEADERS64 *)a2 )
        return (unsigned int)-1073741701;
      if ( !SizeOfImage )
        goto LABEL_50;
    }
    else if ( a2 < (ULONG *)v9 || v22 < (_IMAGE_NT_HEADERS64 *)a2 )
    {
      return (unsigned int)-1073741701;
    }
    if ( v22 <= (_IMAGE_NT_HEADERS64 *)((char *)v9 + (_QWORD)SizeOfImage) )
    {
LABEL_50:
      v23 = 0;
      v46 = 0;
      v24 = 1LL;
      if ( v41 )
      {
        v23 = ((unsigned __int8)v5 & 1) != 0;
        v46 = v23;
        v5 = (char *)v9;
        BaseOfImagea = (char *)v9;
      }
      if ( !v23 )
      {
        v36 = 0LL;
        goto LABEL_74;
      }
      v41 = 0LL;
      RtlImageNtHeaderEx(1u, v5, 0LL, &v41);
      NtHeaders = v41;
      if ( !v41 )
        return (unsigned int)-1073741687;
      v25 = v41->OptionalHeader.Magic;
      if ( v25 == 267 )
      {
        v26 = v41->OptionalHeader.DataDirectory[0].VirtualAddress;
      }
      else
      {
        if ( v25 != 523 )
          return (unsigned int)-1073741687;
        v26 = v41->OptionalHeader.DataDirectory[2].VirtualAddress;
      }
      if ( v26 )
      {
        v39 = (__int64)&v5[v26 - v8];
        v27 = (_DWORD *)((char *)&v41->OptionalHeader.Magic + v41->FileHeader.SizeOfOptionalHeader);
        v51 = v27;
        v28 = v41->FileHeader.NumberOfSections;
        v29 = 0;
        for ( i = 0; ; i = v29 )
        {
          if ( v29 >= v28 )
            return (unsigned int)-1073741687;
          v30 = v27[3];
          if ( v26 >= v30 )
          {
            v24 = v27[4] + v30;
            if ( v26 < (unsigned int)v24 )
              break;
          }
          v27 += 10;
          v51 = v27;
          ++v29;
        }
        if ( !v27 )
          return (unsigned int)-1073741687;
        if ( *a2 <= v27[2] )
        {
          v5 = BaseOfImagea;
          SizeOfImage = v43;
          v9 = OutHeaders;
          v36 = v39;
        }
        else
        {
          v31 = (unsigned int)v27[3];
          v32 = RtlSectionTableFromVirtualAddress(NtHeaders, v27, *a2);
          v34 = v32;
          if ( !v32 )
            return (unsigned int)-1073741687;
          v5 = BaseOfImagea;
          v35 = RtlAddressInSectionTable(v33, BaseOfImagea, v32->VirtualAddress);
          v36 = v48 + v34->VirtualAddress - v31 - (_QWORD)v35 + v39;
          SizeOfImage = v43;
          v9 = OutHeaders;
        }
LABEL_74:
        if ( !a3 )
        {
LABEL_85:
          if ( a4 )
            *a4 = a2[1];
          return 0;
        }
        v37 = &v5[*a2 - v36];
        v38 = (_IMAGE_NT_HEADERS64 *)&v37[a2[1]];
        if ( (unsigned int)Feature_Servicing_ImageSizeBlankFont__private_IsEnabled(v24, 0LL) )
        {
          if ( v37 < (char *)v9 || v38 < (_IMAGE_NT_HEADERS64 *)v37 )
            return (unsigned int)-1073741701;
          if ( !SizeOfImage )
          {
LABEL_83:
            *a3 = v37;
            goto LABEL_85;
          }
        }
        else if ( v37 < (char *)v9 || v38 < (_IMAGE_NT_HEADERS64 *)v37 )
        {
          return (unsigned int)-1073741701;
        }
        if ( v38 <= (_IMAGE_NT_HEADERS64 *)((char *)SizeOfImage + (_QWORD)v9) )
          goto LABEL_83;
        return (unsigned int)-1073741701;
      }
      return (unsigned int)-1073741687;
    }
    return (unsigned int)-1073741701;
  }
  return (unsigned int)VirtualMemory;
}
