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
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r12
  int v16; // ebx
  int v17; // esi
  int v18; // r14d
  bool v19; // dl
  bool v20; // r12
  __int64 v21; // rbx
  int v22; // esi
  bool v23; // cl
  bool v24; // r12
  int MappingSize; // esi
  unsigned int v26; // ecx
  unsigned __int16 *v27; // r11
  int v28; // r10d
  __int64 *v29; // rax
  __int64 v30; // rdx
  int v31; // r9d
  int v32; // r8d
  int v33; // ecx
  unsigned __int64 *v34; // rbx
  __int64 v35; // r14
  __int64 result; // rax
  char v37; // al
  bool v38; // zf
  unsigned int *v39; // rcx
  __int16 v40; // cx
  int RCConfig; // eax
  __int64 v42; // rax
  __int16 v43; // cx
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // ebx
  __int64 v48; // rax
  unsigned int v49; // r13d
  int v50; // [rsp+70h] [rbp-3D8h]
  char v51; // [rsp+74h] [rbp-3D4h]
  char v52; // [rsp+75h] [rbp-3D3h]
  char v53; // [rsp+76h] [rbp-3D2h]
  unsigned __int16 v54; // [rsp+78h] [rbp-3D0h] BYREF
  unsigned __int16 v55; // [rsp+7Ch] [rbp-3CCh]
  __int64 v56; // [rsp+80h] [rbp-3C8h]
  unsigned __int64 v57; // [rsp+88h] [rbp-3C0h] BYREF
  __int64 v58; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v59; // [rsp+98h] [rbp-3B0h]
  unsigned int v60; // [rsp+A0h] [rbp-3A8h]
  unsigned __int64 *v61; // [rsp+A8h] [rbp-3A0h]
  int v62; // [rsp+B0h] [rbp-398h]
  _QWORD *v63; // [rsp+B8h] [rbp-390h]
  unsigned int *v64; // [rsp+C0h] [rbp-388h]
  __int64 v65; // [rsp+C8h] [rbp-380h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-378h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-370h] BYREF
  __int64 v68; // [rsp+E0h] [rbp-368h] BYREF
  __int64 *v69; // [rsp+E8h] [rbp-360h]
  __int64 v70; // [rsp+F0h] [rbp-358h] BYREF
  void *v71; // [rsp+F8h] [rbp-350h]
  _QWORD v72[2]; // [rsp+100h] [rbp-348h] BYREF
  __int64 v73; // [rsp+110h] [rbp-338h] BYREF
  unsigned __int64 v74; // [rsp+118h] [rbp-330h] BYREF
  _WORD v75[4]; // [rsp+120h] [rbp-328h] BYREF
  _WORD *v76; // [rsp+128h] [rbp-320h]
  int v77; // [rsp+130h] [rbp-318h] BYREF
  const wchar_t *v78; // [rsp+138h] [rbp-310h]
  _WORD v79[2]; // [rsp+140h] [rbp-308h] BYREF
  _WORD v80[262]; // [rsp+144h] [rbp-304h]
  _WORD Src[88]; // [rsp+350h] [rbp-F8h] BYREF

  v61 = (unsigned __int64 *)a4;
  v10 = a3;
  v59 = a2;
  v56 = a1;
  v69 = a7;
  v63 = a6;
  v71 = a8;
  v64 = a9;
  v58 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v51 = 0;
  v62 = a3 & 0x40;
  v52 = 0;
  v53 = 0;
  LODWORD(v72[0]) = 4980810;
  v72[1] = L"LdrpResSearchResourceMappedFile Enter";
  v77 = 4849736;
  v78 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v14 = 2147353477LL;
  if ( (*(_BYTE *)v14 & 1) != 0 )
  {
    v15 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v45 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v45 = 2147353476LL;
    LdrpTraceLoadMUIDll(v72, *(unsigned __int8 *)v45);
  }
  else
  {
    v15 = 2147353476LL;
  }
  v55 = 0;
  v16 = v10 & 0x80;
  v17 = a5;
  if ( a5 == 3 )
  {
    v55 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v38 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v37 = 1, !v38) )
    {
      v37 = 0;
    }
    v51 = v37;
  }
  v18 = v10 & 0x80;
  if ( (v10 & 0x10) == 0 )
  {
    v18 = v10 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v40 = *((_WORD *)v61 + 8);
      else
        v40 = 0;
      if ( (v10 & 0x1000000) == 0
        && (((*v61 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v51
         || (~(_BYTE)v10 & 8) == 0
         || (v40 & 0xF3FF) != 0
         || v40 == 3072) )
      {
        RCConfig = LdrResGetRCConfig(v56, v59, 0, v10, 1);
        MappingSize = RCConfig;
        v50 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v18 = v16 | LdrIsResItemExist(v56, v61, v12, v10);
        }
        else
        {
          if ( RCConfig != -1073741686 )
          {
LABEL_37:
            v35 = 2147353477LL;
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
    v50 = -1073741686;
    goto LABEL_37;
  }
  v19 = (~v18 & 0x20000) != 0 && (~v18 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v20 = v19;
  v79[0] = 1;
  v80[0] = 0;
  if ( !v19 && v17 != 3 || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    v21 = v56;
    v22 = v59;
  }
  else
  {
    if ( (v10 & 4) != 0 )
      v18 |= 4u;
    v22 = v59;
    v21 = v56;
    result = LdrResFallbackLangList(v56, v59, v55, v18, (__int64)v79);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v18 & 0x40000) != 0 || (v18 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v21, v22, v10, (unsigned int)&v67, (__int64)&v65);
    if ( (int)result < 0 )
      return result;
  }
  while ( 2 )
  {
    v23 = 0;
    if ( (v18 & 0x20000) == 0 )
      v23 = v20;
    v24 = v23;
    LOBYTE(v55) = v23;
    MappingSize = 0;
    v50 = 0;
    v57 = 0LL;
    v54 = 0;
    v26 = 0;
    while ( 1 )
    {
      v60 = v26;
      if ( v26 >= v79[0] )
        goto LABEL_54;
      if ( !v24 )
        break;
      v58 = 0LL;
      v57 = 0LL;
      v42 = v26;
      v43 = v80[4 * v26];
      if ( !v43 )
      {
        if ( *(_DWORD *)&v80[4 * v42 + 2] == 2 )
          goto LABEL_121;
LABEL_82:
        MappingSize = -1073741811;
LABEL_83:
        v50 = MappingSize;
        goto LABEL_121;
      }
      if ( *(_DWORD *)&v80[4 * v42 + 2] == 10 )
        goto LABEL_82;
      v54 = v43;
      v44 = LdrLoadAlternateResourceModuleEx(v21, v43, &v58, &v57, v18 | 0x1000u);
      MappingSize = v44;
      v50 = v44;
      if ( v44 >= 0 )
      {
        v52 = 1;
        v11 = v57;
        if ( !v57 )
        {
          MappingSize = LdrpResGetMappingSize(v58, &v57, 512, 1);
          v50 = MappingSize;
          v11 = v57;
        }
        if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
          goto LABEL_34;
        MappingSize = LdrpResGetResourceDirectory(v58, v11, v10, (unsigned int)&v68, (__int64)&v66);
        v50 = MappingSize;
        if ( MappingSize < 0 )
          goto LABEL_121;
        break;
      }
      if ( v44 == -1073741772 || v44 == -1073741766 )
      {
        MappingSize = -1073020927;
        goto LABEL_83;
      }
LABEL_121:
      v26 = v60 + 1;
      v21 = v56;
    }
    v70 = 0LL;
    v27 = &v54;
    if ( v24 )
      v27 = 0LL;
    v28 = v10;
    if ( v24 )
      v28 = v10 | 0x20;
    v29 = &v70;
    if ( v69 )
      v29 = v69;
    v30 = v65;
    if ( v24 )
      v30 = v66;
    v31 = v67;
    if ( v24 )
      v31 = v68;
    v32 = v59;
    if ( v24 )
      v32 = v57;
    v33 = v21;
    if ( v24 )
      v33 = v58;
    v34 = v61;
    MappingSize = LdrpResSearchResourceInsideDirectory(
                    v33,
                    0,
                    v32,
                    v31,
                    v30,
                    0LL,
                    (__int64)v61,
                    a5,
                    (__int64)v79,
                    (__int64)v63,
                    (__int64)v29,
                    v28,
                    (__int64)v27);
    v50 = MappingSize;
    if ( v62 && (~v18 & 0x40000) != 0 )
    {
      if ( MappingSize < 0 )
      {
LABEL_33:
        if ( !v24 )
          goto LABEL_34;
        v47 = v57;
        v72[0] = v58;
        if ( (int)LdrResGetRCConfig(v56, v59, (unsigned int)&v74, 4096, 1) >= 0
          && (int)LdrResGetRCConfig(v72[0], v47, (unsigned int)&v73, 4096, 0) >= 0 )
        {
          v11 = v74;
          v48 = *(_QWORD *)(v74 + 28) - *(_QWORD *)(v73 + 28);
          if ( !v48 )
            v48 = *(_QWORD *)(v74 + 36) - *(_QWORD *)(v73 + 36);
          if ( !v48 )
            goto LABEL_54;
        }
        goto LABEL_121;
      }
      if ( v63 && v24 )
      {
        if ( v69 )
          v46 = *v69;
        else
          LODWORD(v46) = v70;
        MappingSize = LdrpFindMessageInAlternateModule(v58, *v63, v46, *((_DWORD *)v34 + 6), 1);
        v50 = MappingSize;
        if ( MappingSize < 0 )
        {
          *v63 = 0LL;
          if ( MappingSize == -1073741701 )
            goto LABEL_36;
        }
      }
    }
    if ( MappingSize < 0 )
      goto LABEL_33;
    v39 = v64;
    if ( !v64 )
      goto LABEL_54;
    if ( v54 )
    {
      v76 = Src;
      v75[1] = 172;
      MappingSize = RtlLcidToLocaleName(v54, (__int64)v75, 2, 0);
      v50 = MappingSize;
      if ( MappingSize >= 0 )
      {
        v49 = v75[0] >> 1;
        v39 = v64;
        goto LABEL_126;
      }
      goto LABEL_36;
    }
    Src[0] = 0;
    v49 = 0;
LABEL_126:
    if ( v49 < *v39 && v71 )
    {
      memmove(v71, Src, 2LL * v49);
      *v64 = v49 + 1;
      *((_WORD *)v71 + v49) = 0;
LABEL_54:
      if ( MappingSize < 0 )
      {
LABEL_34:
        LOBYTE(v11) = v55;
        v20 = v55;
        if ( (_BYTE)v55 )
        {
          if ( v53 || v52 || (int)LdrpIsReparsePoint(v56, v11, v12, v13) < 0 )
          {
            if ( (v18 & 0x40000) != 0 )
              v20 = 0;
            else
              v18 |= 0x20000u;
          }
          else
          {
            v18 |= 0x400000u;
            v53 = 1;
          }
        }
        v21 = v56;
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
  *v39 = v49 + 1;
  MappingSize = -1073741789;
  v50 = -1073741789;
  v15 = 2147353476LL;
  v35 = 2147353477LL;
LABEL_38:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v35 = (__int64)NtCurrentPeb()->SharedData + 555;
    MappingSize = v50;
  }
  if ( (*(_BYTE *)v35 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
      MappingSize = v50;
    }
    LdrpTraceLoadMUIDll(&v77, *(unsigned __int8 *)v15);
  }
  return (unsigned int)MappingSize;
}
