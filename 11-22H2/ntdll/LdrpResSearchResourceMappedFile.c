/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x18000555C
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x1800077D0 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrIsResItemExist @ 0x18000441C (LdrIsResItemExist.c)
 *     LdrpResGetResourceDirectory @ 0x180005C20 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180006034 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x180007264 (LdrResFallbackLangList.c)
 *     LdrResGetRCConfig @ 0x1800077D0 (LdrResGetRCConfig.c)
 *     LdrpIsReparsePoint @ 0x180008270 (LdrpIsReparsePoint.c)
 *     RtlLcidToLocaleName @ 0x180015FA0 (RtlLcidToLocaleName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F930 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x180022810 (LdrpResGetMappingSize.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     LdrpFindMessageInAlternateModule @ 0x180068204 (LdrpFindMessageInAlternateModule.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800906B0 (_wcsicmp.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC0E8 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        __int64 a1,
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
  int v19; // esi
  int v20; // r12d
  bool v21; // r12
  int MappingSize; // esi
  unsigned int i; // ecx
  int v24; // ebx
  unsigned __int16 *v25; // r11
  int v26; // r10d
  __int64 *v27; // rax
  __int64 v28; // rdx
  int v29; // r9d
  int v30; // r8d
  int v31; // ecx
  _QWORD *v32; // rbx
  __int64 v33; // r14
  __int64 result; // rax
  char v35; // al
  bool v36; // zf
  unsigned int *v37; // rcx
  __int16 v38; // cx
  int RCConfig; // eax
  __int64 v40; // r8
  __int64 v41; // rax
  unsigned __int16 v42; // cx
  int AlternateResourceModule; // eax
  __int64 v44; // r9
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // ebx
  __int64 v49; // rax
  unsigned int v50; // r13d
  int v51; // [rsp+70h] [rbp-3D8h]
  char v52; // [rsp+74h] [rbp-3D4h]
  char v53; // [rsp+75h] [rbp-3D3h]
  char v54; // [rsp+76h] [rbp-3D2h]
  unsigned __int16 v55; // [rsp+78h] [rbp-3D0h] BYREF
  unsigned int v56; // [rsp+7Ch] [rbp-3CCh]
  __int64 v57; // [rsp+80h] [rbp-3C8h]
  __int64 v58; // [rsp+88h] [rbp-3C0h] BYREF
  __int64 v59; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v60; // [rsp+98h] [rbp-3B0h]
  _QWORD *v61; // [rsp+A0h] [rbp-3A8h]
  int v62; // [rsp+A8h] [rbp-3A0h]
  _QWORD *v63; // [rsp+B0h] [rbp-398h]
  unsigned int *v64; // [rsp+B8h] [rbp-390h]
  __int64 v65; // [rsp+C0h] [rbp-388h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-380h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-378h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-370h] BYREF
  __int64 *v69; // [rsp+E0h] [rbp-368h]
  __int64 v70; // [rsp+E8h] [rbp-360h] BYREF
  void *v71; // [rsp+F0h] [rbp-358h]
  _QWORD v72[2]; // [rsp+F8h] [rbp-350h] BYREF
  __int64 v73; // [rsp+108h] [rbp-340h] BYREF
  __int64 v74; // [rsp+110h] [rbp-338h] BYREF
  _WORD v75[4]; // [rsp+118h] [rbp-330h] BYREF
  _WORD *v76; // [rsp+120h] [rbp-328h]
  int v77; // [rsp+128h] [rbp-320h] BYREF
  const wchar_t *v78; // [rsp+130h] [rbp-318h]
  _WORD v79[2]; // [rsp+140h] [rbp-308h] BYREF
  _WORD v80[262]; // [rsp+144h] [rbp-304h]
  _WORD Src[88]; // [rsp+350h] [rbp-F8h] BYREF

  v61 = (_QWORD *)a4;
  v10 = a3;
  v60 = a2;
  v57 = a1;
  v69 = a7;
  v63 = a6;
  v71 = a8;
  v64 = a9;
  v59 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v52 = 0;
  v62 = a3 & 0x40;
  v53 = 0;
  v54 = 0;
  LODWORD(v72[0]) = 4980810;
  v72[1] = L"LdrpResSearchResourceMappedFile Enter";
  v77 = 4849736;
  v78 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v46 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v46 = 2147353476LL;
    LdrpTraceLoadMUIDll(v72, *(unsigned __int8 *)v46);
  }
  else
  {
    v12 = 2147353476LL;
  }
  LOWORD(v56) = 0;
  v13 = v10 & 0x80;
  v14 = a5;
  if ( a5 == 3 )
  {
    LOWORD(v56) = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v36 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v35 = 1, !v36) )
    {
      v35 = 0;
    }
    v52 = v35;
  }
  v15 = v10 & 0x80;
  if ( (v10 & 0x10) == 0 )
  {
    v15 = v10 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v38 = *((_WORD *)v61 + 8);
      else
        v38 = 0;
      if ( (v10 & 0x1000000) == 0
        && (((*v61 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v52
         || (~(_BYTE)v10 & 8) == 0
         || (v38 & 0xF3FF) != 0
         || v38 == 3072) )
      {
        RCConfig = LdrResGetRCConfig(v57, v60, 0, v10, 1);
        MappingSize = RCConfig;
        v51 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v15 = v13 | LdrIsResItemExist(v57, v61, v40, v10);
        }
        else
        {
          if ( RCConfig != -1073741686 )
          {
LABEL_39:
            v33 = 2147353477LL;
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
    v51 = -1073741686;
    goto LABEL_39;
  }
  v16 = (~v15 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v17 = (~v15 & 0x20000) != 0;
  v18 = v16 && v17;
  v79[0] = 1;
  v80[0] = 0;
  if ( (!v16 || !v17) && v14 != 3 || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    v19 = v57;
    v20 = v60;
  }
  else
  {
    if ( (v10 & 4) != 0 )
      v15 |= 4u;
    v20 = v60;
    v19 = v57;
    result = LdrResFallbackLangList(v57, v60, (unsigned __int16)v56, v15, (__int64)v79);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v15 & 0x40000) != 0 || (v15 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v19, v20, v10, (unsigned int)&v67, (__int64)&v65);
    if ( (int)result < 0 )
      return result;
  }
  while ( 2 )
  {
    v21 = 0;
    if ( (v15 & 0x20000) == 0 )
      v21 = v18;
    MappingSize = 0;
    v51 = 0;
    v58 = 0LL;
    v55 = 0;
    for ( i = 0; ; i = v56 + 1 )
    {
      v56 = i;
      if ( i >= v79[0] )
        goto LABEL_35;
      if ( !v21 )
        break;
      v59 = 0LL;
      v58 = 0LL;
      v41 = i;
      v42 = v80[4 * i];
      if ( !v42 )
      {
        if ( *(_DWORD *)&v80[4 * v41 + 2] == 2 )
          continue;
LABEL_83:
        MappingSize = -1073741811;
LABEL_84:
        v51 = MappingSize;
        continue;
      }
      if ( *(_DWORD *)&v80[4 * v41 + 2] == 10 )
        goto LABEL_83;
      v55 = v42;
      v24 = v57;
      AlternateResourceModule = LdrLoadAlternateResourceModuleEx(
                                  v57,
                                  v42,
                                  (unsigned int)&v59,
                                  (unsigned int)&v58,
                                  v15 | 0x1000u);
      MappingSize = AlternateResourceModule;
      v51 = AlternateResourceModule;
      if ( AlternateResourceModule < 0 )
      {
        if ( AlternateResourceModule == -1073741772 || AlternateResourceModule == -1073741766 )
        {
          MappingSize = -1073020927;
          goto LABEL_84;
        }
      }
      else
      {
        v53 = 1;
        v45 = v58;
        if ( !v58 )
        {
          LOBYTE(v44) = 1;
          MappingSize = LdrpResGetMappingSize(v59, &v58, 512LL, v44);
          v51 = MappingSize;
          v45 = v58;
        }
        if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
          goto LABEL_35;
        MappingSize = LdrpResGetResourceDirectory(v59, v45, v10, (unsigned int)&v68, (__int64)&v66);
        v51 = MappingSize;
        if ( MappingSize >= 0 )
          goto LABEL_18;
      }
LABEL_123:
      ;
    }
    v24 = v57;
LABEL_18:
    v70 = 0LL;
    v25 = &v55;
    if ( v21 )
      v25 = 0LL;
    v26 = v10;
    if ( v21 )
      v26 = v10 | 0x20;
    v27 = &v70;
    if ( v69 )
      v27 = v69;
    v28 = v65;
    if ( v21 )
      v28 = v66;
    v29 = v67;
    if ( v21 )
      v29 = v68;
    v30 = v60;
    if ( v21 )
      v30 = v58;
    v31 = v24;
    if ( v21 )
      v31 = v59;
    v32 = v61;
    MappingSize = LdrpResSearchResourceInsideDirectory(
                    v31,
                    0,
                    v30,
                    v29,
                    v28,
                    0LL,
                    (__int64)v61,
                    a5,
                    (__int64)v79,
                    (__int64)v63,
                    (__int64)v27,
                    v26,
                    (__int64)v25);
    v51 = MappingSize;
    if ( v62 && (~v15 & 0x40000) != 0 )
    {
      if ( MappingSize < 0 )
        goto LABEL_34;
      if ( v63 && v21 )
      {
        if ( v69 )
          v47 = *v69;
        else
          LODWORD(v47) = v70;
        MappingSize = LdrpFindMessageInAlternateModule(v59, *v63, v47, *((_DWORD *)v32 + 6), 1);
        v51 = MappingSize;
        if ( MappingSize < 0 )
        {
          *v63 = 0LL;
          if ( MappingSize == -1073741701 )
            goto LABEL_38;
        }
      }
    }
    if ( MappingSize < 0 )
    {
LABEL_34:
      if ( !v21 )
        goto LABEL_35;
      v48 = v58;
      v72[0] = v59;
      if ( (int)LdrResGetRCConfig(v57, v60, (unsigned int)&v74, 4096, 1) >= 0
        && (int)LdrResGetRCConfig(v72[0], v48, (unsigned int)&v73, 4096, 0) >= 0 )
      {
        v49 = *(_QWORD *)(v74 + 28) - *(_QWORD *)(v73 + 28);
        if ( !v49 )
          v49 = *(_QWORD *)(v74 + 36) - *(_QWORD *)(v73 + 36);
        if ( !v49 )
          goto LABEL_35;
      }
      goto LABEL_123;
    }
    v37 = v64;
    if ( !v64 )
      goto LABEL_35;
    if ( v55 )
    {
      v76 = Src;
      v75[1] = 172;
      MappingSize = RtlLcidToLocaleName(v55, v75, 2LL, 0LL);
      v51 = MappingSize;
      if ( MappingSize >= 0 )
      {
        v50 = v75[0] >> 1;
        v37 = v64;
        goto LABEL_128;
      }
      goto LABEL_38;
    }
    Src[0] = 0;
    v50 = 0;
LABEL_128:
    if ( v50 < *v37 && v71 )
    {
      memmove(v71, Src, 2LL * v50);
      *v64 = v50 + 1;
      *((_WORD *)v71 + v50) = 0;
LABEL_35:
      v18 = v21;
      if ( MappingSize < 0 )
      {
        if ( v21 )
        {
          if ( v54 || v53 || (int)LdrpIsReparsePoint(v57) < 0 )
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
            v54 = 1;
          }
          v18 = v21;
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
  *v37 = v50 + 1;
  MappingSize = -1073741789;
  v51 = -1073741789;
  v12 = 2147353476LL;
  v33 = 2147353477LL;
LABEL_40:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v33 = (__int64)NtCurrentPeb()->SharedData + 555;
    MappingSize = v51;
  }
  if ( (*(_BYTE *)v33 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      MappingSize = v51;
    }
    LdrpTraceLoadMUIDll(&v77, *(unsigned __int8 *)v12);
  }
  return (unsigned int)MappingSize;
}
