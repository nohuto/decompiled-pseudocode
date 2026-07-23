/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x180005938
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x180007BB0 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpResGetResourceDirectory @ 0x180006000 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180006414 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x180007644 (LdrResFallbackLangList.c)
 *     LdrResGetRCConfig @ 0x180007BB0 (LdrResGetRCConfig.c)
 *     LdrIsResItemExist @ 0x1800083C4 (LdrIsResItemExist.c)
 *     LdrpIsReparsePoint @ 0x1800086DC (LdrpIsReparsePoint.c)
 *     RtlLcidToLocaleName @ 0x180015D90 (RtlLcidToLocaleName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x180022630 (LdrpResGetMappingSize.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrpFindMessageInAlternateModule @ 0x1800681E4 (LdrpFindMessageInAlternateModule.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180090EB0 (_wcsicmp.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800ED41C (LdrpTraceLoadMUIDll.c)
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
  __int64 v11; // rcx
  __int64 v12; // r12
  int v13; // ebx
  int v14; // esi
  int v15; // r14d
  bool v16; // dl
  bool v17; // al
  bool v18; // bl
  PVOID v19; // rsi
  bool v20; // r12
  NTSTATUS MappingSize; // esi
  unsigned int i; // ecx
  int v23; // ebx
  LANGID *v24; // r11
  int v25; // r10d
  __int64 *v26; // rax
  __int64 v27; // rdx
  int v28; // r9d
  int v29; // r8d
  int v30; // ecx
  __int64 v31; // rbx
  __int64 v32; // r14
  __int64 result; // rax
  char v34; // al
  bool v35; // zf
  unsigned int *v36; // rcx
  __int16 v37; // cx
  int RCConfig; // eax
  __int64 v39; // r8
  __int64 v40; // rax
  LANGID v41; // cx
  NTSTATUS v42; // eax
  __int64 v43; // r9
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
  unsigned int v54; // [rsp+7Ch] [rbp-3CCh]
  PVOID DllHandle; // [rsp+80h] [rbp-3C8h]
  ULONG_PTR ResourceOffset; // [rsp+88h] [rbp-3C0h] BYREF
  PVOID ResourceDllBase; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v58; // [rsp+98h] [rbp-3B0h]
  __int64 v59; // [rsp+A0h] [rbp-3A8h]
  int v60; // [rsp+A8h] [rbp-3A0h]
  _QWORD *v61; // [rsp+B0h] [rbp-398h]
  unsigned int *v62; // [rsp+B8h] [rbp-390h]
  __int64 v63; // [rsp+C0h] [rbp-388h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-380h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-378h]
  __int64 v66; // [rsp+D8h] [rbp-370h]
  __int64 *v67; // [rsp+E0h] [rbp-368h]
  __int64 v68; // [rsp+E8h] [rbp-360h] BYREF
  void *v69; // [rsp+F0h] [rbp-358h]
  _QWORD v70[2]; // [rsp+F8h] [rbp-350h] BYREF
  __int64 v71; // [rsp+108h] [rbp-340h] BYREF
  __int64 v72; // [rsp+110h] [rbp-338h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+118h] [rbp-330h] BYREF
  int v74; // [rsp+128h] [rbp-320h] BYREF
  const wchar_t *v75; // [rsp+130h] [rbp-318h]
  _WORD v76[2]; // [rsp+140h] [rbp-308h] BYREF
  _WORD v77[262]; // [rsp+144h] [rbp-304h]
  _WORD Src[88]; // [rsp+350h] [rbp-F8h] BYREF

  v59 = a4;
  v10 = a3;
  v58 = a2;
  DllHandle = a1;
  v67 = a7;
  v61 = a6;
  v69 = a8;
  v62 = a9;
  ResourceDllBase = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v50 = 0;
  v60 = a3 & 0x40;
  v51 = 0;
  v52 = 0;
  LODWORD(v70[0]) = 4980810;
  v70[1] = L"LdrpResSearchResourceMappedFile Enter";
  v74 = 4849736;
  v75 = L"LdrpResSearchResourceMappedFile Exit";
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v44 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v44 = 2147353476LL;
    LdrpTraceLoadMUIDll(v70, *(unsigned __int8 *)v44);
  }
  else
  {
    v12 = 2147353476LL;
  }
  LOWORD(v54) = 0;
  v13 = v10 & 0x80;
  v14 = a5;
  if ( a5 == 3 )
  {
    LOWORD(v54) = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v35 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v34 = 1, !v35) )
    {
      v34 = 0;
    }
    v50 = v34;
  }
  v15 = v10 & 0x80;
  if ( (v10 & 0x10) == 0 )
  {
    v15 = v10 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v37 = *(_WORD *)(v59 + 16);
      else
        v37 = 0;
      if ( (v10 & 0x1000000) == 0
        && (((*(_QWORD *)v59 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v50
         || (~(_BYTE)v10 & 8) == 0
         || (v37 & 0xF3FF) != 0
         || v37 == 3072) )
      {
        RCConfig = LdrResGetRCConfig((_DWORD)DllHandle, v58, 0, v10, 1);
        MappingSize = RCConfig;
        v49 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v15 = v13 | LdrIsResItemExist(DllHandle, v59, v39, v10);
        }
        else
        {
          if ( RCConfig != -1073741686 )
          {
LABEL_39:
            v32 = 2147353477LL;
            goto LABEL_40;
          }
          v15 = v13 | 0x80000;
        }
        v14 = a5;
      }
      else
      {
        v10 |= 0x10u;
        v15 = v13;
      }
    }
  }
  if ( (v15 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    v49 = -1073741686;
    goto LABEL_39;
  }
  v16 = (~v15 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v17 = (~v15 & 0x20000) != 0;
  v18 = v16 && v17;
  v76[0] = 1;
  v77[0] = 0;
  if ( (!v16 || !v17) && v14 != 3 || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    v19 = DllHandle;
  }
  else
  {
    if ( (v10 & 4) != 0 )
      v15 |= 4u;
    v19 = DllHandle;
    result = LdrResFallbackLangList((_DWORD)DllHandle, v58, (unsigned __int16)v54, v15, (__int64)v76);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v15 & 0x40000) != 0 || (v15 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v19, (__int64)&v63);
    if ( (int)result < 0 )
      return result;
  }
  while ( 2 )
  {
    v20 = 0;
    if ( (v15 & 0x20000) == 0 )
      v20 = v18;
    MappingSize = 0;
    v49 = 0;
    ResourceOffset = 0LL;
    v53 = 0;
    for ( i = 0; ; i = v54 + 1 )
    {
      v54 = i;
      if ( i >= v76[0] )
        goto LABEL_35;
      if ( !v20 )
        break;
      ResourceDllBase = 0LL;
      ResourceOffset = 0LL;
      v40 = i;
      v41 = v77[4 * i];
      if ( !v41 )
      {
        if ( *(_DWORD *)&v77[4 * v40 + 2] == 2 )
          continue;
LABEL_83:
        MappingSize = -1073741811;
LABEL_84:
        v49 = MappingSize;
        continue;
      }
      if ( *(_DWORD *)&v77[4 * v40 + 2] == 10 )
        goto LABEL_83;
      v53 = v41;
      v23 = (int)DllHandle;
      v42 = LdrLoadAlternateResourceModuleEx(DllHandle, v41, &ResourceDllBase, &ResourceOffset, v15 | 0x1000);
      MappingSize = v42;
      v49 = v42;
      if ( v42 < 0 )
      {
        if ( v42 == -1073741772 || v42 == -1073741766 )
        {
          MappingSize = -1073020927;
          goto LABEL_84;
        }
      }
      else
      {
        v51 = 1;
        if ( !ResourceOffset )
        {
          LOBYTE(v43) = 1;
          MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL, v43);
          v49 = MappingSize;
        }
        if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
          goto LABEL_35;
        MappingSize = LdrpResGetResourceDirectory(ResourceDllBase, (__int64)&v64);
        v49 = MappingSize;
        if ( MappingSize >= 0 )
          goto LABEL_18;
      }
LABEL_123:
      ;
    }
    v23 = (int)DllHandle;
LABEL_18:
    v68 = 0LL;
    v24 = &v53;
    if ( v20 )
      v24 = 0LL;
    v25 = v10;
    if ( v20 )
      v25 = v10 | 0x20;
    v26 = &v68;
    if ( v67 )
      v26 = v67;
    v27 = v63;
    if ( v20 )
      v27 = v64;
    v28 = v65;
    if ( v20 )
      v28 = v66;
    v29 = v58;
    if ( v20 )
      v29 = ResourceOffset;
    v30 = v23;
    if ( v20 )
      v30 = (int)ResourceDllBase;
    v31 = v59;
    MappingSize = LdrpResSearchResourceInsideDirectory(
                    v30,
                    0,
                    v29,
                    v28,
                    v27,
                    0LL,
                    v59,
                    a5,
                    (__int64)v76,
                    (__int64)v61,
                    (__int64)v26,
                    v25,
                    (__int64)v24);
    v49 = MappingSize;
    if ( v60 && (~v15 & 0x40000) != 0 )
    {
      if ( MappingSize < 0 )
        goto LABEL_34;
      if ( v61 && v20 )
      {
        if ( v67 )
          v45 = *v67;
        else
          LODWORD(v45) = v68;
        MappingSize = LdrpFindMessageInAlternateModule((_DWORD)ResourceDllBase, *v61, v45, *(_DWORD *)(v31 + 24), 1);
        v49 = MappingSize;
        if ( MappingSize < 0 )
        {
          *v61 = 0LL;
          if ( MappingSize == -1073741701 )
            goto LABEL_38;
        }
      }
    }
    if ( MappingSize < 0 )
    {
LABEL_34:
      if ( !v20 )
        goto LABEL_35;
      v46 = ResourceOffset;
      v70[0] = ResourceDllBase;
      if ( (int)LdrResGetRCConfig((_DWORD)DllHandle, v58, (unsigned int)&v72, 4096, 1) >= 0
        && (int)LdrResGetRCConfig(v70[0], v46, (unsigned int)&v71, 4096, 0) >= 0 )
      {
        v47 = *(_QWORD *)(v72 + 28) - *(_QWORD *)(v71 + 28);
        if ( !v47 )
          v47 = *(_QWORD *)(v72 + 36) - *(_QWORD *)(v71 + 36);
        if ( !v47 )
          goto LABEL_35;
      }
      goto LABEL_123;
    }
    v36 = v62;
    if ( !v62 )
      goto LABEL_35;
    if ( v53 )
    {
      LocaleName.Buffer = Src;
      LocaleName.MaximumLength = 172;
      MappingSize = RtlLcidToLocaleName(v53, &LocaleName, 2u, 0);
      v49 = MappingSize;
      if ( MappingSize >= 0 )
      {
        v48 = LocaleName.Length >> 1;
        v36 = v62;
        goto LABEL_128;
      }
      goto LABEL_38;
    }
    Src[0] = 0;
    v48 = 0;
LABEL_128:
    if ( v48 < *v36 && v69 )
    {
      memmove(v69, Src, 2LL * v48);
      *v62 = v48 + 1;
      *((_WORD *)v69 + v48) = 0;
LABEL_35:
      v18 = v20;
      if ( MappingSize < 0 )
      {
        if ( v20 )
        {
          if ( v52 || v51 || (int)LdrpIsReparsePoint(DllHandle) < 0 )
          {
            if ( (v15 & 0x40000) != 0 )
            {
              v18 = 0;
              goto LABEL_37;
            }
            v15 |= 0x20000u;
          }
          else
          {
            v15 |= 0x400000u;
            v52 = 1;
          }
          v18 = v20;
        }
LABEL_37:
        if ( v18 )
          continue;
      }
LABEL_38:
      v12 = 2147353476LL;
      goto LABEL_39;
    }
    break;
  }
  *v36 = v48 + 1;
  MappingSize = -1073741789;
  v49 = -1073741789;
  v12 = 2147353476LL;
  v32 = 2147353477LL;
LABEL_40:
  if ( RtlGetCurrentServiceSessionId() )
  {
    v32 = (__int64)NtCurrentPeb()->SharedData + 555;
    MappingSize = v49;
  }
  if ( (*(_BYTE *)v32 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      MappingSize = v49;
    }
    LdrpTraceLoadMUIDll(&v74, *(unsigned __int8 *)v12);
  }
  return (unsigned int)MappingSize;
}
