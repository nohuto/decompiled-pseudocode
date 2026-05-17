/*
 * XREFs of LdrpSearchResourceSection_U @ 0x180040060
 * Callers:
 *     RtlFindMessage @ 0x180035010 (RtlFindMessage.c)
 *     LdrpGetRcConfig @ 0x1800385FC (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180041A78 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrFindResource_U @ 0x180043270 (LdrFindResource_U.c)
 *     RtlLoadString @ 0x180061E40 (RtlLoadString.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180063EB0 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrFindResourceEx_U @ 0x180084660 (LdrFindResourceEx_U.c)
 *     LdrFindResourceDirectory_U @ 0x1800EC120 (LdrFindResourceDirectory_U.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrIsResItemExist @ 0x180036C48 (LdrIsResItemExist.c)
 *     LdrpGetRcConfig @ 0x1800385FC (LdrpGetRcConfig.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpResGetMappingSize @ 0x18003F8A0 (LdrpResGetMappingSize.c)
 *     ResourceEntryBinarySearch @ 0x180040E98 (ResourceEntryBinarySearch.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180041A78 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSetThreadPreferredLangList @ 0x180042F40 (LdrpSetThreadPreferredLangList.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180043148 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     LdrpGetParentLangId @ 0x180084FA8 (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1800956E0 (_wcsicmp.c)
 *     NtQueryDefaultLocale @ 0x1800A4310 (NtQueryDefaultLocale.c)
 */

