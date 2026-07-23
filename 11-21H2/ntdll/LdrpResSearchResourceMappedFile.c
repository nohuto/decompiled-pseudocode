/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x180064E1C
 * Callers:
 *     LdrResSearchResource @ 0x180064700 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x180067050 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrIsResItemExist @ 0x180036C48 (LdrIsResItemExist.c)
 *     LdrpResGetMappingSize @ 0x18003F8A0 (LdrpResGetMappingSize.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180041F80 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLcidToLocaleName @ 0x18004B900 (RtlLcidToLocaleName.c)
 *     LdrpResGetResourceDirectory @ 0x1800654F0 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180065904 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x180066B4C (LdrResFallbackLangList.c)
 *     LdrResGetRCConfig @ 0x180067050 (LdrResGetRCConfig.c)
 *     LdrpIsReparsePoint @ 0x180067580 (LdrpIsReparsePoint.c)
 *     LdrpFindMessageInAlternateModule @ 0x18006D5A8 (LdrpFindMessageInAlternateModule.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800956E0 (_wcsicmp.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC820 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        void *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  unsigned int v10; // r15d
  ULONG_PTR v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r12
  int v16; // ebx
  int v17; // esi
  int v18; // r14d
  bool v19; // dl
  bool v20; // r12
  PVOID v21; // rbx
  bool v22; // cl
  bool v23; // r12
  int MappingSize; // esi
  unsigned int v25; // ecx
  LANGID *v26; // r11
  int v27; // r10d
  __int64 *v28; // rax
  __int64 v29; // rdx
  int v30; // r9d
  int v31; // r8d
  int v32; // ecx
  unsigned __int64 *v33; // rbx
  __int64 v34; // r14
  __int64 result; // rax
  char v36; // al
  bool v37; // zf
  unsigned int *v38; // rcx
  __int16 v39; // cx
  int RCConfig; // eax
  __int64 v41; // rax
  LANGID v42; // cx
  NTSTATUS v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // ebx
  __int64 v47; // rax
  unsigned int v48; // r13d
  int v49; // [rsp+70h] [rbp-3D8h]
  char v50; // [rsp+74h] [rbp-3D4h]
  char v51; // [rsp+75h] [rbp-3D3h]
  char v52; // [rsp+76h] [rbp-3D2h]
  LANGID v53; // [rsp+78h] [rbp-3D0h] BYREF
  unsigned __int16 v54; // [rsp+7Ch] [rbp-3CCh]
  PVOID DllHandle; // [rsp+80h] [rbp-3C8h]
  ULONG_PTR ResourceOffset; // [rsp+88h] [rbp-3C0h] BYREF
  PVOID ResourceDllBase; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v58; // [rsp+98h] [rbp-3B0h]
  unsigned int v59; // [rsp+A0h] [rbp-3A8h]
  unsigned __int64 *v60; // [rsp+A8h] [rbp-3A0h]
  int v61; // [rsp+B0h] [rbp-398h]
  _QWORD *v62; // [rsp+B8h] [rbp-390h]
  unsigned int *v63; // [rsp+C0h] [rbp-388h]
  __int64 v64; // [rsp+C8h] [rbp-380h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-378h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-370h]
  __int64 v67; // [rsp+E0h] [rbp-368h]
  __int64 *v68; // [rsp+E8h] [rbp-360h]
  __int64 v69; // [rsp+F0h] [rbp-358h] BYREF
  void *v70; // [rsp+F8h] [rbp-350h]
  _QWORD v71[2]; // [rsp+100h] [rbp-348h] BYREF
  __int64 v72; // [rsp+110h] [rbp-338h] BYREF
  ULONG_PTR v73; // [rsp+118h] [rbp-330h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+120h] [rbp-328h] BYREF
  int v75; // [rsp+130h] [rbp-318h] BYREF
  const wchar_t *v76; // [rsp+138h] [rbp-310h]
  _WORD v77[2]; // [rsp+140h] [rbp-308h] BYREF
  _WORD v78[262]; // [rsp+144h] [rbp-304h]
  _WORD Src[88]; // [rsp+350h] [rbp-F8h] BYREF

  v60 = (unsigned __int64 *)a4;
  v10 = a3;
  v58 = a2;
  DllHandle = a1;
  v68 = a7;
  v62 = a6;
  v70 = a8;
  v63 = a9;
  ResourceDllBase = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v50 = 0;
  v61 = a3 & 0x40;
  v51 = 0;
  v52 = 0;
  LODWORD(v71[0]) = 4980810;
  v71[1] = L"LdrpResSearchResourceMappedFile Enter";
  v75 = 4849736;
  v76 = L"LdrpResSearchResourceMappedFile Exit";
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v14 = 2147353477LL;
  if ( (*(_BYTE *)v14 & 1) != 0 )
  {
    v15 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v44 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v44 = 2147353476LL;
    LdrpTraceLoadMUIDll(v71, *(unsigned __int8 *)v44);
  }
  else
  {
    v15 = 2147353476LL;
  }
  v54 = 0;
  v16 = v10 & 0x80;
  v17 = a5;
  if ( a5 == 3 )
  {
    v54 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v37 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v36 = 1, !v37) )
    {
      v36 = 0;
    }
    v50 = v36;
  }
  v18 = v10 & 0x80;
  if ( (v10 & 0x10) == 0 )
  {
    v18 = v10 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v39 = *((_WORD *)v60 + 8);
      else
        v39 = 0;
      if ( (v10 & 0x1000000) == 0
        && (((*v60 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v50
         || (~(_BYTE)v10 & 8) == 0
         || (v39 & 0xF3FF) != 0
         || v39 == 3072) )
      {
        RCConfig = LdrResGetRCConfig((_DWORD)DllHandle, v58, 0, v10, 1);
        MappingSize = RCConfig;
        v49 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v18 = v16 | LdrIsResItemExist(DllHandle, v60, v12, v10);
        }
        else
        {
          if ( RCConfig != -1073741686 )
          {
LABEL_37:
            v34 = 2147353477LL;
            goto LABEL_38;
          }
          v18 = v16 | 0x80000;
        }
        v17 = a5;
      }
      else
      {
        v10 |= 0x10u;
        v18 = v16;
      }
    }
  }
  if ( (v18 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    v49 = -1073741686;
    goto LABEL_37;
  }
  v19 = (~v18 & 0x20000) != 0 && (~v18 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v20 = v19;
  v77[0] = 1;
  v78[0] = 0;
  if ( !v19 && v17 != 3 || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    v21 = DllHandle;
  }
  else
  {
    if ( (v10 & 4) != 0 )
      v18 |= 4u;
    v21 = DllHandle;
    result = LdrResFallbackLangList((_DWORD)DllHandle, v58, v54, v18, (__int64)v77);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v18 & 0x40000) != 0 || (v18 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v21, (__int64)&v64);
    if ( (int)result < 0 )
      return result;
  }
  while ( 2 )
  {
    v22 = 0;
    if ( (v18 & 0x20000) == 0 )
      v22 = v20;
    v23 = v22;
    LOBYTE(v54) = v22;
    MappingSize = 0;
    v49 = 0;
    ResourceOffset = 0LL;
    v53 = 0;
    v25 = 0;
    while ( 1 )
    {
      v59 = v25;
      if ( v25 >= v77[0] )
        goto LABEL_54;
      if ( !v23 )
        break;
      ResourceDllBase = 0LL;
      ResourceOffset = 0LL;
      v41 = v25;
      v42 = v78[4 * v25];
      if ( !v42 )
      {
        if ( *(_DWORD *)&v78[4 * v41 + 2] == 2 )
          goto LABEL_121;
LABEL_82:
        MappingSize = -1073741811;
LABEL_83:
        v49 = MappingSize;
        goto LABEL_121;
      }
      if ( *(_DWORD *)&v78[4 * v41 + 2] == 10 )
        goto LABEL_82;
      v53 = v42;
      v43 = LdrLoadAlternateResourceModuleEx(v21, v42, &ResourceDllBase, &ResourceOffset, v18 | 0x1000);
      MappingSize = v43;
      v49 = v43;
      if ( v43 >= 0 )
      {
        v51 = 1;
        v11 = ResourceOffset;
        if ( !ResourceOffset )
        {
          MappingSize = LdrpResGetMappingSize((__int64)ResourceDllBase, &ResourceOffset, 512, 1);
          v49 = MappingSize;
          v11 = ResourceOffset;
        }
        if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
          goto LABEL_34;
        MappingSize = LdrpResGetResourceDirectory(ResourceDllBase, (__int64)&v65);
        v49 = MappingSize;
        if ( MappingSize < 0 )
          goto LABEL_121;
        break;
      }
      if ( v43 == -1073741772 || v43 == -1073741766 )
      {
        MappingSize = -1073020927;
        goto LABEL_83;
      }
LABEL_121:
      v25 = v59 + 1;
      v21 = DllHandle;
    }
    v69 = 0LL;
    v26 = &v53;
    if ( v23 )
      v26 = 0LL;
    v27 = v10;
    if ( v23 )
      v27 = v10 | 0x20;
    v28 = &v69;
    if ( v68 )
      v28 = v68;
    v29 = v64;
    if ( v23 )
      v29 = v65;
    v30 = v66;
    if ( v23 )
      v30 = v67;
    v31 = v58;
    if ( v23 )
      v31 = ResourceOffset;
    v32 = (int)v21;
    if ( v23 )
      v32 = (int)ResourceDllBase;
    v33 = v60;
    MappingSize = LdrpResSearchResourceInsideDirectory(
                    v32,
                    0,
                    v31,
                    v30,
                    v29,
                    0LL,
                    (__int64)v60,
                    a5,
                    (__int64)v77,
                    (__int64)v62,
                    (__int64)v28,
                    v27,
                    (__int64)v26);
    v49 = MappingSize;
    if ( v61 && (~v18 & 0x40000) != 0 )
    {
      if ( MappingSize < 0 )
      {
LABEL_33:
        if ( !v23 )
          goto LABEL_34;
        v46 = ResourceOffset;
        v71[0] = ResourceDllBase;
        if ( (int)LdrResGetRCConfig((_DWORD)DllHandle, v58, (unsigned int)&v73, 4096, 1) >= 0
          && (int)LdrResGetRCConfig(v71[0], v46, (unsigned int)&v72, 4096, 0) >= 0 )
        {
          v11 = v73;
          v47 = *(_QWORD *)(v73 + 28) - *(_QWORD *)(v72 + 28);
          if ( !v47 )
            v47 = *(_QWORD *)(v73 + 36) - *(_QWORD *)(v72 + 36);
          if ( !v47 )
            goto LABEL_54;
        }
        goto LABEL_121;
      }
      if ( v62 && v23 )
      {
        if ( v68 )
          v45 = *v68;
        else
          LODWORD(v45) = v69;
        MappingSize = LdrpFindMessageInAlternateModule((_DWORD)ResourceDllBase, *v62, v45, *((_DWORD *)v33 + 6), 1);
        v49 = MappingSize;
        if ( MappingSize < 0 )
        {
          *v62 = 0LL;
          if ( MappingSize == -1073741701 )
            goto LABEL_36;
        }
      }
    }
    if ( MappingSize < 0 )
      goto LABEL_33;
    v38 = v63;
    if ( !v63 )
      goto LABEL_54;
    if ( v53 )
    {
      LocaleName.Buffer = Src;
      LocaleName.MaximumLength = 172;
      MappingSize = RtlLcidToLocaleName(v53, &LocaleName, 2u, 0);
      v49 = MappingSize;
      if ( MappingSize >= 0 )
      {
        v48 = LocaleName.Length >> 1;
        v38 = v63;
        goto LABEL_126;
      }
      goto LABEL_36;
    }
    Src[0] = 0;
    v48 = 0;
LABEL_126:
    if ( v48 < *v38 && v70 )
    {
      memmove(v70, Src, 2LL * v48);
      *v63 = v48 + 1;
      *((_WORD *)v70 + v48) = 0;
LABEL_54:
      if ( MappingSize < 0 )
      {
LABEL_34:
        LOBYTE(v11) = v54;
        v20 = v54;
        if ( (_BYTE)v54 )
        {
          if ( v52 || v51 || (int)LdrpIsReparsePoint(DllHandle, v11, v12, v13) < 0 )
          {
            if ( (v18 & 0x40000) != 0 )
              v20 = 0;
            else
              v18 |= 0x20000u;
          }
          else
          {
            v18 |= 0x400000u;
            v52 = 1;
          }
        }
        v21 = DllHandle;
        if ( !v20 )
          goto LABEL_36;
        continue;
      }
LABEL_36:
      v15 = 2147353476LL;
      goto LABEL_37;
    }
    break;
  }
  *v38 = v48 + 1;
  MappingSize = -1073741789;
  v49 = -1073741789;
  v15 = 2147353476LL;
  v34 = 2147353477LL;
LABEL_38:
  if ( RtlGetCurrentServiceSessionId() )
  {
    v34 = (__int64)NtCurrentPeb()->SharedData + 555;
    MappingSize = v49;
  }
  if ( (*(_BYTE *)v34 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
      MappingSize = v49;
    }
    LdrpTraceLoadMUIDll(&v75, *(unsigned __int8 *)v15);
  }
  return (unsigned int)MappingSize;
}
