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
        unsigned __int64 a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  unsigned __int64 v5; // r14
  bool v6; // bl
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  int v10; // ecx
  __int16 v11; // ax
  int VirtualMemory; // ebx
  __int64 FileSizeFromLoadAsDataTable; // rdi
  __int64 v15; // r9
  _DWORD *v16; // rdx
  unsigned int v17; // r10d
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  int v20; // eax
  __int16 v21; // cx
  unsigned int *v22; // rcx
  BOOL v23; // eax
  __int16 v24; // ax
  unsigned int v25; // r9d
  _DWORD *v26; // rdx
  unsigned int v27; // r10d
  unsigned int i; // r8d
  unsigned int v29; // ecx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r11
  __int64 v33; // rbx
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+60h] [rbp-A8h] BYREF
  int v43; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v44; // [rsp+70h] [rbp-98h] BYREF
  BOOL v45; // [rsp+78h] [rbp-90h]
  unsigned int v46; // [rsp+7Ch] [rbp-8Ch]
  unsigned __int64 v47; // [rsp+80h] [rbp-88h]
  unsigned __int64 v48; // [rsp+88h] [rbp-80h]
  _DWORD *v49; // [rsp+90h] [rbp-78h]
  _DWORD *v50; // [rsp+98h] [rbp-70h]
  char v51[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v53; // [rsp+110h] [rbp+8h]

  v53 = a1;
  v5 = a1;
  v6 = 1;
  v7 = a1;
  v48 = a1;
  v39 = 0LL;
  v8 = 0LL;
  v38 = 0LL;
  v40 = a1 & 3;
  if ( (a1 & 3) != 0 )
  {
    v6 = (a1 & 1) == 0;
    v7 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v48 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v9 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v10 = RtlImageNtHeaderEx(1LL, v7, 0LL, &v39);
  if ( v39 )
  {
    v11 = *(_WORD *)(v39 + 24);
    if ( v11 == 267 )
    {
      if ( *(_DWORD *)(v39 + 116) > 2u )
      {
        v15 = *(unsigned int *)(v39 + 136);
        if ( (_DWORD)v15 )
        {
          LODWORD(v44) = *(_DWORD *)(v39 + 140);
          if ( v6 || (unsigned int)v15 < *(_DWORD *)(v39 + 84) )
          {
            v8 = v7 + v15;
            v38 = v7 + v15;
            v10 = 0;
          }
          else
          {
            v16 = (_DWORD *)(*(unsigned __int16 *)(v39 + 20) + v39 + 24);
            v49 = v16;
            v17 = *(unsigned __int16 *)(v39 + 6);
            v18 = 0;
            v43 = 0;
            while ( v18 < v17 )
            {
              v19 = v16[3];
              if ( (unsigned int)v15 >= v19 && (unsigned int)v15 < v16[4] + v19 )
              {
                if ( v16 )
                  v8 = v15 + v7 + (unsigned int)v16[5] - (unsigned __int64)(unsigned int)v16[3];
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
            v5 = v53;
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
    else if ( v11 == 523 )
    {
      v10 = RtlpImageDirectoryEntryToData64(v7, v6, 2, (unsigned int)&v44, v39, (__int64)&v38);
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
  FileSizeFromLoadAsDataTable = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  RtlImageNtHeaderEx(1LL, v9, 0LL, &v42);
  if ( !v42 )
    goto LABEL_41;
  if ( (v5 & 1) == 0 )
  {
    v21 = *(_WORD *)(v42 + 24);
    if ( v21 == 267 )
    {
      FileSizeFromLoadAsDataTable = *(unsigned int *)(v42 + 80);
      v41 = FileSizeFromLoadAsDataTable;
      goto LABEL_42;
    }
    if ( v21 == 523 )
    {
      FileSizeFromLoadAsDataTable = *(unsigned int *)(v42 + 80);
      v41 = FileSizeFromLoadAsDataTable;
      goto LABEL_42;
    }
    v41 = 0LL;
LABEL_41:
    VirtualMemory = -1073741701;
    goto LABEL_42;
  }
  FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(v5);
  v41 = FileSizeFromLoadAsDataTable;
  if ( !FileSizeFromLoadAsDataTable )
  {
    VirtualMemory = ZwQueryVirtualMemory(-1LL, v9, 3LL, v51, 48LL, 0LL);
    if ( VirtualMemory < 0 )
    {
      VirtualMemory = -1073741793;
    }
    else
    {
      FileSizeFromLoadAsDataTable = v52;
      v41 = v52;
    }
  }
LABEL_42:
  v42 = FileSizeFromLoadAsDataTable;
  if ( VirtualMemory >= 0 )
  {
    v39 = v9;
    v22 = a2 + 4;
    if ( (unsigned __int64)a2 < v9
      || v22 < a2
      || FileSizeFromLoadAsDataTable && (unsigned __int64)v22 > FileSizeFromLoadAsDataTable + v9 )
    {
      return (unsigned int)-1073741701;
    }
    v23 = 0;
    v45 = 0;
    if ( v40 )
    {
      v23 = (v5 & 1) != 0;
      v45 = v23;
      v5 = v9;
      v53 = v9;
    }
    if ( !v23 )
    {
      v35 = 0LL;
      goto LABEL_71;
    }
    v40 = 0LL;
    RtlImageNtHeaderEx(1LL, v5, 0LL, &v40);
    v44 = v40;
    if ( !v40 )
      return (unsigned int)-1073741687;
    v24 = *(_WORD *)(v40 + 24);
    if ( v24 == 267 )
    {
      v25 = *(_DWORD *)(v40 + 136);
    }
    else
    {
      if ( v24 != 523 )
        return (unsigned int)-1073741687;
      v25 = *(_DWORD *)(v40 + 152);
    }
    if ( v25 )
    {
      v38 = v5 + v25 - v8;
      v26 = (_DWORD *)(*(unsigned __int16 *)(v40 + 20) + v40 + 24);
      v50 = v26;
      v27 = *(unsigned __int16 *)(v40 + 6);
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
        v5 = v53;
        FileSizeFromLoadAsDataTable = v42;
        v9 = v39;
        v35 = v38;
      }
      else
      {
        v30 = (unsigned int)v26[3];
        v31 = RtlSectionTableFromVirtualAddress(v44);
        v33 = v31;
        if ( !v31 )
          return (unsigned int)-1073741687;
        v5 = v53;
        v34 = RtlAddressInSectionTable(v32, v53, *(unsigned int *)(v31 + 12));
        v35 = v47 + *(unsigned int *)(v33 + 12) - v30 - v34 + v38;
        FileSizeFromLoadAsDataTable = v42;
        v9 = v39;
      }
LABEL_71:
      if ( a3 )
      {
        v36 = v5 + *a2 - v35;
        v37 = v36 + a2[1];
        if ( v36 < v9 || v37 < v36 || FileSizeFromLoadAsDataTable && v37 > v9 + FileSizeFromLoadAsDataTable )
          return (unsigned int)-1073741701;
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