__int64 __fastcall LdrpSearchResourceSection_U(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5)
{
  unsigned int v5; // r14d
  unsigned __int64 *v6; // r15
  unsigned __int64 v8; // rsi
  unsigned int v9; // r13d
  unsigned __int16 v10; // di
  unsigned __int64 v11; // rcx
  unsigned int ResourceFromAlternativeModule; // edi
  unsigned __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rbx
  unsigned __int64 String1; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // edi
  unsigned int v20; // eax
  int v21; // r9d
  __int64 v22; // r10
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  int v25; // ecx
  unsigned int *v26; // r8
  unsigned __int64 v27; // r11
  _QWORD *v28; // r15
  unsigned __int64 *v29; // rsi
  int v30; // ebx
  unsigned __int64 *v31; // r9
  int v32; // eax
  int CurrentLocale_low; // eax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned int v36; // eax
  unsigned int v37; // ebx
  __int64 Heap; // rax
  unsigned __int64 *v39; // r15
  int v40; // ebx
  _QWORD *v41; // rsi
  unsigned int v42; // eax
  _DWORD *RcConfig; // rax
  int ParentLangId; // eax
  _WORD v45[2]; // [rsp+40h] [rbp-128h] BYREF
  bool v46; // [rsp+44h] [rbp-124h]
  int v47; // [rsp+48h] [rbp-120h]
  __int64 v48; // [rsp+50h] [rbp-118h] BYREF
  unsigned __int16 v49; // [rsp+58h] [rbp-110h]
  unsigned int v50; // [rsp+60h] [rbp-108h]
  int v51; // [rsp+68h] [rbp-100h]
  __int64 v52; // [rsp+70h] [rbp-F8h] BYREF
  int v53; // [rsp+78h] [rbp-F0h]
  _QWORD *v54; // [rsp+80h] [rbp-E8h]
  unsigned int v55; // [rsp+88h] [rbp-E0h]
  unsigned __int64 *v56; // [rsp+90h] [rbp-D8h]
  char v57[4]; // [rsp+98h] [rbp-D0h] BYREF
  unsigned int v58; // [rsp+9Ch] [rbp-CCh]
  int v59; // [rsp+A0h] [rbp-C8h] BYREF
  int v60; // [rsp+A4h] [rbp-C4h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-C0h]
  __int64 v62; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-B0h] BYREF
  int v64[2]; // [rsp+C0h] [rbp-A8h]
  int v65; // [rsp+C8h] [rbp-A0h] BYREF
  int v66[2]; // [rsp+D0h] [rbp-98h] BYREF
  unsigned int *v67; // [rsp+D8h] [rbp-90h]
  __int64 *v68; // [rsp+E0h] [rbp-88h]
  unsigned __int64 v69; // [rsp+E8h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-78h] BYREF
  unsigned __int64 v71; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v72; // [rsp+108h] [rbp-60h]
  unsigned __int64 v73; // [rsp+110h] [rbp-58h]
  unsigned __int64 v74; // [rsp+118h] [rbp-50h]

  v5 = a4;
  v51 = a3;
  v6 = a2;
  v50 = a4;
  v54 = a5;
  v56 = a2;
  v46 = 0;
  v8 = 0LL;
  *(_QWORD *)v66 = 0LL;
  v58 = 0;
  if ( (unsigned int)a3 < 3 && (a4 & 2) == 0
    || (unsigned int)a3 > 4
    || (a4 & 0x41) != 0 && (_DWORD)a3 != 4
    || (_DWORD)a3 == 4 && (a4 & 0x41) == 0 )
  {
    return 3221225713LL;
  }
  v9 = 3;
  if ( (_DWORD)a3 != 4 )
    v9 = a3;
  v55 = v9;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v9 - 1 <= 2 )
  {
    if ( v9 == 3 )
      v10 = *((_WORD *)a2 + 8);
    else
      v10 = 0;
    v49 = v10;
    v11 = *a2;
    if ( ((*a2 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v11 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v11, L"MUI"))
      || (~(_BYTE)v5 & 8) == 0
      || (v10 & 0xF3FF) != 0
      || v10 == 3072 )
    {
      v5 |= LdrIsResItemExist(a1, v6, a3, v5);
      v50 = v5;
      if ( (v5 & 0x40000) != 0 )
      {
        ResourceFromAlternativeModule = -1073741686;
        v47 = -1073741686;
        if ( (v5 & 0x20000) == 0 )
        {
          v71 = *v6;
          if ( v9 < 2 )
            v13 = 0LL;
          else
            v13 = v6[1];
          v72 = v13;
          if ( v9 == 3 )
            v8 = v6[2];
          v73 = v8;
          if ( v51 == 4 )
            v74 = v6[3];
          ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                            a1,
                                            (unsigned int)&v71,
                                            v51,
                                            v5,
                                            (__int64)v54);
          v47 = ResourceFromAlternativeModule;
        }
        return ResourceFromAlternativeModule;
      }
    }
    else
    {
      v5 |= 0x10u;
      v50 = v5;
    }
  }
  if ( (int)RtlpImageDirectoryEntryToDataEx(a1, 1, 2u, &v60, (__int64)&v48) < 0 )
  {
    v15 = 0LL;
    v48 = 0LL;
  }
  else
  {
    v15 = v48;
  }
  *(_QWORD *)v64 = v15;
  if ( !v15 )
    return 3221225609LL;
  result = LdrpResGetMappingSize(a1, (unsigned __int64 *)v66, 256, 1);
  v47 = result;
  if ( (int)result >= 0 )
  {
    v63 = v15;
    v52 = 61166LL;
    v53 = 0;
    v17 = 0LL;
    v62 = 0LL;
    v61 = 0LL;
    v18 = 0LL;
    LODWORD(v48) = 0;
    v45[0] = 0;
    v49 = 0;
    v59 = 0;
    v19 = -1073741308;
    while ( 1 )
    {
      if ( !v15 )
        goto LABEL_52;
      v20 = v55;
      String1 = --v55;
      if ( !v20 )
        goto LABEL_52;
      if ( !(_DWORD)String1 && v9 == 3 )
        v61 = v15;
      if ( v61 )
      {
        v18 = 0LL;
        LODWORD(v48) = 0;
        v45[0] = 0;
        v31 = v56;
        v49 = *((_WORD *)v56 + 8);
        v46 = (v49 & 0x3FF) == 0;
        while ( 1 )
        {
          v32 = v53++;
          if ( v32 )
          {
            switch ( v32 )
            {
              case 1:
                if ( (~v5 & 0x20000) == 0 || (~v5 & 0x80000) == 0 || (~(_BYTE)v5 & 0x10) == 0 )
                  goto LABEL_68;
                v71 = *v31;
                if ( v9 < 2 )
                  v34 = 0LL;
                else
                  v34 = v31[1];
                v72 = v34;
                if ( v9 == 3 )
                  v35 = v31[2];
                else
                  v35 = 0LL;
                v73 = v35;
                if ( v51 == 4 )
                  v74 = v31[3];
                result = LdrpLoadResourceFromAlternativeModule(a1, (unsigned int)&v71, v51, v5, (__int64)v54);
                v47 = result;
                if ( (int)result < 0 )
                  goto LABEL_68;
                return result;
              case 2:
                if ( v46 )
                  goto LABEL_68;
                CurrentLocale_low = v49;
                goto LABEL_69;
              case 3:
                if ( (v5 & 4) != 0 )
                  return 3221225988LL;
                if ( v46 )
                  goto LABEL_68;
                ParentLangId = LdrpGetParentLangId((unsigned __int16)v18, v45);
                if ( ParentLangId < 0 )
                  goto LABEL_86;
                LODWORD(v48) = v45[0];
                if ( v45[0] )
                  --v53;
                break;
              case 4:
                if ( v46 )
                  goto LABEL_68;
                CurrentLocale_low = v49;
                LOWORD(CurrentLocale_low) = v49 & 0x3FF;
                goto LABEL_69;
              case 5:
                if ( v46 )
                  goto LABEL_68;
                return 3221225988LL;
              case 6:
                LODWORD(v48) = (unsigned __int16)v52;
                v45[0] = v52;
                if ( (v5 & 0x20) != 0 )
                  break;
                v45[0] = 0;
                if ( (unsigned __int8)LdrpSetThreadPreferredLangList() )
                {
                  String1 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
                  if ( v58 >= (unsigned int)String1 )
                  {
                    v45[0] = 0;
                  }
                  else
                  {
                    v37 = v58;
                    GetLCIDFromLangListNodeWithLICCheck(
                      String1,
                      NtCurrentTeb()->MergedPrefLanguages,
                      v58,
                      (unsigned int)v45,
                      (__int64)v57);
                    LODWORD(v48) = v45[0];
                    if ( v45[0] )
                    {
                      v58 = v37 + 1;
                      --v53;
                      v5 = v50;
                      break;
                    }
                  }
                  v5 = v50;
                }
                else
                {
                  v45[0] = 0;
                }
                goto LABEL_68;
              case 7:
                if ( (~v5 & 0x80000) == 0 )
                  goto LABEL_68;
                RcConfig = LdrpGetRcConfig(a1, 0x180000000LL, 0, 1);
                if ( !RcConfig )
                  goto LABEL_68;
                if ( *RcConfig != -20054323 )
                  goto LABEL_68;
                String1 = (unsigned int)RcConfig[31];
                if ( !(_DWORD)String1 )
                  goto LABEL_68;
                RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)RcConfig + String1));
                if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v60) )
                  goto LABEL_68;
                CurrentLocale_low = (unsigned __int16)v60;
                goto LABEL_69;
              case 8:
                LODWORD(v48) = (unsigned __int16)v52;
                v45[0] = v52;
                if ( (~v5 & 0x80000) != 0 )
                  goto LABEL_155;
                if ( NtCurrentTeb() )
                {
                  CurrentLocale_low = LOWORD(NtCurrentTeb()->CurrentLocale);
                  v45[0] = CurrentLocale_low;
                }
                else
                {
                  CurrentLocale_low = v45[0];
                }
                v5 = v50;
                goto LABEL_70;
              case 9:
                LODWORD(v48) = (unsigned __int16)v52;
                v45[0] = v52;
                LOBYTE(String1) = 1;
                v47 = NtQueryDefaultLocale(String1, &v59, v18);
                if ( v47 < 0 )
                  break;
                CurrentLocale_low = (unsigned __int16)v59;
                goto LABEL_69;
              case 10:
                LODWORD(v48) = (unsigned __int16)v52;
                v45[0] = v52;
                v47 = NtQueryDefaultLocale(0LL, &v65, v18);
                if ( v47 < 0 )
                  break;
                CurrentLocale_low = v65;
                if ( v65 == v59 )
                  break;
                goto LABEL_69;
              case 11:
                CurrentLocale_low = 1033;
                goto LABEL_69;
              case 12:
LABEL_155:
                v5 |= 0x20u;
                v50 = v5;
                break;
              default:
                return 3221225988LL;
            }
          }
          else
          {
            if ( v49 )
            {
              if ( (v5 & 0x80000) != 0 )
                CurrentLocale_low = v49;
              else
LABEL_68:
                CurrentLocale_low = (unsigned __int16)v52;
            }
            else
            {
LABEL_86:
              CurrentLocale_low = 0;
            }
LABEL_69:
            v45[0] = CurrentLocale_low;
LABEL_70:
            LODWORD(v48) = CurrentLocale_low;
          }
          if ( (~(_BYTE)v5 & 0x20) == 0 )
            break;
          v18 = (unsigned int)v48;
          if ( (unsigned __int16)v48 != v52 )
            goto LABEL_73;
