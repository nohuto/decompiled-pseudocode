/*
 * XREFs of LdrpSearchResourceSection_U @ 0x180027170
 * Callers:
 *     RtlLoadString @ 0x180003070 (RtlLoadString.c)
 *     LdrpGetRcConfig @ 0x180008148 (LdrpGetRcConfig.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180008450 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F218 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 *     LdrFindResource_U @ 0x1800298F0 (LdrFindResource_U.c)
 *     RtlFindMessage @ 0x18002ABC0 (RtlFindMessage.c)
 *     LdrFindResourceEx_U @ 0x180082A50 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800ECC00 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180008148 (LdrpGetRcConfig.c)
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001EA5C (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpSetThreadPreferredLangList @ 0x18001F014 (LdrpSetThreadPreferredLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F218 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResGetMappingSize @ 0x180022630 (LdrpResGetMappingSize.c)
 *     LdrpGetFromMUIMemCache @ 0x180022F48 (LdrpGetFromMUIMemCache.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023940 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 *     RtlSectionTableFromVirtualAddress @ 0x180028C60 (RtlSectionTableFromVirtualAddress.c)
 *     LdrRscIsTypeExist @ 0x180029080 (LdrRscIsTypeExist.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x18002A644 (RtlpImageDirectoryEntryToData64.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180030F14 (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     LdrpGetParentLangId @ 0x18008CF20 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _wcsicmp @ 0x180090EB0 (_wcsicmp.c)
 *     wcsncmp @ 0x1800952B0 (wcsncmp.c)
 *     NtQueryDefaultLocale @ 0x1800A1150 (NtQueryDefaultLocale.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // r12d
  __int64 *v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // ecx
  char v10; // bl
  unsigned __int16 v11; // di
  unsigned __int64 v12; // rcx
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // rax
  bool v19; // bl
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // r9
  wchar_t v24; // ax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r9
  __int64 CurrentLocale_low; // r8
  unsigned int v31; // esi
  int v32; // eax
  int v33; // edx
  __int64 v34; // r14
  unsigned int v35; // ecx
  unsigned __int64 v36; // rax
  int v37; // ecx
  int *v38; // rsi
  __int64 v39; // r10
  _DWORD *v40; // r11
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // r13
  unsigned int *v44; // rax
  unsigned __int16 v45; // bx
  __int64 v46; // rax
  char v47; // r14
  unsigned int *v48; // r12
  bool v49; // dl
  int v50; // eax
  int v51; // ecx
  char v52; // al
  __int64 v53; // r12
  bool v54; // dl
  char v55; // bl
  int v56; // eax
  char *v57; // rdx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rdi
  unsigned __int64 *v60; // rbx
  unsigned int v61; // eax
  unsigned int v62; // edi
  __int64 *v63; // r15
  __int64 *v64; // r9
  unsigned int v65; // ebx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r9
  unsigned int v70; // eax
  __int64 v71; // rcx
  int v72; // ecx
  __int64 v73; // r14
  unsigned __int16 *v74; // r14
  unsigned int v75; // ecx
  wchar_t *v76; // rdi
  unsigned int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // ecx
  __int64 v81; // r9
  unsigned __int16 *v82; // r9
  unsigned int v83; // ecx
  __int64 v84; // rdx
  unsigned int v85; // ebx
  __int64 Heap; // rax
  unsigned int v87; // r9d
  int v88; // eax
  unsigned int v89; // esi
  unsigned int v90; // r8d
  __int64 *v91; // rdi
  unsigned __int64 *v92; // rbx
  struct _TEB *v93; // rax
  __int64 v94; // r9
  unsigned int ResourceFromAlternativeModule; // eax
  int v96; // eax
  int v97; // r9d
  int ParentLangId; // eax
  _DWORD *RcConfig; // rax
  unsigned int v100; // eax
  _WORD v101[2]; // [rsp+40h] [rbp-1A8h] BYREF
  char v102; // [rsp+44h] [rbp-1A4h]
  unsigned int v103; // [rsp+48h] [rbp-1A0h]
  unsigned int v104; // [rsp+4Ch] [rbp-19Ch] BYREF
  bool v105; // [rsp+50h] [rbp-198h]
  int v106; // [rsp+54h] [rbp-194h]
  unsigned __int16 v107; // [rsp+58h] [rbp-190h]
  int v108; // [rsp+60h] [rbp-188h]
  unsigned int v109; // [rsp+68h] [rbp-180h]
  __int64 v110; // [rsp+70h] [rbp-178h] BYREF
  char v111; // [rsp+78h] [rbp-170h]
  unsigned __int16 v112; // [rsp+80h] [rbp-168h]
  int v113; // [rsp+88h] [rbp-160h]
  unsigned __int64 *v114; // [rsp+90h] [rbp-158h]
  unsigned __int64 v115; // [rsp+98h] [rbp-150h] BYREF
  _DWORD *v116; // [rsp+A0h] [rbp-148h] BYREF
  int v117; // [rsp+A8h] [rbp-140h]
  __int64 *v118; // [rsp+B0h] [rbp-138h]
  unsigned __int64 v119; // [rsp+B8h] [rbp-130h] BYREF
  wchar_t *String1; // [rsp+C0h] [rbp-128h] BYREF
  bool v121; // [rsp+C8h] [rbp-120h] BYREF
  unsigned int v122; // [rsp+CCh] [rbp-11Ch]
  int v123; // [rsp+D0h] [rbp-118h] BYREF
  int v124; // [rsp+D4h] [rbp-114h] BYREF
  __int64 v125; // [rsp+D8h] [rbp-110h] BYREF
  __int64 v126; // [rsp+E0h] [rbp-108h]
  unsigned __int64 v127; // [rsp+E8h] [rbp-100h]
  unsigned __int64 v128; // [rsp+F0h] [rbp-F8h]
  int v129; // [rsp+F8h] [rbp-F0h]
  __int64 *v130; // [rsp+100h] [rbp-E8h]
  unsigned __int64 v131; // [rsp+108h] [rbp-E0h]
  unsigned int v132; // [rsp+110h] [rbp-D8h]
  int v133; // [rsp+114h] [rbp-D4h] BYREF
  unsigned __int64 v134; // [rsp+118h] [rbp-D0h]
  unsigned int *v135; // [rsp+120h] [rbp-C8h]
  unsigned int *v136; // [rsp+128h] [rbp-C0h]
  unsigned __int64 v137; // [rsp+130h] [rbp-B8h]
  unsigned __int16 *v138; // [rsp+138h] [rbp-B0h]
  unsigned __int64 v139; // [rsp+140h] [rbp-A8h]
  unsigned __int64 v140; // [rsp+148h] [rbp-A0h]
  int *v141; // [rsp+150h] [rbp-98h]
  unsigned int *v142; // [rsp+158h] [rbp-90h]
  __int64 *v143; // [rsp+160h] [rbp-88h]
  __int64 v144; // [rsp+168h] [rbp-80h]
  __int64 v145; // [rsp+170h] [rbp-78h] BYREF
  __int64 v146; // [rsp+178h] [rbp-70h]
  __int64 v147; // [rsp+180h] [rbp-68h]
  __int64 v148; // [rsp+188h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+190h] [rbp-58h] BYREF
  __int64 v150; // [rsp+1A0h] [rbp-48h]

  v103 = a4;
  v5 = a3;
  v132 = a3;
  v6 = a2;
  v130 = a2;
  v7 = a1;
  v126 = a1;
  v108 = a4;
  v114 = a5;
  v118 = a2;
  v105 = 0;
  v8 = 0LL;
  v125 = 0LL;
  v122 = 0;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v9 = 3;
  if ( a3 != 4 )
    v9 = a3;
  v109 = v9;
  v117 = v9;
  v10 = ~(_BYTE)a4;
  if ( (~(_BYTE)a4 & 0x10) == 0 || (unsigned int)(v9 - 1) > 2 )
    goto LABEL_35;
  if ( v9 == 3 )
    v11 = *((_WORD *)a2 + 8);
  else
    v11 = 0;
  v107 = v11;
  v12 = *a2;
  if ( ((*a2 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v12 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v12, L"MUI") )
      goto LABEL_13;
    a4 = v103;
  }
  if ( (v10 & 8) != 0 && (v11 & 0xF3FF) == 0 && v11 != 3072 )
  {
    v103 = a4 | 0x10;
    v108 = a4 | 0x10;
    goto LABEL_35;
  }
LABEL_13:
  v104 = 0;
  LODWORD(v115) = 0;
  v13 = LdrpGetFromMUIMemCache(v7, 0, 0LL, 8);
  v14 = v13;
  v116 = v13;
  if ( v13 == (_DWORD *)-1LL )
    goto LABEL_245;
  if ( !v13 )
  {
    *(_QWORD *)&DestinationString.Length = L"MUI";
    DestinationString.Buffer = (wchar_t *)1;
    v150 = 0LL;
    v96 = LdrpSearchResourceSection_U(v7, (unsigned int)&DestinationString, 3, 33554480, (__int64)&String1);
    v129 = v96;
    if ( v96 < 0 )
    {
      v14 = 0LL;
      v116 = 0LL;
    }
    else
    {
      v96 = LdrpAccessResourceDataNoMultipleLanguage(v7, (unsigned int *)String1, (unsigned __int64 *)&v116, &v115);
      v129 = v96;
      if ( v96 < 0 )
      {
        v14 = 0LL;
        v116 = 0LL;
      }
      else
      {
        v14 = v116;
        if ( *v116 == -20054323 )
        {
          LODWORD(v115) = 0;
        }
        else
        {
          v96 = -1073741701;
          v129 = -1073741701;
          v14 = 0LL;
          v116 = 0LL;
        }
      }
    }
    if ( v14 )
      v97 = (int)v14;
    else
      v97 = -1;
    LdrpSetAlternateResourceModuleHandle(v7, 0, 0, v97, 0, 2, v96, 0LL);
  }
  if ( !v14 )
  {
LABEL_245:
    v15 = 0x80000;
    goto LABEL_21;
  }
  if ( (int)LdrRscIsTypeExist(v14, *v6, v103, &v104) < 0 )
  {
    v15 = 393216;
    goto LABEL_21;
  }
  v15 = v104;
  if ( (v14[5] & 0x100) != 0 )
  {
    v15 = v104 | 0x100000;
    v104 |= 0x100000u;
  }
  if ( (v14[4] & 0x10) != 0 )
  {
    v15 |= 0x200000u;
LABEL_21:
    v104 = v15;
  }
  v16 = v15 | v103;
  v103 = v16;
  v108 = v16;
  if ( (v16 & 0x40000) != 0 )
  {
    result = 3221225610LL;
    v106 = -1073741686;
    if ( (v16 & 0x20000) == 0 )
    {
      v145 = *v6;
      if ( v109 < 2 )
        v18 = 0LL;
      else
        v18 = v6[1];
      v146 = v18;
      if ( v109 == 3 )
        v8 = v6[2];
      v147 = v8;
      if ( v5 == 4 )
        v148 = v6[3];
      result = LdrpLoadResourceFromAlternativeModule(v7, (__int64)&v145, v5, v16, v114);
      v106 = result;
    }
    return result;
  }
LABEL_35:
  v19 = 1;
  v111 = 1;
  v20 = v7;
  v140 = v7;
  String1 = 0LL;
  v21 = 0LL;
  v119 = 0LL;
  if ( (v7 & 3) != 0 )
  {
    v19 = (v7 & 1) == 0;
    v111 = v19;
    v20 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
    v140 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v22 = RtlImageNtHeaderEx(1, v20, 0LL, &String1);
  if ( String1 )
  {
    v24 = String1[12];
    if ( v24 == 267 )
    {
      if ( *((_DWORD *)String1 + 29) > 2u )
      {
        v25 = *((unsigned int *)String1 + 34);
        if ( (_DWORD)v25 )
        {
          v124 = *((_DWORD *)String1 + 35);
          if ( v19 || (unsigned int)v25 < *((_DWORD *)String1 + 21) )
          {
            v21 = v20 + v25;
            v119 = v20 + v25;
            v22 = 0;
          }
          else
          {
            v26 = RtlSectionTableFromVirtualAddress(String1);
            if ( v26 )
              v21 = v27 + v20 + *(unsigned int *)(v26 + 20) - (unsigned __int64)*(unsigned int *)(v26 + 12);
            else
              v21 = 0LL;
            v119 = v21;
            if ( v21 )
              v22 = 0;
            else
              v22 = -1073741811;
          }
        }
        else
        {
          v22 = -1073741822;
        }
        goto LABEL_47;
      }
    }
    else if ( v24 == 523 )
    {
      v22 = RtlpImageDirectoryEntryToData64(v20, v19, 2, (unsigned int)&v124, (__int64)String1, (__int64)&v119);
      v21 = v119;
      goto LABEL_47;
    }
    v22 = -1073741811;
  }
LABEL_47:
  if ( v22 < 0 )
  {
    v21 = 0LL;
    v119 = 0LL;
  }
  v115 = v21;
  if ( !v21 )
    return 3221225609LL;
  LOBYTE(v23) = 1;
  result = LdrpResGetMappingSize(v7, (__int64)&v125, 256LL, v23);
  v106 = result;
  if ( (int)result < 0 )
    return result;
  v131 = v21;
  v110 = 61166LL;
  v113 = 0;
  v29 = 0LL;
  v128 = 0LL;
  v127 = 0LL;
  CurrentLocale_low = 0LL;
  v104 = 0;
  v101[0] = 0;
  v107 = 0;
  v123 = 0;
LABEL_52:
  v31 = -1073741308;
  if ( !v21 )
    goto LABEL_103;
  v32 = v117;
  v28 = (unsigned int)--v117;
  if ( !v32 )
    goto LABEL_103;
  if ( !(_DWORD)v28 && v109 == 3 )
    v127 = v21;
  if ( v127 )
  {
    CurrentLocale_low = 0LL;
    v104 = 0;
    v101[0] = 0;
    v64 = v118;
    v107 = *((_WORD *)v118 + 8);
    v105 = (v107 & 0x3FF) == 0;
    v62 = v109;
LABEL_120:
    v65 = v103;
    while ( 1 )
    {
      v66 = v113++;
      if ( v66 )
      {
        switch ( v66 )
        {
          case 1:
            if ( (~v103 & 0x20000) != 0 && (~v103 & 0x80000) != 0 && (~(_BYTE)v103 & 0x10) != 0 )
            {
              v145 = *v64;
              if ( v62 < 2 )
                v67 = 0LL;
              else
                v67 = v64[1];
              v146 = v67;
              if ( v62 == 3 )
                v68 = v64[2];
              else
                v68 = 0LL;
              v147 = v68;
              if ( v5 == 4 )
                v148 = v64[3];
              result = LdrpLoadResourceFromAlternativeModule(v7, (__int64)&v145, v5, v103, v114);
              v106 = result;
              if ( (int)result >= 0 )
                return result;
            }
            CurrentLocale_low = (unsigned __int16)v110;
            v101[0] = v110;
            v65 = v103;
            goto LABEL_126;
          case 2:
            CurrentLocale_low = v107;
            if ( v105 )
              LOWORD(CurrentLocale_low) = v110;
            goto LABEL_125;
          case 3:
            if ( (v65 & 4) != 0 )
              return 3221225988LL;
            if ( v105 )
              goto LABEL_124;
            ParentLangId = LdrpGetParentLangId((unsigned __int16)CurrentLocale_low, v101, CurrentLocale_low, v64);
            if ( ParentLangId < 0 )
              goto LABEL_147;
            CurrentLocale_low = v101[0];
            v104 = v101[0];
            if ( v101[0] )
              --v113;
            break;
          case 4:
            if ( v105 )
              goto LABEL_124;
            CurrentLocale_low = v107;
            LOWORD(CurrentLocale_low) = v107 & 0x3FF;
            goto LABEL_125;
          case 5:
            if ( v105 )
              goto LABEL_124;
            return 3221225988LL;
          case 6:
            CurrentLocale_low = (unsigned __int16)v110;
            v104 = (unsigned __int16)v110;
            v101[0] = v110;
            if ( (v65 & 0x20) != 0 )
              break;
            v101[0] = 0;
            if ( LdrpSetThreadPreferredLangList() )
            {
              v28 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
              if ( v122 >= (unsigned int)v28 )
              {
                v101[0] = 0;
              }
              else
              {
                v85 = v122;
                GetLCIDFromLangListNodeWithLICCheck(
                  v28,
                  (__int64)NtCurrentTeb()->MergedPrefLanguages,
                  v122,
                  v101,
                  &v121);
                CurrentLocale_low = v101[0];
                v104 = v101[0];
                if ( v101[0] )
                {
                  v122 = v85 + 1;
                  --v113;
                  v65 = v108;
                  v103 = v108;
                  break;
                }
              }
              v65 = v108;
              v103 = v108;
            }
            else
            {
              v101[0] = 0;
            }
            goto LABEL_124;
          case 7:
            if ( (~v103 & 0x80000) != 0
              && (RcConfig = LdrpGetRcConfig(v7, 0x180000000LL, 0, 1)) != 0LL
              && *RcConfig == -20054323
              && (v28 = (unsigned int)RcConfig[31], (_DWORD)v28)
              && (RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + v28)),
                  RtlCultureNameToLCID(&DestinationString.Length, &v124)) )
            {
              CurrentLocale_low = (unsigned __int16)v124;
              v101[0] = v124;
              v65 = v103;
            }
            else
            {
              CurrentLocale_low = (unsigned __int16)v110;
              v101[0] = v110;
              v65 = v103;
            }
            goto LABEL_126;
          case 8:
            CurrentLocale_low = (unsigned __int16)v110;
            v104 = (unsigned __int16)v110;
            v101[0] = v110;
            if ( (~v103 & 0x80000) == 0 )
            {
              if ( NtCurrentTeb() )
              {
                v93 = NtCurrentTeb();
                CurrentLocale_low = LOWORD(v93->CurrentLocale);
                v101[0] = v93->CurrentLocale;
              }
              else
              {
                CurrentLocale_low = v101[0];
              }
              v65 = v108;
              v103 = v108;
              goto LABEL_126;
            }
            v65 = v103;
LABEL_276:
            v65 |= 0x20u;
            v103 = v65;
            v108 = v65;
            break;
          case 9:
            v104 = (unsigned __int16)v110;
            v101[0] = v110;
            LOBYTE(v28) = 1;
            v106 = NtQueryDefaultLocale(v28, &v123, CurrentLocale_low, v64);
            if ( v106 < 0 )
              goto LABEL_230;
            CurrentLocale_low = (unsigned __int16)v123;
            goto LABEL_125;
          case 10:
            v104 = (unsigned __int16)v110;
            v101[0] = v110;
            v106 = NtQueryDefaultLocale(0LL, &v133, CurrentLocale_low, v64);
            if ( v106 < 0 || v133 == v123 )
            {
LABEL_230:
              CurrentLocale_low = v104;
              break;
            }
            CurrentLocale_low = (unsigned __int16)v133;
            goto LABEL_125;
          case 11:
            CurrentLocale_low = 1033LL;
            goto LABEL_125;
          case 12:
            goto LABEL_276;
          default:
            return 3221225988LL;
        }
      }
      else
      {
        if ( v107 )
        {
          if ( (v65 & 0x80000) != 0 )
            CurrentLocale_low = v107;
          else
LABEL_124:
            CurrentLocale_low = (unsigned __int16)v110;
        }
        else
        {
LABEL_147:
          CurrentLocale_low = 0LL;
        }
LABEL_125:
        v101[0] = CurrentLocale_low;
LABEL_126:
        v104 = CurrentLocale_low;
      }
      if ( (~(_BYTE)v65 & 0x20) == 0 || (unsigned __int16)CurrentLocale_low != v110 )
      {
        v110 = (unsigned __int16)CurrentLocale_low;
        v6 = &v110;
        v130 = &v110;
        v143 = &v110;
        v21 = v127;
        v131 = v127;
        break;
      }
      v64 = v118;
    }
  }
  v33 = *(unsigned __int16 *)(v21 + 14);
  v34 = *(unsigned __int16 *)(v21 + 12);
  v35 = v34 + v33;
  if ( (int)v34 + v33 < (unsigned int)v34 )
  {
    v35 = -1;
    result = 3221225621LL;
  }
  else
  {
    result = 0LL;
  }
  v106 = result;
  if ( (int)result < 0 )
    return result;
  v36 = 8LL * v35;
  v139 = v36;
  if ( v36 > 0xFFFFFFFF )
  {
    LODWORD(v36) = -1;
    v37 = -1073741675;
  }
  else
  {
    v37 = 0;
  }
  v106 = v37;
  if ( v37 < 0 )
    return (unsigned int)v37;
  v38 = (int *)(v21 + 16);
  v141 = (int *)(v21 + 16);
  v39 = v126;
  v40 = (_DWORD *)(v126 & 0xFFFFFFFFFFFFFFFCuLL);
  v116 = (_DWORD *)(v126 & 0xFFFFFFFFFFFFFFFCuLL);
  v41 = (v126 & 0xFFFFFFFFFFFFFFFCuLL) + v125;
  if ( v21 + 16 + (unsigned int)v36 > v41 )
    return 3221225595LL;
  v42 = *v6;
  String1 = (wchar_t *)v42;
  v28 = v42 & 0xFFFFFFFFFFFF0000uLL;
  v139 = v42 & 0xFFFFFFFFFFFF0000uLL;
  if ( (v42 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v38 += 2 * v34;
    v141 = v38;
    LOWORD(v34) = v33;
  }
  if ( !(_WORD)v34 )
  {
    v87 = v109;
    if ( v109 - v117 == 1 )
    {
      v88 = -1073741686;
      goto LABEL_206;
    }
    if ( v109 - v117 != 2 )
    {
      if ( v109 - v117 != 3 )
      {
        v89 = -1073741811;
        v106 = -1073741811;
        v90 = v103;
        goto LABEL_207;
      }
      v100 = -1073741308;
LABEL_297:
      v106 = v100;
      return v100;
    }
    v88 = -1073741685;
LABEL_206:
    v106 = v88;
    v89 = v88;
    v90 = v103;
    if ( (v103 & 0x2040000) != 0 )
    {
LABEL_207:
      v91 = v118;
      goto LABEL_208;
    }
    v91 = v118;
    if ( v109 == 3 )
    {
      v145 = *v118;
      v146 = v118[1];
      v147 = v118[2];
      if ( v5 == 4 )
        v148 = v118[3];
      v94 = v103;
      LODWORD(v94) = v103 | 0x1000000;
      v92 = v114;
      ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(v126, (__int64)&v145, v5, v94, v114);
      v39 = v126;
      v87 = v109;
      if ( ResourceFromAlternativeModule != -1073020927 )
      {
        if ( ResourceFromAlternativeModule != -1073020922 )
          v89 = ResourceFromAlternativeModule;
        v106 = v89;
      }
      v90 = v103;
    }
    else
    {
LABEL_208:
      v92 = v114;
    }
    if ( v89 + 1073741686 <= 1
      && (~v90 & 0x20000) != 0
      && (~v90 & 0x80000) != 0
      && (~(_BYTE)v90 & 0x10) != 0
      && v87 == 3 )
    {
      v145 = *v91;
      v146 = v91[1];
      v147 = v91[2];
      if ( v5 == 4 )
        v148 = v91[3];
      v100 = LdrpLoadResourceFromAlternativeModule(v39, (__int64)&v145, v5, v90, v92);
      goto LABEL_297;
    }
    return v89;
  }
  if ( v127 && (v103 & 0x20) != 0 )
  {
    v21 = 0LL;
    v131 = 0LL;
    v110 = (unsigned int)*v38;
    v29 = v115 + (unsigned int)v38[1];
    if ( v29 > v41 )
      return 3221225595LL;
    v128 = v115 + (unsigned int)v38[1];
    v7 = v126;
    v31 = -1073741308;
    CurrentLocale_low = v104;
LABEL_103:
    if ( v29 && (v103 & 2) == 0 )
    {
      v60 = v114;
      *v114 = v29;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v130 = (__int64 *)NtCurrentTeb();
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 24LL);
        v130[770] = Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v7;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v128;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v7;
      }
      v31 = 0;
      v106 = 0;
      v61 = v108;
      v103 = v108;
      v62 = v109;
      goto LABEL_110;
    }
    if ( v21 && (v103 & 2) != 0 )
    {
      v60 = v114;
      *v114 = v21;
      v31 = 0;
      v106 = 0;
      v62 = v109;
      v61 = v103;
LABEL_110:
      v63 = v118;
      if ( (v61 & 0x2040000) == 0 && v31 + 1073741686 <= 1 && v62 == 3 )
      {
        v145 = *v118;
        v146 = v118[1];
        v147 = v118[2];
        if ( v5 == 4 )
          v148 = v118[3];
        v69 = v103;
        LODWORD(v69) = v103 | 0x1000000;
        v70 = LdrpLoadResourceFromAlternativeModule(v7, (__int64)&v145, v5, v69, v60);
        if ( v70 != -1073020927 && v70 != -1073020922 )
        {
          v31 = v70;
          v106 = v70;
        }
      }
      if ( v31 + 1073741686 <= 1
        && (~v103 & 0x20000) != 0
        && (~v103 & 0x80000) != 0
        && (~(_BYTE)v103 & 0x10) != 0
        && v62 == 3 )
      {
        v145 = *v63;
        v146 = v63[1];
        v147 = v63[2];
        if ( v5 == 4 )
          v148 = v63[3];
        v31 = LdrpLoadResourceFromAlternativeModule(v7, (__int64)&v145, v5, v103, v60);
        v106 = v31;
      }
      return v31;
    }
    v62 = v109;
    switch ( v109 - v117 )
    {
      case 3u:
        v106 = -1073741308;
        if ( v127 )
        {
          v128 = 0LL;
          v64 = v118;
          goto LABEL_120;
        }
        break;
      case 1u:
        v31 = -1073741686;
        v106 = -1073741686;
        break;
      case 2u:
        v31 = -1073741685;
        v106 = -1073741685;
        v60 = v114;
        v61 = v103;
        goto LABEL_110;
      default:
        v31 = -1073741811;
        v106 = -1073741811;
        break;
    }
    v60 = v114;
    v61 = v103;
    goto LABEL_110;
  }
  v142 = (unsigned int *)v38;
  v112 = v34;
  v131 = 0LL;
  v128 = 0LL;
  v43 = 0LL;
  v134 = 0LL;
  v29 = 0LL;
  v119 = 0LL;
  v137 = 0LL;
  v44 = (unsigned int *)&v38[2 * (unsigned __int16)v34 - 2];
  v136 = v44;
  v45 = v34;
  while ( 1 )
  {
    if ( v38 > (int *)v44 )
      goto LABEL_99;
    v45 >>= 1;
    if ( !v45 )
    {
      if ( !(_WORD)v34 )
        goto LABEL_99;
      v53 = v125;
      v54 = v39 && v125;
      v55 = 1;
      v102 = 1;
      v56 = *v38;
      if ( v28 )
      {
        if ( v56 >= 0 )
        {
          v28 = 0xFFFFFFFFLL;
        }
        else if ( v54
               && (v71 = (unsigned int)v56, LODWORD(v71) = v56 & 0x7FFFFFFF, v115 + v71 > (unsigned __int64)v40 + v125) )
        {
          v55 = 0;
          v102 = 0;
          v28 = 0xFFFFFFFFLL;
        }
        else
        {
          v72 = *v38;
          v73 = (unsigned int)*v38;
          LODWORD(v73) = v73 & 0x7FFFFFFF;
          v74 = (unsigned __int16 *)(v115 + v73);
          if ( v54
            && ((v138 = (unsigned __int16 *)(2LL * *v74), v75 = v72 & 0x7FFFFFFF, v75 + (unsigned int)v138 < v75)
             || v115 + v75 + (unsigned int)v138 > (unsigned __int64)v40 + v125) )
          {
            v55 = 0;
            v102 = 0;
            v28 = 0xFFFFFFFFLL;
          }
          else
          {
            v76 = String1;
            v77 = wcsncmp(String1, v74 + 1, *v74);
            v28 = v77;
            if ( !v77 )
            {
              v78 = -1LL;
              do
                ++v78;
              while ( v76[v78] );
              if ( v78 != *v74 )
                v28 = 1LL;
            }
            v40 = v116;
            v29 = v119;
          }
        }
      }
      else if ( v56 < 0 )
      {
        v28 = 1LL;
      }
      else
      {
        v28 = (unsigned int)(v42 - v56);
      }
      if ( !v55 )
        return 3221225595LL;
      if ( (_DWORD)v28 )
        goto LABEL_99;
      v28 = (unsigned int)v38[1];
      v57 = (char *)v40 + v53;
      v58 = v28;
      v59 = v115;
      if ( (v28 & 0x80000000) != 0LL )
        goto LABEL_97;
      if ( v115 + v28 > (unsigned __int64)v57 )
        return 3221225595LL;
      v29 = v115 + v28;
      v137 = v115 + v28;
LABEL_99:
      v21 = v43;
      v131 = v43;
      v128 = v29;
      v6 = v130 + 1;
      v130 = v6;
      v143 = v6;
      v5 = v132;
      v7 = v126;
      CurrentLocale_low = v104;
      goto LABEL_52;
    }
    v135 = (unsigned int *)v38;
    v46 = 2LL * v45;
    v47 = v34 & 1;
    v48 = (unsigned int *)(v47 ? &v38[v46] : &v38[v46 - 2]);
    v135 = v48;
    v49 = v39 && v125;
    v102 = 1;
    v50 = *v48;
    if ( v28 )
    {
      if ( v50 >= 0 )
      {
        v51 = -1;
        goto LABEL_78;
      }
      if ( v49 && (v79 = (unsigned int)v50, LODWORD(v79) = v50 & 0x7FFFFFFF, v115 + v79 > (unsigned __int64)v40 + v125) )
      {
        v52 = 0;
        v102 = 0;
        v51 = -1;
      }
      else
      {
        v80 = *v48;
        v81 = *v48;
        LODWORD(v81) = v81 & 0x7FFFFFFF;
        v82 = (unsigned __int16 *)(v115 + v81);
        v138 = v82;
        if ( v49
          && ((v144 = 2LL * *v82, v83 = v80 & 0x7FFFFFFF, v83 + (unsigned int)v144 < v83)
           || v115 + v83 + (unsigned int)v144 > (unsigned __int64)v40 + v125) )
        {
          v52 = 0;
          v102 = 0;
          v51 = -1;
          LODWORD(v42) = (_DWORD)String1;
          v29 = v119;
        }
        else
        {
          v42 = (unsigned __int64)String1;
          v51 = wcsncmp(String1, v82 + 1, *v82);
          if ( v51 )
            goto LABEL_187;
          v84 = -1LL;
          do
            ++v84;
          while ( *(_WORD *)(v42 + 2 * v84) );
          if ( v84 == *v138 )
          {
LABEL_187:
            v39 = v126;
            v40 = v116;
            v29 = v119;
            goto LABEL_78;
          }
          v51 = 1;
          v52 = 1;
          v39 = v126;
          v40 = v116;
          v29 = v119;
        }
      }
    }
    else
    {
      if ( v50 >= 0 )
      {
        v51 = v42 - v50;
LABEL_78:
        v52 = v102;
        goto LABEL_79;
      }
      v51 = 1;
      v52 = 1;
    }
LABEL_79:
    if ( !v52 )
      return 3221225595LL;
    if ( !v51 )
      break;
    if ( v51 >= 0 )
    {
      v38 = (int *)(v48 + 2);
      v142 = v48 + 2;
      v44 = v136;
    }
    else
    {
      v44 = v48 - 2;
      v136 = v48 - 2;
      if ( !v47 )
        --v45;
    }
    LOWORD(v34) = v45;
    v112 = v45;
    v28 = v139;
  }
  v28 = v48[1];
  v57 = (char *)v40 + v125;
  v58 = v28;
  v59 = v115;
  if ( (v28 & 0x80000000) != 0LL )
  {
LABEL_97:
    LODWORD(v58) = v58 & 0x7FFFFFFF;
    if ( v59 + v58 <= (unsigned __int64)v57 )
    {
      v43 = v59 + (v28 & 0xFFFFFFFF7FFFFFFFuLL);
      v134 = v43;
      goto LABEL_99;
    }
    return 3221225595LL;
  }
  if ( v115 + v28 <= (unsigned __int64)v57 )
  {
    v43 = 0LL;
    v134 = 0LL;
    v29 = v115 + v28;
    v137 = v115 + v28;
    goto LABEL_99;
  }
  return 3221225595LL;
}
