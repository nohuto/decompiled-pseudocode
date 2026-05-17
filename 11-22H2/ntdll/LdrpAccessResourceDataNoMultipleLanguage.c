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
  unsigned int *v22; // rbx
  BOOL v23; // eax
  __int64 v24; // rcx
  __int16 v25; // ax
  unsigned int v26; // r9d
  _DWORD *v27; // rdx
  unsigned int v28; // r10d
  unsigned int v29; // r8d
  unsigned int v30; // ecx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r11
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  int v44; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  BOOL v46; // [rsp+78h] [rbp-90h]
  unsigned int i; // [rsp+7Ch] [rbp-8Ch]
  unsigned __int64 v48; // [rsp+80h] [rbp-88h]
  unsigned __int64 v49; // [rsp+88h] [rbp-80h]
  _DWORD *v50; // [rsp+90h] [rbp-78h]
  _DWORD *v51; // [rsp+98h] [rbp-70h]
  char v52[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v54; // [rsp+110h] [rbp+8h]

  v54 = a1;
  v5 = a1;
  v6 = 1;
  v7 = a1;
  v49 = a1;
  v40 = 0LL;
  v8 = 0LL;
  v39 = 0LL;
  v41 = a1 & 3;
  if ( (a1 & 3) != 0 )
  {
    v6 = (a1 & 1) == 0;
    v7 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v49 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v9 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v10 = RtlImageNtHeaderEx(1LL, v7, 0LL, &v40);
  if ( v40 )
  {
    v11 = *(_WORD *)(v40 + 24);
    if ( v11 == 267 )
    {
      if ( *(_DWORD *)(v40 + 116) > 2u )
      {
        v15 = *(unsigned int *)(v40 + 136);
        if ( (_DWORD)v15 )
        {
          LODWORD(v45) = *(_DWORD *)(v40 + 140);
          if ( v6 || (unsigned int)v15 < *(_DWORD *)(v40 + 84) )
          {
            v8 = v7 + v15;
            v39 = v7 + v15;
            v10 = 0;
          }
          else
          {
            v16 = (_DWORD *)(*(unsigned __int16 *)(v40 + 20) + v40 + 24);
            v50 = v16;
            v17 = *(unsigned __int16 *)(v40 + 6);
            v18 = 0;
            v44 = 0;
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
              v50 = v16;
              v44 = ++v18;
            }
            v39 = v8;
            v20 = 0;
            if ( !v8 )
              v20 = -1073741811;
            v10 = v20;
            v5 = v54;
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
      v10 = RtlpImageDirectoryEntryToData64(v7, v6, 2, (unsigned int)&v45, v40, (__int64)&v39);
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
  FileSizeFromLoadAsDataTable = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  RtlImageNtHeaderEx(1LL, v9, 0LL, &v43);
  if ( !v43 )
  {
LABEL_40:
    VirtualMemory = -1073741701;
    goto LABEL_41;
  }
  if ( (v5 & 1) == 0 )
  {
    v21 = *(_WORD *)(v43 + 24);
    if ( v21 == 267 )
    {
      FileSizeFromLoadAsDataTable = *(unsigned int *)(v43 + 80);
      v42 = FileSizeFromLoadAsDataTable;
      goto LABEL_41;
    }
    if ( v21 == 523 )
    {
      FileSizeFromLoadAsDataTable = *(unsigned int *)(v43 + 80);
      v42 = FileSizeFromLoadAsDataTable;
      goto LABEL_41;
    }
    v42 = 0LL;
    goto LABEL_40;
  }
  FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(v5);
  v42 = FileSizeFromLoadAsDataTable;
  if ( !FileSizeFromLoadAsDataTable )
  {
    VirtualMemory = ZwQueryVirtualMemory(-1LL, v9, 3LL, v52, 48LL, 0LL);
    if ( VirtualMemory < 0 )
    {
      VirtualMemory = -1073741793;
    }
    else
    {
      FileSizeFromLoadAsDataTable = v53;
      v42 = v53;
    }
  }
LABEL_41:
  v43 = FileSizeFromLoadAsDataTable;
  if ( VirtualMemory >= 0 )
  {
    v40 = v9;
    v22 = a2 + 4;
    if ( (unsigned int)((__int64 (*)(void))Feature_Servicing_ImageSizeBlankFont__private_IsEnabled)() )
    {
      if ( (unsigned __int64)a2 < v9 || v22 < a2 )
        return (unsigned int)-1073741701;
      if ( !FileSizeFromLoadAsDataTable )
        goto LABEL_50;
    }
    else if ( (unsigned __int64)a2 < v9 || v22 < a2 )
    {
      return (unsigned int)-1073741701;
    }
    if ( (unsigned __int64)v22 <= FileSizeFromLoadAsDataTable + v9 )
    {
LABEL_50:
      v23 = 0;
      v46 = 0;
      v24 = 1LL;
      if ( v41 )
      {
        v23 = (v5 & 1) != 0;
        v46 = v23;
        v5 = v9;
        v54 = v9;
      }
      if ( !v23 )
      {
        v36 = 0LL;
        goto LABEL_74;
      }
      v41 = 0LL;
      RtlImageNtHeaderEx(1LL, v5, 0LL, &v41);
      v45 = v41;
      if ( !v41 )
        return (unsigned int)-1073741687;
      v25 = *(_WORD *)(v41 + 24);
      if ( v25 == 267 )
      {
        v26 = *(_DWORD *)(v41 + 136);
      }
      else
      {
        if ( v25 != 523 )
          return (unsigned int)-1073741687;
        v26 = *(_DWORD *)(v41 + 152);
      }
      if ( v26 )
      {
        v39 = v5 + v26 - v8;
        v27 = (_DWORD *)(*(unsigned __int16 *)(v41 + 20) + v41 + 24);
        v51 = v27;
        v28 = *(unsigned __int16 *)(v41 + 6);
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
          v5 = v54;
          FileSizeFromLoadAsDataTable = v43;
          v9 = v40;
          v36 = v39;
        }
        else
        {
          v31 = (unsigned int)v27[3];
          v32 = RtlSectionTableFromVirtualAddress(v45);
          v34 = v32;
          if ( !v32 )
            return (unsigned int)-1073741687;
          v5 = v54;
          v35 = RtlAddressInSectionTable(v33, v54, *(unsigned int *)(v32 + 12));
          v36 = v48 + *(unsigned int *)(v34 + 12) - v31 - v35 + v39;
          FileSizeFromLoadAsDataTable = v43;
          v9 = v40;
        }
LABEL_74:
        if ( !a3 )
        {
LABEL_85:
          if ( a4 )
            *a4 = a2[1];
          return 0;
        }
        v37 = v5 + *a2 - v36;
        v38 = v37 + a2[1];
        if ( (unsigned int)Feature_Servicing_ImageSizeBlankFont__private_IsEnabled(v24, 0LL) )
        {
          if ( v37 < v9 || v38 < v37 )
            return (unsigned int)-1073741701;
          if ( !FileSizeFromLoadAsDataTable )
          {
LABEL_83:
            *a3 = v37;
            goto LABEL_85;
          }
        }
        else if ( v37 < v9 || v38 < v37 )
        {
          return (unsigned int)-1073741701;
        }
        if ( v38 <= v9 + FileSizeFromLoadAsDataTable )
          goto LABEL_83;
        return (unsigned int)-1073741701;
      }
      return (unsigned int)-1073741687;
    }
    return (unsigned int)-1073741701;
  }
  return (unsigned int)VirtualMemory;
}
