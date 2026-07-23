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
        unsigned __int64 BaseOfImage,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5)
{
  DWORD v5; // r12d
  __int64 *v6; // r13
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  int v9; // ecx
  char v10; // bl
  unsigned __int16 v11; // di
  unsigned __int64 v12; // rcx
  char *v13; // rax
  char *v14; // rbx
  int v15; // eax
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // rax
  bool v19; // bl
  void *v20; // rsi
  __int64 v21; // rdi
  NTSTATUS v22; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // r8
  PIMAGE_SECTION_HEADER v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // r9
  __int64 CurrentLocale_low; // r8
  unsigned int v29; // esi
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  __int64 v33; // r14
  unsigned int v34; // ecx
  unsigned __int64 v35; // rax
  int v36; // ecx
  int *v37; // rsi
  void *v38; // r10
  char *v39; // r11
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rcx
  __int64 v43; // r13
  unsigned int *v44; // rax
  unsigned __int16 v45; // bx
  __int64 v46; // rax
  char v47; // r14
  unsigned int *v48; // r12
  bool v49; // dl
  int v50; // eax
  int v51; // ecx
  char v52; // al
  unsigned __int64 v53; // r12
  bool v54; // dl
  char v55; // bl
  int v56; // eax
  int v57; // ecx
  __int64 v58; // rcx
  char *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdi
  _QWORD *v62; // rbx
  unsigned int v63; // eax
  unsigned int v64; // edi
  __int64 *v65; // r15
  __int64 *v66; // r9
  unsigned int v67; // ebx
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // r9
  unsigned __int32 v72; // eax
  __int64 v73; // rcx
  int v74; // ecx
  __int64 v75; // r14
  unsigned __int16 *v76; // r14
  unsigned int v77; // ecx
  PIMAGE_NT_HEADERS v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // ecx
  __int64 v82; // r9
  unsigned __int16 *v83; // r9
  unsigned int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned int v87; // ebx
  PVOID Heap; // rax
  unsigned int v89; // r9d
  int v90; // eax
  unsigned int v91; // esi
  unsigned int v92; // r8d
  __int64 *v93; // rdi
  _QWORD *v94; // rbx
  struct _TEB *v95; // rax
  __int64 v96; // r9
  unsigned int ResourceFromAlternativeModule; // eax
  int v98; // eax
  int v99; // r9d
  int ParentLangId; // eax
  _DWORD *RcConfig; // rax
  __int64 v102; // rcx
  unsigned int v103; // eax
  _WORD v104[2]; // [rsp+40h] [rbp-1A8h] BYREF
  char v105; // [rsp+44h] [rbp-1A4h]
  unsigned int v106; // [rsp+48h] [rbp-1A0h]
  unsigned int v107; // [rsp+4Ch] [rbp-19Ch] BYREF
  bool v108; // [rsp+50h] [rbp-198h]
  NTSTATUS v109; // [rsp+54h] [rbp-194h]
  unsigned __int16 v110; // [rsp+58h] [rbp-190h]
  int v111; // [rsp+60h] [rbp-188h]
  unsigned int v112; // [rsp+68h] [rbp-180h]
  __int64 v113; // [rsp+70h] [rbp-178h] BYREF
  char v114; // [rsp+78h] [rbp-170h]
  unsigned __int16 v115; // [rsp+80h] [rbp-168h]
  int v116; // [rsp+88h] [rbp-160h]
  _QWORD *v117; // [rsp+90h] [rbp-158h]
  __int64 v118; // [rsp+98h] [rbp-150h] BYREF
  char *v119; // [rsp+A0h] [rbp-148h] BYREF
  int v120; // [rsp+A8h] [rbp-140h]
  __int64 *v121; // [rsp+B0h] [rbp-138h]
  __int64 v122; // [rsp+B8h] [rbp-130h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+C0h] [rbp-128h] BYREF
  bool v124; // [rsp+C8h] [rbp-120h] BYREF
  unsigned int v125; // [rsp+CCh] [rbp-11Ch]
  DWORD DefaultLocaleId; // [rsp+D0h] [rbp-118h] BYREF
  DWORD Lcid; // [rsp+D4h] [rbp-114h] BYREF
  unsigned __int64 v128; // [rsp+D8h] [rbp-110h] BYREF
  unsigned __int64 v129; // [rsp+E0h] [rbp-108h]
  __int64 v130; // [rsp+E8h] [rbp-100h]
  unsigned __int64 v131; // [rsp+F0h] [rbp-F8h]
  int v132; // [rsp+F8h] [rbp-F0h]
  __int64 *v133; // [rsp+100h] [rbp-E8h]
  __int64 v134; // [rsp+108h] [rbp-E0h]
  DWORD v135; // [rsp+110h] [rbp-D8h]
  DWORD v136; // [rsp+114h] [rbp-D4h] BYREF
  __int64 v137; // [rsp+118h] [rbp-D0h]
  unsigned int *v138; // [rsp+120h] [rbp-C8h]
  unsigned int *v139; // [rsp+128h] [rbp-C0h]
  __int64 v140; // [rsp+130h] [rbp-B8h]
  unsigned __int16 *v141; // [rsp+138h] [rbp-B0h]
  unsigned __int64 v142; // [rsp+140h] [rbp-A8h]
  unsigned __int64 v143; // [rsp+148h] [rbp-A0h]
  int *v144; // [rsp+150h] [rbp-98h]
  unsigned int *v145; // [rsp+158h] [rbp-90h]
  __int64 *v146; // [rsp+160h] [rbp-88h]
  __int64 v147; // [rsp+168h] [rbp-80h]
  __int64 v148; // [rsp+170h] [rbp-78h] BYREF
  __int64 v149; // [rsp+178h] [rbp-70h]
  __int64 v150; // [rsp+180h] [rbp-68h]
  __int64 v151; // [rsp+188h] [rbp-60h]
  _UNICODE_STRING DestinationString; // [rsp+190h] [rbp-58h] BYREF
  __int64 v153; // [rsp+1A0h] [rbp-48h]

  v106 = a4;
  v5 = a3;
  v135 = a3;
  v6 = a2;
  v133 = a2;
  v7 = BaseOfImage;
  v129 = BaseOfImage;
  v111 = a4;
  v117 = a5;
  v121 = a2;
  v108 = 0;
  v8 = 0LL;
  v128 = 0LL;
  v125 = 0;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v9 = 3;
  if ( a3 != 4 )
    v9 = a3;
  v112 = v9;
  v120 = v9;
  v10 = ~(_BYTE)a4;
  if ( (~(_BYTE)a4 & 0x10) == 0 || (unsigned int)(v9 - 1) > 2 )
    goto LABEL_35;
  if ( v9 == 3 )
    v11 = *((_WORD *)a2 + 8);
  else
    v11 = 0;
  v110 = v11;
  v12 = *a2;
  if ( ((*a2 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v12 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v12, L"MUI") )
      goto LABEL_13;
    a4 = v106;
  }
  if ( (v10 & 8) != 0 && (v11 & 0xF3FF) == 0 && v11 != 3072 )
  {
    v106 = a4 | 0x10;
    v111 = a4 | 0x10;
    goto LABEL_35;
  }
LABEL_13:
  v107 = 0;
  LODWORD(v118) = 0;
  v13 = (char *)LdrpGetFromMUIMemCache(v7, 0, 0LL, 8);
  v14 = v13;
  v119 = v13;
  if ( v13 == (char *)-1LL )
    goto LABEL_245;
  if ( !v13 )
  {
    *(_QWORD *)&DestinationString.Length = L"MUI";
    DestinationString.Buffer = (wchar_t *)1;
    v153 = 0LL;
    v98 = LdrpSearchResourceSection_U((PVOID)v7, (__int64)&OutHeaders);
    v132 = v98;
    if ( v98 < 0 )
    {
      v14 = 0LL;
      v119 = 0LL;
    }
    else
    {
      v98 = LdrpAccessResourceDataNoMultipleLanguage(v7, &OutHeaders->Signature, &v119, &v118);
      v132 = v98;
      if ( v98 < 0 )
      {
        v14 = 0LL;
        v119 = 0LL;
      }
      else
      {
        v14 = v119;
        if ( *(_DWORD *)v119 == -20054323 )
        {
          LODWORD(v118) = 0;
        }
        else
        {
          v98 = -1073741701;
          v132 = -1073741701;
          v14 = 0LL;
          v119 = 0LL;
        }
      }
    }
    if ( v14 )
      v99 = (int)v14;
    else
      v99 = -1;
    LdrpSetAlternateResourceModuleHandle(v7, 0, 0, v99, 0, 2, v98, 0LL);
  }
  if ( !v14 )
  {
LABEL_245:
    v15 = 0x80000;
    goto LABEL_21;
  }
  if ( (int)LdrRscIsTypeExist(v14, *v6, v106, &v107) < 0 )
  {
    v15 = 393216;
    goto LABEL_21;
  }
  v15 = v107;
  if ( (*((_DWORD *)v14 + 5) & 0x100) != 0 )
  {
    v15 = v107 | 0x100000;
    v107 |= 0x100000u;
  }
  if ( (v14[16] & 0x10) != 0 )
  {
    v15 |= 0x200000u;
LABEL_21:
    v107 = v15;
  }
  v16 = v15 | v106;
  v106 = v16;
  v111 = v16;
  if ( (v16 & 0x40000) != 0 )
  {
    result = 3221225610LL;
    v109 = -1073741686;
    if ( (v16 & 0x20000) == 0 )
    {
      v148 = *v6;
      if ( v112 < 2 )
        v18 = 0LL;
      else
        v18 = v6[1];
      v149 = v18;
      if ( v112 == 3 )
        v8 = v6[2];
      v150 = v8;
      if ( v5 == 4 )
        v151 = v6[3];
      result = LdrpLoadResourceFromAlternativeModule((void *)v7, (__int64)&v148, v5, v16, (__int64)v117);
      v109 = result;
    }
    return result;
  }
LABEL_35:
  v19 = 1;
  v114 = 1;
  v20 = (void *)v7;
  v143 = v7;
  OutHeaders = 0LL;
  v21 = 0LL;
  v122 = 0LL;
  if ( (v7 & 3) != 0 )
  {
    v19 = (v7 & 1) == 0;
    v114 = v19;
    v20 = (void *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
    v143 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v22 = RtlImageNtHeaderEx(1u, v20, 0LL, &OutHeaders);
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
          Lcid = OutHeaders->OptionalHeader.DataDirectory[0].Size;
          if ( v19 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
          {
            v21 = (__int64)v20 + VirtualAddress;
            v122 = (__int64)v20 + VirtualAddress;
            v22 = 0;
          }
          else
          {
            v25 = RtlSectionTableFromVirtualAddress(OutHeaders, (PVOID)0x10B, VirtualAddress);
            if ( v25 )
              v21 = (__int64)v20 + v25->PointerToRawData - (unsigned __int64)v25->VirtualAddress + v26;
            else
              v21 = 0LL;
            v122 = v21;
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
    else if ( Magic == 523 )
    {
      v22 = RtlpImageDirectoryEntryToData64(v20, OutHeaders, (__int64)&v122);
      v21 = v122;
      goto LABEL_47;
    }
    v22 = -1073741811;
  }
LABEL_47:
  if ( v22 < 0 )
  {
    v21 = 0LL;
    v122 = 0LL;
  }
  v118 = v21;
  if ( !v21 )
    return 3221225609LL;
  result = LdrpResGetMappingSize(v7, &v128, 256, 1);
  v109 = result;
  if ( (int)result < 0 )
    return result;
  v134 = v21;
  v113 = 61166LL;
  v116 = 0;
  v27 = 0LL;
  v131 = 0LL;
  v130 = 0LL;
  CurrentLocale_low = 0LL;
  v107 = 0;
  v104[0] = 0;
  v110 = 0;
  DefaultLocaleId = 0;
LABEL_52:
  v29 = -1073741308;
  if ( !v21 )
    goto LABEL_103;
  v30 = v120;
  v31 = --v120;
  if ( !v30 )
    goto LABEL_103;
  if ( !v31 && v112 == 3 )
    v130 = v21;
  if ( v130 )
  {
    CurrentLocale_low = 0LL;
    v107 = 0;
    v104[0] = 0;
    v66 = v121;
    v110 = *((_WORD *)v121 + 8);
    v108 = (v110 & 0x3FF) == 0;
    v64 = v112;
LABEL_120:
    v67 = v106;
    while ( 1 )
    {
      v68 = v116++;
      if ( v68 )
      {
        switch ( v68 )
        {
          case 1:
            if ( (~v106 & 0x20000) != 0 && (~v106 & 0x80000) != 0 && (~(_BYTE)v106 & 0x10) != 0 )
            {
              v148 = *v66;
              if ( v64 < 2 )
                v69 = 0LL;
              else
                v69 = v66[1];
              v149 = v69;
              if ( v64 == 3 )
                v70 = v66[2];
              else
                v70 = 0LL;
              v150 = v70;
              if ( v5 == 4 )
                v151 = v66[3];
              result = LdrpLoadResourceFromAlternativeModule((void *)v7, (__int64)&v148, v5, v106, (__int64)v117);
              v109 = result;
              if ( (int)result >= 0 )
                return result;
            }
            CurrentLocale_low = (unsigned __int16)v113;
            v104[0] = v113;
            v67 = v106;
            goto LABEL_126;
          case 2:
            CurrentLocale_low = v110;
            if ( v108 )
              LOWORD(CurrentLocale_low) = v113;
            goto LABEL_125;
          case 3:
            if ( (v67 & 4) != 0 )
              return 3221225988LL;
            if ( v108 )
              goto LABEL_124;
            ParentLangId = LdrpGetParentLangId((unsigned __int16)CurrentLocale_low, v104, CurrentLocale_low, v66);
            if ( ParentLangId < 0 )
              goto LABEL_147;
            CurrentLocale_low = v104[0];
            v107 = v104[0];
            if ( v104[0] )
              --v116;
            break;
          case 4:
            if ( v108 )
              goto LABEL_124;
            CurrentLocale_low = v110;
            LOWORD(CurrentLocale_low) = v110 & 0x3FF;
            goto LABEL_125;
          case 5:
            if ( v108 )
              goto LABEL_124;
            return 3221225988LL;
          case 6:
            CurrentLocale_low = (unsigned __int16)v113;
            v107 = (unsigned __int16)v113;
            v104[0] = v113;
            if ( (v67 & 0x20) != 0 )
              break;
            v104[0] = 0;
            if ( LdrpSetThreadPreferredLangList() )
            {
              v86 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
              if ( v125 >= (unsigned int)v86 )
              {
                v104[0] = 0;
              }
              else
              {
                v87 = v125;
                GetLCIDFromLangListNodeWithLICCheck(
                  v86,
                  (__int64)NtCurrentTeb()->MergedPrefLanguages,
                  v125,
                  v104,
                  &v124);
                CurrentLocale_low = v104[0];
                v107 = v104[0];
                if ( v104[0] )
                {
                  v125 = v87 + 1;
                  --v116;
                  v67 = v111;
                  v106 = v111;
                  break;
                }
              }
              v67 = v111;
              v106 = v111;
            }
            else
            {
              v104[0] = 0;
            }
            goto LABEL_124;
          case 7:
            if ( (~v106 & 0x80000) != 0
              && (RcConfig = LdrpGetRcConfig((PVOID)v7, 0x180000000LL, 0, 1)) != 0LL
              && *RcConfig == -20054323
              && (v102 = (unsigned int)RcConfig[31], (_DWORD)v102)
              && (RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + v102)),
                  RtlCultureNameToLCID(&DestinationString, &Lcid)) )
            {
              CurrentLocale_low = (unsigned __int16)Lcid;
              v104[0] = Lcid;
              v67 = v106;
            }
            else
            {
              CurrentLocale_low = (unsigned __int16)v113;
              v104[0] = v113;
              v67 = v106;
            }
            goto LABEL_126;
          case 8:
            CurrentLocale_low = (unsigned __int16)v113;
            v107 = (unsigned __int16)v113;
            v104[0] = v113;
            if ( (~v106 & 0x80000) == 0 )
            {
              if ( NtCurrentTeb() )
              {
                v95 = NtCurrentTeb();
                CurrentLocale_low = LOWORD(v95->CurrentLocale);
                v104[0] = v95->CurrentLocale;
              }
              else
              {
                CurrentLocale_low = v104[0];
              }
              v67 = v111;
              v106 = v111;
              goto LABEL_126;
            }
            v67 = v106;
LABEL_276:
            v67 |= 0x20u;
            v106 = v67;
            v111 = v67;
            break;
          case 9:
            v107 = (unsigned __int16)v113;
            v104[0] = v113;
            v109 = NtQueryDefaultLocale(1u, &DefaultLocaleId);
            if ( v109 < 0 )
              goto LABEL_230;
            CurrentLocale_low = (unsigned __int16)DefaultLocaleId;
            goto LABEL_125;
          case 10:
            v107 = (unsigned __int16)v113;
            v104[0] = v113;
            v109 = NtQueryDefaultLocale(0, &v136);
            if ( v109 < 0 || v136 == DefaultLocaleId )
            {
LABEL_230:
              CurrentLocale_low = v107;
              break;
            }
            CurrentLocale_low = (unsigned __int16)v136;
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
        if ( v110 )
        {
          if ( (v67 & 0x80000) != 0 )
            CurrentLocale_low = v110;
          else
LABEL_124:
            CurrentLocale_low = (unsigned __int16)v113;
        }
        else
        {
LABEL_147:
          CurrentLocale_low = 0LL;
        }
LABEL_125:
        v104[0] = CurrentLocale_low;
LABEL_126:
        v107 = CurrentLocale_low;
      }
      if ( (~(_BYTE)v67 & 0x20) == 0 || (unsigned __int16)CurrentLocale_low != v113 )
      {
        v113 = (unsigned __int16)CurrentLocale_low;
        v6 = &v113;
        v133 = &v113;
        v146 = &v113;
        v21 = v130;
        v134 = v130;
        break;
      }
      v66 = v121;
    }
  }
  v32 = *(unsigned __int16 *)(v21 + 14);
  v33 = *(unsigned __int16 *)(v21 + 12);
  v34 = v33 + v32;
  if ( (int)v33 + v32 < (unsigned int)v33 )
  {
    v34 = -1;
    result = 3221225621LL;
  }
  else
  {
    result = 0LL;
  }
  v109 = result;
  if ( (int)result < 0 )
    return result;
  v35 = 8LL * v34;
  v142 = v35;
  if ( v35 > 0xFFFFFFFF )
  {
    LODWORD(v35) = -1;
    v36 = -1073741675;
  }
  else
  {
    v36 = 0;
  }
  v109 = v36;
  if ( v36 < 0 )
    return (unsigned int)v36;
  v37 = (int *)(v21 + 16);
  v144 = (int *)(v21 + 16);
  v38 = (void *)v129;
  v39 = (char *)(v129 & 0xFFFFFFFFFFFFFFFCuLL);
  v119 = (char *)(v129 & 0xFFFFFFFFFFFFFFFCuLL);
  v40 = (v129 & 0xFFFFFFFFFFFFFFFCuLL) + v128;
  if ( v21 + 16 + (unsigned __int64)(unsigned int)v35 > v40 )
    return 3221225595LL;
  v41 = *v6;
  OutHeaders = (PIMAGE_NT_HEADERS)v41;
  v42 = v41 & 0xFFFFFFFFFFFF0000uLL;
  v142 = v41 & 0xFFFFFFFFFFFF0000uLL;
  if ( (v41 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v37 += 2 * v33;
    v144 = v37;
    LOWORD(v33) = v32;
  }
  if ( !(_WORD)v33 )
  {
    v89 = v112;
    if ( v112 - v120 == 1 )
    {
      v90 = -1073741686;
      goto LABEL_206;
    }
    if ( v112 - v120 != 2 )
    {
      if ( v112 - v120 != 3 )
      {
        v91 = -1073741811;
        v109 = -1073741811;
        v92 = v106;
        goto LABEL_207;
      }
      v103 = -1073741308;
LABEL_297:
      v109 = v103;
      return v103;
    }
    v90 = -1073741685;
LABEL_206:
    v109 = v90;
    v91 = v90;
    v92 = v106;
    if ( (v106 & 0x2040000) != 0 )
    {
LABEL_207:
      v93 = v121;
      goto LABEL_208;
    }
    v93 = v121;
    if ( v112 == 3 )
    {
      v148 = *v121;
      v149 = v121[1];
      v150 = v121[2];
      if ( v5 == 4 )
        v151 = v121[3];
      v96 = v106;
      LODWORD(v96) = v106 | 0x1000000;
      v94 = v117;
      ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                        (void *)v129,
                                        (__int64)&v148,
                                        v5,
                                        v96,
                                        (__int64)v117);
      v38 = (void *)v129;
      v89 = v112;
      if ( ResourceFromAlternativeModule != -1073020927 )
      {
        if ( ResourceFromAlternativeModule != -1073020922 )
          v91 = ResourceFromAlternativeModule;
        v109 = v91;
      }
      v92 = v106;
    }
    else
    {
LABEL_208:
      v94 = v117;
    }
    if ( v91 + 1073741686 <= 1
      && (~v92 & 0x20000) != 0
      && (~v92 & 0x80000) != 0
      && (~(_BYTE)v92 & 0x10) != 0
      && v89 == 3 )
    {
      v148 = *v93;
      v149 = v93[1];
      v150 = v93[2];
      if ( v5 == 4 )
        v151 = v93[3];
      v103 = LdrpLoadResourceFromAlternativeModule(v38, (__int64)&v148, v5, v92, (__int64)v94);
      goto LABEL_297;
    }
    return v91;
  }
  if ( v130 && (v106 & 0x20) != 0 )
  {
    v21 = 0LL;
    v134 = 0LL;
    v113 = (unsigned int)*v37;
    v27 = v118 + (unsigned int)v37[1];
    if ( v27 > v40 )
      return 3221225595LL;
    v131 = v118 + (unsigned int)v37[1];
    v7 = v129;
    v29 = -1073741308;
    CurrentLocale_low = v107;
LABEL_103:
    if ( v27 && (v106 & 2) == 0 )
    {
      v62 = v117;
      *v117 = v27;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        v133 = (__int64 *)NtCurrentTeb();
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
        v133[770] = (__int64)Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = v7;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v131;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = v7;
      }
      v29 = 0;
      v109 = 0;
      v63 = v111;
      v106 = v111;
      v64 = v112;
      goto LABEL_110;
    }
    if ( v21 && (v106 & 2) != 0 )
    {
      v62 = v117;
      *v117 = v21;
      v29 = 0;
      v109 = 0;
      v64 = v112;
      v63 = v106;
LABEL_110:
      v65 = v121;
      if ( (v63 & 0x2040000) == 0 && v29 + 1073741686 <= 1 && v64 == 3 )
      {
        v148 = *v121;
        v149 = v121[1];
        v150 = v121[2];
        if ( v5 == 4 )
          v151 = v121[3];
        v71 = v106;
        LODWORD(v71) = v106 | 0x1000000;
        v72 = LdrpLoadResourceFromAlternativeModule((void *)v7, (__int64)&v148, v5, v71, (__int64)v62);
        if ( v72 != -1073020927 && v72 != -1073020922 )
        {
          v29 = v72;
          v109 = v72;
        }
      }
      if ( v29 + 1073741686 <= 1
        && (~v106 & 0x20000) != 0
        && (~v106 & 0x80000) != 0
        && (~(_BYTE)v106 & 0x10) != 0
        && v64 == 3 )
      {
        v148 = *v65;
        v149 = v65[1];
        v150 = v65[2];
        if ( v5 == 4 )
          v151 = v65[3];
        v29 = LdrpLoadResourceFromAlternativeModule((void *)v7, (__int64)&v148, v5, v106, (__int64)v62);
        v109 = v29;
      }
      return v29;
    }
    v64 = v112;
    switch ( v112 - v120 )
    {
      case 3u:
        v109 = -1073741308;
        if ( v130 )
        {
          v131 = 0LL;
          v66 = v121;
          goto LABEL_120;
        }
        break;
      case 1u:
        v29 = -1073741686;
        v109 = -1073741686;
        break;
      case 2u:
        v29 = -1073741685;
        v109 = -1073741685;
        v62 = v117;
        v63 = v106;
        goto LABEL_110;
      default:
        v29 = -1073741811;
        v109 = -1073741811;
        break;
    }
    v62 = v117;
    v63 = v106;
    goto LABEL_110;
  }
  v145 = (unsigned int *)v37;
  v115 = v33;
  v134 = 0LL;
  v131 = 0LL;
  v43 = 0LL;
  v137 = 0LL;
  v27 = 0LL;
  v122 = 0LL;
  v140 = 0LL;
  v44 = (unsigned int *)&v37[2 * (unsigned __int16)v33 - 2];
  v139 = v44;
  v45 = v33;
  while ( 1 )
  {
    if ( v37 > (int *)v44 )
      goto LABEL_99;
    v45 >>= 1;
    if ( !v45 )
    {
      if ( !(_WORD)v33 )
        goto LABEL_99;
      v53 = v128;
      v54 = v38 && v128;
      v55 = 1;
      v105 = 1;
      v56 = *v37;
      if ( v42 )
      {
        if ( v56 >= 0 )
        {
          v57 = -1;
        }
        else if ( v54
               && (v73 = (unsigned int)v56, LODWORD(v73) = v56 & 0x7FFFFFFF, v118 + v73 > (unsigned __int64)&v39[v128]) )
        {
          v55 = 0;
          v105 = 0;
          v57 = -1;
        }
        else
        {
          v74 = *v37;
          v75 = (unsigned int)*v37;
          LODWORD(v75) = v75 & 0x7FFFFFFF;
          v76 = (unsigned __int16 *)(v118 + v75);
          if ( v54
            && ((v141 = (unsigned __int16 *)(2LL * *v76), v77 = v74 & 0x7FFFFFFF, v77 + (unsigned int)v141 < v77)
             || v118 + (unsigned __int64)(v77 + (unsigned int)v141) > (unsigned __int64)&v39[v128]) )
          {
            v55 = 0;
            v105 = 0;
            v57 = -1;
          }
          else
          {
            v78 = OutHeaders;
            v57 = wcsncmp((const wchar_t *)OutHeaders, v76 + 1, *v76);
            if ( !v57 )
            {
              v79 = -1LL;
              do
                ++v79;
              while ( *((_WORD *)&v78->Signature + v79) );
              if ( v79 != *v76 )
                v57 = 1;
            }
            v39 = v119;
            v27 = v122;
          }
        }
      }
      else if ( v56 < 0 )
      {
        v57 = 1;
      }
      else
      {
        v57 = v41 - v56;
      }
      if ( !v55 )
        return 3221225595LL;
      if ( v57 )
        goto LABEL_99;
      v58 = (unsigned int)v37[1];
      v59 = &v39[v53];
      v60 = v58;
      v61 = v118;
      if ( (int)v58 < 0 )
        goto LABEL_97;
      if ( v118 + v58 > (unsigned __int64)v59 )
        return 3221225595LL;
      v27 = v118 + v58;
      v140 = v118 + v58;
LABEL_99:
      v21 = v43;
      v134 = v43;
      v131 = v27;
      v6 = v133 + 1;
      v133 = v6;
      v146 = v6;
      v5 = v135;
      v7 = v129;
      CurrentLocale_low = v107;
      goto LABEL_52;
    }
    v138 = (unsigned int *)v37;
    v46 = 2LL * v45;
    v47 = v33 & 1;
    v48 = (unsigned int *)(v47 ? &v37[v46] : &v37[v46 - 2]);
    v138 = v48;
    v49 = v38 && v128;
    v105 = 1;
    v50 = *v48;
    if ( v42 )
    {
      if ( v50 >= 0 )
      {
        v51 = -1;
        goto LABEL_78;
      }
      if ( v49 && (v80 = (unsigned int)v50, LODWORD(v80) = v50 & 0x7FFFFFFF, v118 + v80 > (unsigned __int64)&v39[v128]) )
      {
        v52 = 0;
        v105 = 0;
        v51 = -1;
      }
      else
      {
        v81 = *v48;
        v82 = *v48;
        LODWORD(v82) = v82 & 0x7FFFFFFF;
        v83 = (unsigned __int16 *)(v118 + v82);
        v141 = v83;
        if ( v49
          && ((v147 = 2LL * *v83, v84 = v81 & 0x7FFFFFFF, v84 + (unsigned int)v147 < v84)
           || v118 + (unsigned __int64)(v84 + (unsigned int)v147) > (unsigned __int64)&v39[v128]) )
        {
          v52 = 0;
          v105 = 0;
          v51 = -1;
          LODWORD(v41) = (_DWORD)OutHeaders;
          v27 = v122;
        }
        else
        {
          v41 = (unsigned __int64)OutHeaders;
          v51 = wcsncmp((const wchar_t *)OutHeaders, v83 + 1, *v83);
          if ( v51 )
            goto LABEL_187;
          v85 = -1LL;
          do
            ++v85;
          while ( *(_WORD *)(v41 + 2 * v85) );
          if ( v85 == *v141 )
          {
LABEL_187:
            v38 = (void *)v129;
            v39 = v119;
            v27 = v122;
            goto LABEL_78;
          }
          v51 = 1;
          v52 = 1;
          v38 = (void *)v129;
          v39 = v119;
          v27 = v122;
        }
      }
    }
    else
    {
      if ( v50 >= 0 )
      {
        v51 = v41 - v50;
LABEL_78:
        v52 = v105;
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
      v37 = (int *)(v48 + 2);
      v145 = v48 + 2;
      v44 = v139;
    }
    else
    {
      v44 = v48 - 2;
      v139 = v48 - 2;
      if ( !v47 )
        --v45;
    }
    LOWORD(v33) = v45;
    v115 = v45;
    v42 = v142;
  }
  v58 = v48[1];
  v59 = &v39[v128];
  v60 = v58;
  v61 = v118;
  if ( (int)v58 < 0 )
  {
LABEL_97:
    LODWORD(v60) = v60 & 0x7FFFFFFF;
    if ( v61 + v60 <= (unsigned __int64)v59 )
    {
      v43 = v61 + (v58 & 0xFFFFFFFF7FFFFFFFuLL);
      v137 = v43;
      goto LABEL_99;
    }
    return 3221225595LL;
  }
  if ( v118 + v58 <= (unsigned __int64)v59 )
  {
    v43 = 0LL;
    v137 = 0LL;
    v27 = v118 + v58;
    v140 = v118 + v58;
    goto LABEL_99;
  }
  return 3221225595LL;
}