LABEL_75:
          v31 = v56;
        }
        LOWORD(v18) = v48;
LABEL_73:
        v52 = (unsigned __int16)v18;
        v6 = (unsigned __int64 *)&v52;
        v68 = &v52;
        v15 = v61;
        v63 = v61;
      }
      v21 = *(unsigned __int16 *)(v15 + 14);
      v22 = *(unsigned __int16 *)(v15 + 12);
      v23 = v22 + v21;
      if ( (int)v22 + v21 < (unsigned int)v22 )
      {
        v23 = -1;
        result = 3221225621LL;
      }
      else
      {
        result = 0LL;
      }
      v47 = result;
      if ( (int)result < 0 )
        return result;
      v24 = 8LL * v23;
      v69 = v24;
      if ( v24 > 0xFFFFFFFF )
      {
        LODWORD(v24) = -1;
        v25 = -1073741675;
      }
      else
      {
        v25 = 0;
      }
      v47 = v25;
      if ( v25 < 0 )
        return (unsigned int)v25;
      v26 = (unsigned int *)(v15 + 16);
      v67 = (unsigned int *)(v15 + 16);
      v27 = *(_QWORD *)v66 + (a1 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v15 + 16 + (unsigned __int64)(unsigned int)v24 > v27 )
        return 3221225595LL;
      String1 = *v6;
      if ( (*v6 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v26 += 2 * v22;
        v67 = v26;
        LOWORD(v22) = v21;
      }
      if ( !(_WORD)v22 )
      {
        switch ( v9 - v55 )
        {
          case 1u:
            v19 = -1073741686;
            goto LABEL_124;
          case 2u:
            v19 = -1073741685;
LABEL_124:
            v47 = v19;
            if ( (v5 & 0x2040000) != 0 )
            {
LABEL_125:
              v39 = v56;
              v40 = v51;
              goto LABEL_126;
            }
            v39 = v56;
            v40 = v51;
            if ( v9 == 3 )
            {
              v71 = *v56;
              v72 = v56[1];
              v73 = v56[2];
              if ( v51 == 4 )
                v74 = v56[3];
              v41 = v54;
              v42 = LdrpLoadResourceFromAlternativeModule(a1, (unsigned int)&v71, v51, v5 | 0x1000000, (__int64)v54);
              if ( v42 != -1073020927 && v42 != -1073020922 )
              {
                v19 = v42;
                v47 = v42;
              }
            }
            else
            {
LABEL_126:
              v41 = v54;
            }
            if ( v19 + 1073741686 <= 1
              && (~v5 & 0x20000) != 0
              && (~v5 & 0x80000) != 0
              && (~(_BYTE)v5 & 0x10) != 0
              && v9 == 3 )
            {
              v71 = *v39;
              v72 = v39[1];
              v73 = v39[2];
              if ( v40 == 4 )
                v74 = v39[3];
              v19 = LdrpLoadResourceFromAlternativeModule(a1, (unsigned int)&v71, v40, v5, (__int64)v41);
              v47 = v19;
            }
            break;
          case 3u:
            v47 = -1073741308;
            break;
          default:
            v19 = -1073741811;
            v47 = -1073741811;
            goto LABEL_125;
        }
        return v19;
      }
      if ( v61 && (v5 & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)ResourceEntryBinarySearch(
                               a1,
                               v66[0],
                               (unsigned __int16)v22,
                               v64[0],
                               (__int64)v26,
                               (wchar_t *)String1,
                               (__int64)&v63,
                               (__int64)&v62) )
        return 3221225595LL;
      v68 = (__int64 *)++v6;
      v15 = v63;
      v17 = v62;
      v18 = (unsigned int)v48;
    }
    v15 = 0LL;
    v63 = 0LL;
    v52 = *v26;
    v17 = *(_QWORD *)v64 + v26[1];
    if ( v17 > v27 )
      return 3221225595LL;
    v62 = *(_QWORD *)v64 + v26[1];
    v18 = (unsigned int)v48;
