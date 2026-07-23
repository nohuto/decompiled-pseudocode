/*
 * XREFs of LdrpAccessResourceDataNoMultipleLanguage @ 0x180023940
 * Callers:
 *     LdrpGetRcConfig @ 0x180008148 (LdrpGetRcConfig.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180008450 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpAccessResourceData @ 0x180022B10 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 *     LdrpFindMessageInAlternateModule @ 0x1800681E4 (LdrpFindMessageInAlternateModule.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180026F50 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180028C60 (RtlSectionTableFromVirtualAddress.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x18002A644 (RtlpImageDirectoryEntryToData64.c)
 *     RtlAddressInSectionTable @ 0x18002B0F0 (RtlAddressInSectionTable.c)
 *     ZwQueryVirtualMemory @ 0x1800A1310 (ZwQueryVirtualMemory.c)
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
  _IMAGE_NT_HEADERS64 *v22; // rcx
  BOOL v23; // eax
  unsigned __int16 v24; // ax
  unsigned int v25; // r9d
  _DWORD *v26; // rdx
  unsigned int v27; // r10d
  unsigned int i; // r8d
  unsigned int v29; // ecx
  __int64 v30; // rdi
  PIMAGE_SECTION_HEADER v31; // rax
  _IMAGE_NT_HEADERS64 *v32; // r11
  PIMAGE_SECTION_HEADER v33; // rbx
  PVOID v34; // rax
  __int64 v35; // rax
  char *v36; // rcx
  _IMAGE_NT_HEADERS64 *v37; // rdx
  __int64 v38; // [rsp+40h] [rbp-C8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp-C0h] BYREF
  PIMAGE_NT_HEADERS v40; // [rsp+50h] [rbp-B8h] BYREF
  _IMAGE_NT_HEADERS64 *v41; // [rsp+58h] [rbp-B0h]
  PIMAGE_NT_HEADERS v42; // [rsp+60h] [rbp-A8h] BYREF
  int v43; // [rsp+68h] [rbp-A0h]
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+70h] [rbp-98h]
  BOOL v45; // [rsp+78h] [rbp-90h]
  unsigned int v46; // [rsp+7Ch] [rbp-8Ch]
  __int64 v47; // [rsp+80h] [rbp-88h]
  unsigned __int64 v48; // [rsp+88h] [rbp-80h]
  _DWORD *v49; // [rsp+90h] [rbp-78h]
  _DWORD *v50; // [rsp+98h] [rbp-70h]
  char MemoryInformation[16]; // [rsp+A0h] [rbp-68h] BYREF
  _IMAGE_NT_HEADERS64 *v52; // [rsp+B0h] [rbp-58h]
  char *BaseOfImagea; // [rsp+110h] [rbp+8h]

  BaseOfImagea = (char *)BaseOfImage;
  v5 = (char *)BaseOfImage;
  v6 = 1;
  v7 = (PVOID)BaseOfImage;
  v48 = BaseOfImage;
  OutHeaders = 0LL;
  v8 = 0LL;
  v38 = 0LL;
  v40 = (PIMAGE_NT_HEADERS)(BaseOfImage & 3);
  if ( (BaseOfImage & 3) != 0 )
  {
    v6 = (BaseOfImage & 1) == 0;
    v7 = (PVOID)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v48 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
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
            v38 = (__int64)v7 + VirtualAddress;
            v10 = 0;
          }
          else
          {
            v16 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
            v49 = v16;
            NumberOfSections = OutHeaders->FileHeader.NumberOfSections;
            v18 = 0;
            v43 = 0;
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
              v49 = v16;
              v43 = ++v18;
            }
            v38 = v8;
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
      v10 = RtlpImageDirectoryEntryToData64(v7, OutHeaders, (__int64)&v38);
      v8 = v38;
    }
    else
    {
      v10 = -1073741811;
    }
  }
  if ( v10 < 0 )
    v8 = 0LL;
  v38 = v8;
  v47 = v8;
  if ( !v8 )
    return 3221225609LL;
  VirtualMemory = 0;
  SizeOfImage = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  RtlImageNtHeaderEx(1u, v9, 0LL, &v42);
  if ( !v42 )
    goto LABEL_41;
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    v21 = v42->OptionalHeader.Magic;
    if ( v21 == 267 )
    {
      SizeOfImage = (_IMAGE_NT_HEADERS64 *)v42->OptionalHeader.SizeOfImage;
      v41 = SizeOfImage;
      goto LABEL_42;
    }
    if ( v21 == 523 )
    {
      SizeOfImage = (_IMAGE_NT_HEADERS64 *)v42->OptionalHeader.SizeOfImage;
      v41 = SizeOfImage;
      goto LABEL_42;
    }
    v41 = 0LL;
LABEL_41:
    VirtualMemory = -1073741701;
    goto LABEL_42;
  }
  SizeOfImage = (_IMAGE_NT_HEADERS64 *)LdrpGetFileSizeFromLoadAsDataTable(v5);
  v41 = SizeOfImage;
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
      SizeOfImage = v52;
      v41 = v52;
    }
  }
LABEL_42:
  v42 = SizeOfImage;
  if ( VirtualMemory >= 0 )
  {
    OutHeaders = v9;
    v22 = (_IMAGE_NT_HEADERS64 *)(a2 + 4);
    if ( a2 < (ULONG *)v9
      || v22 < (_IMAGE_NT_HEADERS64 *)a2
      || SizeOfImage && v22 > (_IMAGE_NT_HEADERS64 *)((char *)v9 + (_QWORD)SizeOfImage) )
    {
      return (unsigned int)-1073741701;
    }
    v23 = 0;
    v45 = 0;
    if ( v40 )
    {
      v23 = ((unsigned __int8)v5 & 1) != 0;
      v45 = v23;
      v5 = (char *)v9;
      BaseOfImagea = (char *)v9;
    }
    if ( !v23 )
    {
      v35 = 0LL;
      goto LABEL_71;
    }
    v40 = 0LL;
    RtlImageNtHeaderEx(1u, v5, 0LL, &v40);
    NtHeaders = v40;
    if ( !v40 )
      return (unsigned int)-1073741687;
    v24 = v40->OptionalHeader.Magic;
    if ( v24 == 267 )
    {
      v25 = v40->OptionalHeader.DataDirectory[0].VirtualAddress;
    }
    else
    {
      if ( v24 != 523 )
        return (unsigned int)-1073741687;
      v25 = v40->OptionalHeader.DataDirectory[2].VirtualAddress;
    }
    if ( v25 )
    {
      v38 = (__int64)&v5[v25 - v8];
      v26 = (_DWORD *)((char *)&v40->OptionalHeader.Magic + v40->FileHeader.SizeOfOptionalHeader);
      v50 = v26;
      v27 = v40->FileHeader.NumberOfSections;
      for ( i = 0; ; ++i )
      {
        v46 = i;
        if ( i >= v27 )
          return (unsigned int)-1073741687;
        v29 = v26[3];
        if ( v25 >= v29 && v25 < v26[4] + v29 )
          break;
        v26 += 10;
        v50 = v26;
      }
      if ( !v26 )
        return (unsigned int)-1073741687;
      if ( *a2 <= v26[2] )
      {
        v5 = BaseOfImagea;
        SizeOfImage = v42;
        v9 = OutHeaders;
        v35 = v38;
      }
      else
      {
        v30 = (unsigned int)v26[3];
        v31 = RtlSectionTableFromVirtualAddress(NtHeaders, v26, *a2);
        v33 = v31;
        if ( !v31 )
          return (unsigned int)-1073741687;
        v5 = BaseOfImagea;
        v34 = RtlAddressInSectionTable(v32, BaseOfImagea, v31->VirtualAddress);
        v35 = v47 + v33->VirtualAddress - v30 - (_QWORD)v34 + v38;
        SizeOfImage = v42;
        v9 = OutHeaders;
      }
LABEL_71:
      if ( a3 )
      {
        v36 = &v5[*a2 - v35];
        v37 = (_IMAGE_NT_HEADERS64 *)&v36[a2[1]];
        if ( v36 < (char *)v9
          || v37 < (_IMAGE_NT_HEADERS64 *)v36
          || SizeOfImage && v37 > (_IMAGE_NT_HEADERS64 *)((char *)SizeOfImage + (_QWORD)v9) )
        {
          return (unsigned int)-1073741701;
        }
        *a3 = v36;
      }
      if ( a4 )
        *a4 = a2[1];
      return 0;
    }
    return (unsigned int)-1073741687;
  }
  return (unsigned int)VirtualMemory;
}
