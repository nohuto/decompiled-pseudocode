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
        __int64 BaseOfImage,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  unsigned int NumberOfSymbols; // r14d
  unsigned __int64 *p_SizeOfInitializedData; // r15
  _IMAGE_DATA_DIRECTORY v8; // rsi
  unsigned int v9; // r13d
  __int16 v10; // di
  unsigned __int64 v11; // rcx
  unsigned int ResourceFromAlternativeModule; // edi
  _IMAGE_DATA_DIRECTORY v13; // rax
  __int64 result; // rax
  unsigned __int64 SizeOfStackCommit; // rbx
  unsigned __int64 SizeOfStackReserve; // rdx
  unsigned __int16 Signature; // r8
  unsigned int v18; // edi
  unsigned int SectionAlignment; // eax
  unsigned int v20; // ecx
  int v21; // r9d
  __int64 v22; // r10
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  int v25; // ecx
  unsigned int *v26; // r8
  unsigned __int64 v27; // r11
  wchar_t *String1; // rcx
  unsigned __int64 v29; // r15
  __int64 v30; // rsi
  int v31; // ebx
  __int64 v32; // r9
  unsigned int v33; // eax
  unsigned int TimeDateStamp_low; // eax
  _IMAGE_DATA_DIRECTORY v35; // rax
  _IMAGE_DATA_DIRECTORY v36; // rax
  unsigned __int32 v37; // eax
  unsigned int v38; // ecx
  unsigned int Win32VersionValue; // ebx
  PVOID Heap; // rax
  __int64 v41; // r15
  int v42; // ebx
  unsigned __int64 ImageBase; // rsi
  unsigned __int32 v44; // eax
  _DWORD *RcConfig; // rax
  __int64 v46; // rcx
  int ParentLangId; // eax
  _WORD v48[2]; // [rsp+40h] [rbp-128h] BYREF
  bool v49; // [rsp+44h] [rbp-124h]
  NTSTATUS DefaultLocale; // [rsp+48h] [rbp-120h]
  _IMAGE_NT_HEADERS64 OutHeaders; // [rsp+50h] [rbp-118h] BYREF

  NumberOfSymbols = a4;
  *(_DWORD *)&OutHeaders.OptionalHeader.Magic = a3;
  p_SizeOfInitializedData = (unsigned __int64 *)a2;
  OutHeaders.FileHeader.NumberOfSymbols = a4;
  OutHeaders.OptionalHeader.ImageBase = a5;
  *(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion = a2;
  v49 = 0;
  v8 = 0LL;
  *(_QWORD *)&OutHeaders.OptionalHeader.LoaderFlags = 0LL;
  OutHeaders.OptionalHeader.Win32VersionValue = 0;
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
  OutHeaders.OptionalHeader.SectionAlignment = v9;
  if ( (~(_BYTE)a4 & 0x10) != 0 && v9 - 1 <= 2 )
  {
    if ( v9 == 3 )
      v10 = *(_WORD *)(a2 + 16);
    else
      v10 = 0;
    LOWORD(OutHeaders.FileHeader.TimeDateStamp) = v10;
    v11 = *(_QWORD *)a2;
    if ( ((*(_QWORD *)a2 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && ((v11 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v11, L"MUI"))
      || (~(_BYTE)NumberOfSymbols & 8) == 0
      || (v10 & 0xF3FF) != 0
      || v10 == 3072 )
    {
      NumberOfSymbols |= LdrIsResItemExist((void *)BaseOfImage, p_SizeOfInitializedData, a3, NumberOfSymbols);
      OutHeaders.FileHeader.NumberOfSymbols = NumberOfSymbols;
      if ( (NumberOfSymbols & 0x40000) != 0 )
      {
        ResourceFromAlternativeModule = -1073741686;
        DefaultLocale = -1073741686;
        if ( (NumberOfSymbols & 0x20000) == 0 )
        {
          OutHeaders.OptionalHeader.DataDirectory[5] = (_IMAGE_DATA_DIRECTORY)*p_SizeOfInitializedData;
          if ( v9 < 2 )
            v13 = 0LL;
          else
            v13 = (_IMAGE_DATA_DIRECTORY)p_SizeOfInitializedData[1];
          OutHeaders.OptionalHeader.DataDirectory[6] = v13;
          if ( v9 == 3 )
            v8 = (_IMAGE_DATA_DIRECTORY)p_SizeOfInitializedData[2];
          OutHeaders.OptionalHeader.DataDirectory[7] = v8;
          if ( *(_DWORD *)&OutHeaders.OptionalHeader.Magic == 4 )
            OutHeaders.OptionalHeader.DataDirectory[8] = (_IMAGE_DATA_DIRECTORY)p_SizeOfInitializedData[3];
          ResourceFromAlternativeModule = LdrpLoadResourceFromAlternativeModule(
                                            (PVOID)BaseOfImage,
                                            OutHeaders.OptionalHeader.ImageBase);
          DefaultLocale = ResourceFromAlternativeModule;
        }
        return ResourceFromAlternativeModule;
      }
    }
    else
    {
      NumberOfSymbols |= 0x10u;
      OutHeaders.FileHeader.NumberOfSymbols = NumberOfSymbols;
    }
  }
  if ( RtlpImageDirectoryEntryToDataEx(BaseOfImage, 1, 2u, &OutHeaders.OptionalHeader.SizeOfHeaders, &OutHeaders) < 0 )
  {
    SizeOfStackCommit = 0LL;
    *(_QWORD *)&OutHeaders.Signature = 0LL;
  }
  else
  {
    SizeOfStackCommit = *(_QWORD *)&OutHeaders.Signature;
  }
  OutHeaders.OptionalHeader.SizeOfHeapReserve = SizeOfStackCommit;
  if ( !SizeOfStackCommit )
    return 3221225609LL;
  result = LdrpResGetMappingSize(BaseOfImage, (unsigned __int64 *)&OutHeaders.OptionalHeader.LoaderFlags, 256, 1);
  DefaultLocale = result;
  if ( (int)result >= 0 )
  {
    OutHeaders.OptionalHeader.SizeOfStackCommit = SizeOfStackCommit;
    *(_QWORD *)&OutHeaders.OptionalHeader.SizeOfInitializedData = 61166LL;
    OutHeaders.OptionalHeader.AddressOfEntryPoint = 0;
    SizeOfStackReserve = 0LL;
    OutHeaders.OptionalHeader.SizeOfStackReserve = 0LL;
    *(_QWORD *)&OutHeaders.OptionalHeader.CheckSum = 0LL;
    Signature = 0;
    OutHeaders.Signature = 0;
    v48[0] = 0;
    LOWORD(OutHeaders.FileHeader.TimeDateStamp) = 0;
    OutHeaders.OptionalHeader.SizeOfImage = 0;
    v18 = -1073741308;
    while ( 1 )
    {
      if ( !SizeOfStackCommit )
        goto LABEL_52;
      SectionAlignment = OutHeaders.OptionalHeader.SectionAlignment;
      v20 = --OutHeaders.OptionalHeader.SectionAlignment;
      if ( !SectionAlignment )
        goto LABEL_52;
      if ( !v20 && v9 == 3 )
        *(_QWORD *)&OutHeaders.OptionalHeader.CheckSum = SizeOfStackCommit;
      if ( *(_QWORD *)&OutHeaders.OptionalHeader.CheckSum )
      {
        Signature = 0;
        OutHeaders.Signature = 0;
        v48[0] = 0;
        v32 = *(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion;
        LOWORD(OutHeaders.FileHeader.TimeDateStamp) = *(_WORD *)(*(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion
                                                               + 16LL);
        v49 = (OutHeaders.FileHeader.TimeDateStamp & 0x3FF) == 0;
        while ( 1 )
        {
          v33 = OutHeaders.OptionalHeader.AddressOfEntryPoint++;
          if ( v33 )
          {
            switch ( v33 )
            {
              case 1u:
                if ( (~NumberOfSymbols & 0x20000) == 0
                  || (~NumberOfSymbols & 0x80000) == 0
                  || (~(_BYTE)NumberOfSymbols & 0x10) == 0 )
                {
                  goto LABEL_68;
                }
                OutHeaders.OptionalHeader.DataDirectory[5] = *(_IMAGE_DATA_DIRECTORY *)v32;
                if ( v9 < 2 )
                  v35 = 0LL;
                else
                  v35 = *(_IMAGE_DATA_DIRECTORY *)(v32 + 8);
                OutHeaders.OptionalHeader.DataDirectory[6] = v35;
                if ( v9 == 3 )
                  v36 = *(_IMAGE_DATA_DIRECTORY *)(v32 + 16);
                else
                  v36 = 0LL;
                OutHeaders.OptionalHeader.DataDirectory[7] = v36;
                if ( *(_DWORD *)&OutHeaders.OptionalHeader.Magic == 4 )
                  OutHeaders.OptionalHeader.DataDirectory[8] = *(_IMAGE_DATA_DIRECTORY *)(v32 + 24);
                result = LdrpLoadResourceFromAlternativeModule((PVOID)BaseOfImage, OutHeaders.OptionalHeader.ImageBase);
                DefaultLocale = result;
                if ( (int)result < 0 )
                  goto LABEL_68;
                return result;
              case 2u:
                if ( v49 )
                  goto LABEL_68;
                TimeDateStamp_low = LOWORD(OutHeaders.FileHeader.TimeDateStamp);
                goto LABEL_69;
              case 3u:
                if ( (NumberOfSymbols & 4) != 0 )
                  return 3221225988LL;
                if ( v49 )
                  goto LABEL_68;
                ParentLangId = LdrpGetParentLangId(Signature, v48);
                if ( ParentLangId < 0 )
                  goto LABEL_86;
                OutHeaders.Signature = v48[0];
                if ( v48[0] )
                  --OutHeaders.OptionalHeader.AddressOfEntryPoint;
                break;
              case 4u:
                if ( v49 )
                  goto LABEL_68;
                TimeDateStamp_low = LOWORD(OutHeaders.FileHeader.TimeDateStamp);
                LOWORD(TimeDateStamp_low) = OutHeaders.FileHeader.TimeDateStamp & 0x3FF;
                goto LABEL_69;
              case 5u:
                if ( v49 )
                  goto LABEL_68;
                return 3221225988LL;
              case 6u:
                OutHeaders.Signature = LOWORD(OutHeaders.OptionalHeader.SizeOfInitializedData);
                v48[0] = OutHeaders.OptionalHeader.SizeOfInitializedData;
                if ( (NumberOfSymbols & 0x20) != 0 )
                  break;
                v48[0] = 0;
                if ( (unsigned __int8)LdrpSetThreadPreferredLangList() )
                {
                  v38 = *((unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages + 2);
                  if ( OutHeaders.OptionalHeader.Win32VersionValue >= v38 )
                  {
                    v48[0] = 0;
                  }
                  else
                  {
                    Win32VersionValue = OutHeaders.OptionalHeader.Win32VersionValue;
                    GetLCIDFromLangListNodeWithLICCheck(
                      v38,
                      NtCurrentTeb()->MergedPrefLanguages,
                      OutHeaders.OptionalHeader.Win32VersionValue,
                      (unsigned int)v48,
                      (__int64)&OutHeaders.OptionalHeader.MajorSubsystemVersion);
                    OutHeaders.Signature = v48[0];
                    if ( v48[0] )
                    {
                      OutHeaders.OptionalHeader.Win32VersionValue = Win32VersionValue + 1;
                      --OutHeaders.OptionalHeader.AddressOfEntryPoint;
                      NumberOfSymbols = OutHeaders.FileHeader.NumberOfSymbols;
                      break;
                    }
                  }
                  NumberOfSymbols = OutHeaders.FileHeader.NumberOfSymbols;
                }
                else
                {
                  v48[0] = 0;
                }
                goto LABEL_68;
              case 7u:
                if ( (~NumberOfSymbols & 0x80000) == 0 )
                  goto LABEL_68;
                RcConfig = LdrpGetRcConfig((PVOID)BaseOfImage, 0x180000000LL, 0, 1);
                if ( !RcConfig )
                  goto LABEL_68;
                if ( *RcConfig != -20054323 )
                  goto LABEL_68;
                v46 = (unsigned int)RcConfig[31];
                if ( !(_DWORD)v46 )
                  goto LABEL_68;
                RtlInitUnicodeString(
                  (PUNICODE_STRING)&OutHeaders.OptionalHeader.DataDirectory[3],
                  (PCWSTR)((char *)RcConfig + v46));
                if ( !RtlCultureNameToLCID(
                        (PUNICODE_STRING)&OutHeaders.OptionalHeader.DataDirectory[3],
                        &OutHeaders.OptionalHeader.SizeOfHeaders) )
                  goto LABEL_68;
                TimeDateStamp_low = LOWORD(OutHeaders.OptionalHeader.SizeOfHeaders);
                goto LABEL_69;
              case 8u:
                OutHeaders.Signature = LOWORD(OutHeaders.OptionalHeader.SizeOfInitializedData);
                v48[0] = OutHeaders.OptionalHeader.SizeOfInitializedData;
                if ( (~NumberOfSymbols & 0x80000) != 0 )
                  goto LABEL_155;
                if ( NtCurrentTeb() )
                {
                  TimeDateStamp_low = LOWORD(NtCurrentTeb()->CurrentLocale);
                  v48[0] = TimeDateStamp_low;
                }
                else
                {
                  TimeDateStamp_low = v48[0];
                }
                NumberOfSymbols = OutHeaders.FileHeader.NumberOfSymbols;
                goto LABEL_70;
              case 9u:
                OutHeaders.Signature = LOWORD(OutHeaders.OptionalHeader.SizeOfInitializedData);
                v48[0] = OutHeaders.OptionalHeader.SizeOfInitializedData;
                DefaultLocale = NtQueryDefaultLocale(1u, &OutHeaders.OptionalHeader.SizeOfImage);
                if ( DefaultLocale < 0 )
                  break;
                TimeDateStamp_low = LOWORD(OutHeaders.OptionalHeader.SizeOfImage);
                goto LABEL_69;
              case 0xAu:
                OutHeaders.Signature = LOWORD(OutHeaders.OptionalHeader.SizeOfInitializedData);
                v48[0] = OutHeaders.OptionalHeader.SizeOfInitializedData;
                DefaultLocale = NtQueryDefaultLocale(0, (PLCID)&OutHeaders.OptionalHeader.SizeOfHeapCommit);
                if ( DefaultLocale < 0 )
                  break;
                TimeDateStamp_low = OutHeaders.OptionalHeader.SizeOfHeapCommit;
                if ( LODWORD(OutHeaders.OptionalHeader.SizeOfHeapCommit) == OutHeaders.OptionalHeader.SizeOfImage )
                  break;
                goto LABEL_69;
              case 0xBu:
                TimeDateStamp_low = 1033;
                goto LABEL_69;
              case 0xCu:
LABEL_155:
                NumberOfSymbols |= 0x20u;
                OutHeaders.FileHeader.NumberOfSymbols = NumberOfSymbols;
                break;
              default:
                return 3221225988LL;
            }
          }
          else
          {
            if ( LOWORD(OutHeaders.FileHeader.TimeDateStamp) )
            {
              if ( (NumberOfSymbols & 0x80000) != 0 )
                TimeDateStamp_low = LOWORD(OutHeaders.FileHeader.TimeDateStamp);
              else
LABEL_68:
                TimeDateStamp_low = LOWORD(OutHeaders.OptionalHeader.SizeOfInitializedData);
            }
            else
            {
LABEL_86:
              TimeDateStamp_low = 0;
            }
LABEL_69:
            v48[0] = TimeDateStamp_low;
LABEL_70:
            OutHeaders.Signature = TimeDateStamp_low;
          }
          if ( (~(_BYTE)NumberOfSymbols & 0x20) == 0 )
            break;
          Signature = OutHeaders.Signature;
          if ( LOWORD(OutHeaders.Signature) != *(_QWORD *)&OutHeaders.OptionalHeader.SizeOfInitializedData )
            goto LABEL_73;
LABEL_75:
          v32 = *(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion;
        }
        Signature = OutHeaders.Signature;
LABEL_73:
        *(_QWORD *)&OutHeaders.OptionalHeader.SizeOfInitializedData = Signature;
        p_SizeOfInitializedData = (unsigned __int64 *)&OutHeaders.OptionalHeader.SizeOfInitializedData;
        OutHeaders.OptionalHeader.DataDirectory[1] = (_IMAGE_DATA_DIRECTORY)&OutHeaders.OptionalHeader.SizeOfInitializedData;
        SizeOfStackCommit = *(_QWORD *)&OutHeaders.OptionalHeader.CheckSum;
        OutHeaders.OptionalHeader.SizeOfStackCommit = *(_QWORD *)&OutHeaders.OptionalHeader.CheckSum;
      }
      v21 = *(unsigned __int16 *)(SizeOfStackCommit + 14);
      v22 = *(unsigned __int16 *)(SizeOfStackCommit + 12);
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
      DefaultLocale = result;
      if ( (int)result < 0 )
        return result;
      v24 = 8LL * v23;
      OutHeaders.OptionalHeader.DataDirectory[2] = (_IMAGE_DATA_DIRECTORY)v24;
      if ( v24 > 0xFFFFFFFF )
      {
        LODWORD(v24) = -1;
        v25 = -1073741675;
      }
      else
      {
        v25 = 0;
      }
      DefaultLocale = v25;
      if ( v25 < 0 )
        return (unsigned int)v25;
      v26 = (unsigned int *)(SizeOfStackCommit + 16);
      OutHeaders.OptionalHeader.DataDirectory[0] = (_IMAGE_DATA_DIRECTORY)(SizeOfStackCommit + 16);
      v27 = *(_QWORD *)&OutHeaders.OptionalHeader.LoaderFlags + (BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
      if ( SizeOfStackCommit + 16 + (unsigned int)v24 > v27 )
        return 3221225595LL;
      String1 = (wchar_t *)*p_SizeOfInitializedData;
      if ( (*p_SizeOfInitializedData & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v26 += 2 * v22;
        OutHeaders.OptionalHeader.DataDirectory[0] = (_IMAGE_DATA_DIRECTORY)v26;
        LOWORD(v22) = v21;
      }
      if ( !(_WORD)v22 )
      {
        switch ( v9 - OutHeaders.OptionalHeader.SectionAlignment )
        {
          case 1u:
            v18 = -1073741686;
            goto LABEL_124;
          case 2u:
            v18 = -1073741685;
LABEL_124:
            DefaultLocale = v18;
            if ( (NumberOfSymbols & 0x2040000) != 0 )
            {
LABEL_125:
              v41 = *(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion;
              v42 = *(_DWORD *)&OutHeaders.OptionalHeader.Magic;
              goto LABEL_126;
            }
            v41 = *(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion;
            v42 = *(_DWORD *)&OutHeaders.OptionalHeader.Magic;
            if ( v9 == 3 )
            {
              OutHeaders.OptionalHeader.DataDirectory[5] = **(_IMAGE_DATA_DIRECTORY **)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion;
              OutHeaders.OptionalHeader.DataDirectory[6] = *(_IMAGE_DATA_DIRECTORY *)(*(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion
                                                                                    + 8LL);
              OutHeaders.OptionalHeader.DataDirectory[7] = *(_IMAGE_DATA_DIRECTORY *)(*(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion
                                                                                    + 16LL);
              if ( *(_DWORD *)&OutHeaders.OptionalHeader.Magic == 4 )
                OutHeaders.OptionalHeader.DataDirectory[8] = *(_IMAGE_DATA_DIRECTORY *)(*(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion
                                                                                      + 24LL);
              ImageBase = OutHeaders.OptionalHeader.ImageBase;
              v44 = LdrpLoadResourceFromAlternativeModule((PVOID)BaseOfImage, OutHeaders.OptionalHeader.ImageBase);
              if ( v44 != -1073020927 && v44 != -1073020922 )
              {
                v18 = v44;
                DefaultLocale = v44;
              }
            }
            else
            {
LABEL_126:
              ImageBase = OutHeaders.OptionalHeader.ImageBase;
            }
            if ( v18 + 1073741686 <= 1
              && (~NumberOfSymbols & 0x20000) != 0
              && (~NumberOfSymbols & 0x80000) != 0
              && (~(_BYTE)NumberOfSymbols & 0x10) != 0
              && v9 == 3 )
            {
              OutHeaders.OptionalHeader.DataDirectory[5] = *(_IMAGE_DATA_DIRECTORY *)v41;
              OutHeaders.OptionalHeader.DataDirectory[6] = *(_IMAGE_DATA_DIRECTORY *)(v41 + 8);
              OutHeaders.OptionalHeader.DataDirectory[7] = *(_IMAGE_DATA_DIRECTORY *)(v41 + 16);
              if ( v42 == 4 )
                OutHeaders.OptionalHeader.DataDirectory[8] = *(_IMAGE_DATA_DIRECTORY *)(v41 + 24);
              v18 = LdrpLoadResourceFromAlternativeModule((PVOID)BaseOfImage, ImageBase);
              DefaultLocale = v18;
            }
            break;
          case 3u:
            DefaultLocale = -1073741308;
            break;
          default:
            v18 = -1073741811;
            DefaultLocale = -1073741811;
            goto LABEL_125;
        }
        return v18;
      }
      if ( *(_QWORD *)&OutHeaders.OptionalHeader.CheckSum && (NumberOfSymbols & 0x20) != 0 )
        break;
      if ( !(unsigned __int8)ResourceEntryBinarySearch(
                               BaseOfImage,
                               OutHeaders.OptionalHeader.LoaderFlags,
                               (unsigned __int16)v22,
                               OutHeaders.OptionalHeader.SizeOfHeapReserve,
                               (__int64)v26,
                               String1,
                               (__int64)&OutHeaders.OptionalHeader.SizeOfStackCommit,
                               (__int64)&OutHeaders.OptionalHeader.SizeOfStackReserve) )
        return 3221225595LL;
      OutHeaders.OptionalHeader.DataDirectory[1] = (_IMAGE_DATA_DIRECTORY)++p_SizeOfInitializedData;
      SizeOfStackCommit = OutHeaders.OptionalHeader.SizeOfStackCommit;
      SizeOfStackReserve = OutHeaders.OptionalHeader.SizeOfStackReserve;
      Signature = OutHeaders.Signature;
    }
    SizeOfStackCommit = 0LL;
    OutHeaders.OptionalHeader.SizeOfStackCommit = 0LL;
    *(_QWORD *)&OutHeaders.OptionalHeader.SizeOfInitializedData = *v26;
    SizeOfStackReserve = OutHeaders.OptionalHeader.SizeOfHeapReserve + v26[1];
    if ( SizeOfStackReserve > v27 )
      return 3221225595LL;
    OutHeaders.OptionalHeader.SizeOfStackReserve = OutHeaders.OptionalHeader.SizeOfHeapReserve + v26[1];
    Signature = OutHeaders.Signature;
LABEL_52:
    if ( SizeOfStackReserve && (NumberOfSymbols & 2) == 0 )
    {
      v29 = OutHeaders.OptionalHeader.ImageBase;
      *(_QWORD *)OutHeaders.OptionalHeader.ImageBase = SizeOfStackReserve;
      if ( !NtCurrentTeb()->ResourceRetValue )
      {
        OutHeaders.OptionalHeader.SizeOfHeapReserve = (unsigned __int64)NtCurrentTeb();
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x18uLL);
        *(_QWORD *)(OutHeaders.OptionalHeader.SizeOfHeapReserve + 6160) = Heap;
      }
      if ( NtCurrentTeb()->ResourceRetValue )
      {
        *(_QWORD *)NtCurrentTeb()->ResourceRetValue = BaseOfImage;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) = OutHeaders.OptionalHeader.SizeOfStackReserve;
        *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2) = BaseOfImage;
      }
      v18 = 0;
      DefaultLocale = 0;
      NumberOfSymbols = OutHeaders.FileHeader.NumberOfSymbols;
      goto LABEL_59;
    }
    if ( SizeOfStackCommit && (NumberOfSymbols & 2) != 0 )
    {
      v29 = OutHeaders.OptionalHeader.ImageBase;
      *(_QWORD *)OutHeaders.OptionalHeader.ImageBase = SizeOfStackCommit;
      v18 = 0;
      DefaultLocale = 0;
    }
    else
    {
      if ( v9 - OutHeaders.OptionalHeader.SectionAlignment == 3 )
      {
        DefaultLocale = -1073741308;
        if ( *(_QWORD *)&OutHeaders.OptionalHeader.CheckSum )
        {
          OutHeaders.OptionalHeader.SizeOfStackReserve = 0LL;
          goto LABEL_75;
        }
      }
      else
      {
        if ( v9 - OutHeaders.OptionalHeader.SectionAlignment != 1 )
        {
          v29 = OutHeaders.OptionalHeader.ImageBase;
          if ( v9 - OutHeaders.OptionalHeader.SectionAlignment == 2 )
          {
            v18 = -1073741685;
            DefaultLocale = -1073741685;
          }
          else
          {
            v18 = -1073741811;
            DefaultLocale = -1073741811;
          }
          goto LABEL_59;
        }
        v18 = -1073741686;
        DefaultLocale = -1073741686;
      }
      v29 = OutHeaders.OptionalHeader.ImageBase;
    }
LABEL_59:
    v30 = *(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion;
    v31 = *(_DWORD *)&OutHeaders.OptionalHeader.Magic;
    if ( (NumberOfSymbols & 0x2040000) == 0 && v18 + 1073741686 <= 1 && v9 == 3 )
    {
      OutHeaders.OptionalHeader.DataDirectory[5] = **(_IMAGE_DATA_DIRECTORY **)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion;
      OutHeaders.OptionalHeader.DataDirectory[6] = *(_IMAGE_DATA_DIRECTORY *)(*(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion
                                                                            + 8LL);
      OutHeaders.OptionalHeader.DataDirectory[7] = *(_IMAGE_DATA_DIRECTORY *)(*(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion
                                                                            + 16LL);
      if ( *(_DWORD *)&OutHeaders.OptionalHeader.Magic == 4 )
        OutHeaders.OptionalHeader.DataDirectory[8] = *(_IMAGE_DATA_DIRECTORY *)(*(_QWORD *)&OutHeaders.OptionalHeader.MajorOperatingSystemVersion
                                                                              + 24LL);
      v37 = LdrpLoadResourceFromAlternativeModule((PVOID)BaseOfImage, v29);
      if ( v37 != -1073020927 && v37 != -1073020922 )
      {
        v18 = v37;
        DefaultLocale = v37;
      }
    }
    if ( v18 + 1073741686 <= 1
      && (~NumberOfSymbols & 0x20000) != 0
      && (~NumberOfSymbols & 0x80000) != 0
      && (~(_BYTE)NumberOfSymbols & 0x10) != 0
      && v9 == 3 )
    {
      OutHeaders.OptionalHeader.DataDirectory[5] = *(_IMAGE_DATA_DIRECTORY *)v30;
      OutHeaders.OptionalHeader.DataDirectory[6] = *(_IMAGE_DATA_DIRECTORY *)(v30 + 8);
      OutHeaders.OptionalHeader.DataDirectory[7] = *(_IMAGE_DATA_DIRECTORY *)(v30 + 16);
      if ( v31 == 4 )
        OutHeaders.OptionalHeader.DataDirectory[8] = *(_IMAGE_DATA_DIRECTORY *)(v30 + 24);
      v18 = LdrpLoadResourceFromAlternativeModule((PVOID)BaseOfImage, v29);
      DefaultLocale = v18;
    }
    return v18;
  }
  return result;
}
