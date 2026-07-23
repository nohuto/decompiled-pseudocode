/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x1402F7FA8
 * Callers:
 *     LdrResSearchResource @ 0x14075A150 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x1407E1E94 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpFindMessageInAlternateModule @ 0x1402F6D64 (LdrpFindMessageInAlternateModule.c)
 *     LdrIsResItemExist @ 0x1402F74C8 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1402F77DC (LdrLoadAlternateResourceModuleEx.c)
 *     DownLevelLangIDToLanguageName @ 0x14037140C (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D93F0 (_wcsicmp.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406F31DC (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x14075A518 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x14075A6B8 (LdrpResGetResourceDirectory.c)
 *     LdrResFallbackLangList @ 0x14075AA64 (LdrResFallbackLangList.c)
 *     LdrResGetRCConfig @ 0x1407E1E94 (LdrResGetRCConfig.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        void *a1,
        ULONG64 a2,
        int a3,
        unsigned __int64 *a4,
        int a5,
        unsigned int **a6,
        __int64 *a7,
        void *a8,
        __int64 a9)
{
  bool v11; // dl
  unsigned __int16 v12; // r12
  int v13; // r14d
  unsigned __int16 *v14; // rax
  int v15; // edi
  int v16; // esi
  unsigned __int16 v17; // cx
  int v18; // ecx
  int v19; // edx
  __int64 result; // rax
  int MappingSize; // edi
  unsigned int v22; // r12d
  int v23; // ecx
  unsigned int i; // r14d
  char v25; // r13
  LANGID *v26; // r11
  int v27; // r10d
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r9
  ULONG64 v31; // r8
  PVOID v32; // rcx
  int v33; // eax
  _DWORD *v34; // r14
  int RCConfig; // eax
  NTSTATUS v36; // eax
  ULONG64 v37; // rdx
  unsigned __int64 v38; // r8
  __int64 v39; // rsi
  _WORD *v40; // r15
  LANGID v41; // [rsp+70h] [rbp-398h] BYREF
  int v42; // [rsp+74h] [rbp-394h]
  bool v43; // [rsp+78h] [rbp-390h]
  ULONG_PTR ResourceOffset; // [rsp+80h] [rbp-388h] BYREF
  PVOID DllHandle; // [rsp+88h] [rbp-380h]
  PVOID ResourceDllBase; // [rsp+90h] [rbp-378h] BYREF
  int v47; // [rsp+98h] [rbp-370h]
  int v48; // [rsp+9Ch] [rbp-36Ch]
  unsigned __int16 *v49; // [rsp+A0h] [rbp-368h]
  ULONG64 Size; // [rsp+A8h] [rbp-360h]
  __int64 v51; // [rsp+B0h] [rbp-358h] BYREF
  unsigned __int64 *v52; // [rsp+B8h] [rbp-350h]
  unsigned int **v53; // [rsp+C0h] [rbp-348h]
  __int64 v54; // [rsp+C8h] [rbp-340h] BYREF
  __int64 v55; // [rsp+D0h] [rbp-338h] BYREF
  __int64 v56; // [rsp+D8h] [rbp-330h]
  __int64 v57; // [rsp+E0h] [rbp-328h]
  __int64 *v58; // [rsp+E8h] [rbp-320h]
  __int64 v59; // [rsp+F0h] [rbp-318h]
  void *v60; // [rsp+F8h] [rbp-310h]
  _DWORD v61[132]; // [rsp+100h] [rbp-308h] BYREF
  _WORD Src[88]; // [rsp+310h] [rbp-F8h] BYREF

  v52 = a4;
  Size = a2;
  DllHandle = a1;
  v58 = a7;
  v53 = a6;
  v60 = a8;
  v59 = a9;
  v56 = 0LL;
  v57 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  memset(v61, 0, 0x206uLL);
  v11 = 0;
  v47 = a3 & 0x40;
  v51 = 0LL;
  v12 = 0;
  v13 = a3 & 0x80;
  v14 = (unsigned __int16 *)(a4 + 2);
  v49 = (unsigned __int16 *)(a4 + 2);
  v15 = a5;
  if ( a5 == 3 )
  {
    v12 = *v14;
    v11 = (*a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp((const wchar_t *)*a4, L"MUI");
    v43 = v11;
    v14 = v49;
  }
  else
  {
    v49 = (unsigned __int16 *)(a4 + 2);
  }
  v16 = a3 & 0x80;
  if ( (a3 & 0x10) == 0 && a5 >= 1 && a5 <= 3 )
  {
    if ( a5 == 3 )
      v17 = *v14;
    else
      v17 = 0;
    if ( (a3 & 0x1000000) == 0
      && (((*v52 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v11
       || (~(_BYTE)a3 & 8) == 0
       || (v17 & 0xF3FF) != 0
       || v17 == 3072) )
    {
      RCConfig = LdrResGetRCConfig((_DWORD)DllHandle, Size, 0, a3, 1);
      MappingSize = RCConfig;
      if ( RCConfig < 0 )
      {
        if ( RCConfig != -1073741686 )
          return (unsigned int)MappingSize;
        v16 = v13 | 0x80000;
        v15 = a5;
      }
      else
      {
        v16 = v13 | LdrIsResItemExist(DllHandle, v52);
        v15 = a5;
      }
    }
    else
    {
      a3 |= 0x10u;
      v16 = v13;
    }
  }
  v18 = 393216;
  if ( (v16 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  v19 = ~v16;
  LOWORD(v61[0]) = 1;
  LOWORD(v61[1]) = 0;
  LOBYTE(v18) = (~v16 & 0x80000) != 0 && (~(_BYTE)a3 & 0x10) != 0;
  if ( (((unsigned __int8)v18 & ((~v16 & 0x20000) != 0)) != 0 || v15 == 3) && ((a3 & 0x10) == 0 || (a3 & 0x20) == 0) )
  {
    if ( (a3 & 4) != 0 )
      v16 |= 4u;
    result = LdrResFallbackLangList(v18, v19, v12, v16, (__int64)v61);
    if ( (int)result < 0 && (a3 & 0x1000) != 0 )
      return result;
  }
  if ( (a3 & 0x10) != 0 || (~v16 & 0x40000) != 0 || (v16 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory((ULONGLONG)DllHandle, Size, (__int64)&v54);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v22 = 0;
LABEL_28:
  if ( v22 >= LOWORD(v61[0]) )
    return (unsigned int)MappingSize;
  ResourceDllBase = 0LL;
  ResourceOffset = 0LL;
  v41 = v61[2 * v22 + 1];
  v23 = v61[2 * v22 + 2];
  v42 = v23;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
LABEL_62:
      ++v22;
      goto LABEL_28;
    }
    if ( i )
    {
      v25 = 0;
      goto LABEL_38;
    }
    if ( v23 != 9 )
      break;
    a3 |= 0x20u;
LABEL_36:
    ;
  }
  if ( (v16 & 0xA0000) != 0 || (a3 & 0x10) != 0 || !v41 || !PnPBootDriversInitialized )
  {
LABEL_35:
    v23 = v42;
    goto LABEL_36;
  }
  v25 = 1;
LABEL_38:
  if ( !v25 )
    goto LABEL_39;
  v36 = LdrLoadAlternateResourceModuleEx(DllHandle, v41, &ResourceDllBase, &ResourceOffset, v16 | 0x1000);
  MappingSize = v36;
  if ( v36 < 0 )
  {
    if ( v36 == -1073741772 || v36 == -1073741766 )
      MappingSize = -1073020927;
    goto LABEL_35;
  }
  v37 = ResourceOffset;
  if ( !ResourceOffset )
  {
    MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL);
    v37 = ResourceOffset;
  }
  if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
    goto LABEL_62;
  MappingSize = LdrpResGetResourceDirectory((ULONGLONG)ResourceDllBase, v37, (__int64)&v55);
  if ( MappingSize < 0 )
    goto LABEL_35;
LABEL_39:
  if ( (~(_BYTE)a3 & 2) != 0 && a5 > 2 )
    *(_QWORD *)v49 = v41;
  v51 = 0LL;
  v26 = &v41;
  if ( v25 )
    v26 = 0LL;
  v27 = a3;
  if ( v25 )
  {
    v27 = a3 | 0x20;
  }
  else if ( (a3 & 0x20) == 0 )
  {
    v27 = a3 | 4;
  }
  v28 = &v51;
  if ( v58 )
    v28 = v58;
  v29 = v54;
  if ( v25 )
    v29 = v55;
  v30 = v56;
  if ( v25 )
    v30 = v57;
  v31 = Size;
  if ( v25 )
    v31 = ResourceOffset;
  v32 = DllHandle;
  if ( v25 )
    v32 = ResourceDllBase;
  v33 = LdrpResSearchResourceInsideDirectory(v32, 0LL, v31, v30, v29, 0LL, v52, a5, v61, v53, v28, v27, v26);
  MappingSize = v33;
  if ( v47 && v33 >= 0 && v53 && v25 )
  {
    v38 = v58 ? *v58 : v51;
    MappingSize = LdrpFindMessageInAlternateModule(ResourceDllBase, *v53, v38, *((_DWORD *)v52 + 6), 1);
    if ( MappingSize < 0 )
    {
      *v53 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_35;
  v34 = (_DWORD *)v59;
  if ( !v59 )
    return (unsigned int)MappingSize;
  if ( v41 )
  {
    if ( (unsigned int)DownLevelLangIDToLanguageName(v41, Src, 86LL, 2LL) )
    {
      v39 = -1LL;
      do
        ++v39;
      while ( Src[v39] );
      goto LABEL_104;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    Src[0] = 0;
    LODWORD(v39) = 0;
LABEL_104:
    if ( (unsigned int)v39 < *v34 && (v40 = v60) != 0LL )
    {
      memmove(v60, Src, 2LL * (unsigned int)v39);
      *v34 = v39 + 1;
      v40[(unsigned int)v39] = 0;
    }
    else
    {
      *v34 = v39 + 1;
      MappingSize = -1073741789;
      v48 = -1073741789;
    }
  }
  return (unsigned int)MappingSize;
}