LABEL_52:
    if ( v17 && (v5 & 2) == 0 )
    {
      v28 = v54;
      *v54 = v17;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        *(_QWORD *)v64 = NtCurrentTeb();
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 24LL);
        *(_QWORD *)(*(_QWORD *)v64 + 6160LL) = Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = a1;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = v62;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = a1;
      }
      v19 = 0;
      v47 = 0;
      v5 = v50;
      goto LABEL_59;
    }
    if ( v15 && (v5 & 2) != 0 )
    {
      v28 = v54;
      *v54 = v15;
      v19 = 0;
      v47 = 0;
    }
    else
    {
      if ( v9 - v55 == 3 )
      {
        v47 = -1073741308;
        if ( v61 )
        {
          v62 = 0LL;
          goto LABEL_75;
        }
      }
      else
      {
        if ( v9 - v55 != 1 )
        {
          v28 = v54;
          if ( v9 - v55 == 2 )
          {
            v19 = -1073741685;
            v47 = -1073741685;
          }
          else
          {
            v19 = -1073741811;
            v47 = -1073741811;
          }
          goto LABEL_59;
        }
        v19 = -1073741686;
        v47 = -1073741686;
      }
      v28 = v54;
    }
LABEL_59:
    v29 = v56;
    v30 = v51;
    if ( (v5 & 0x2040000) == 0 && v19 + 1073741686 <= 1 && v9 == 3 )
    {
      v71 = *v56;
      v72 = v56[1];
      v73 = v56[2];
      if ( v51 == 4 )
        v74 = v56[3];
      v36 = LdrpLoadResourceFromAlternativeModule(a1, (unsigned int)&v71, v51, v5 | 0x1000000, (__int64)v28);
      if ( v36 != -1073020927 && v36 != -1073020922 )
      {
        v19 = v36;
        v47 = v36;
      }
    }
    if ( v19 + 1073741686 <= 1 && (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 && v9 == 3 )
    {
      v71 = *v29;
      v72 = v29[1];
      v73 = v29[2];
      if ( v30 == 4 )
        v74 = v29[3];
      v19 = LdrpLoadResourceFromAlternativeModule(a1, (unsigned int)&v71, v30, v5, (__int64)v28);
      v47 = v19;
    }
    return v19;
  }
  return result;
}
