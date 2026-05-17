/*
 * XREFs of RtlpSetPreferredUILanguages @ 0x1800FC470
 * Callers:
 *     RtlpSetInstallLanguage @ 0x1800FBDB0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18004B090 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18004B690 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006DCA0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006DCD0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18006E290 (RtlpCheckMuiMultiStringSafe.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F1DC (OpenGlobalizationUserSettingsKey.c)
 *     RtlUnicodeStringToInteger @ 0x18007C230 (RtlUnicodeStringToInteger.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180091338 (RtlUpdateProcessRegistryInfo.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1800A4410 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A4C60 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A5FE0 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A6B40 (NtQueryInstallUILanguage.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlStringCchCatW @ 0x1800FA8E4 (RtlStringCchCatW.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x1800FADAC (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800FB600 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetMultiStringLength @ 0x1800FBBD8 (RtlpGetMultiStringLength.c)
 *     RtlpSetInstallLanguage @ 0x1800FBDB0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800FC298 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x180111218 (RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId.c)
 */

__int64 __fastcall RtlpSetPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  __int16 v3; // di
  WCHAR *v4; // r13
  unsigned int v5; // r12d
  int v6; // r14d
  __int64 v7; // r15
  int InstallUILanguage; // ebx
  int v9; // eax
  __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // si
  int v13; // eax
  __int64 Buffer; // rdx
  __int16 MaximumLength; // r12
  __int64 v16; // rdx
  wchar_t *Heap; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // r15
  const WCHAR *v20; // rsi
  const WCHAR *v21; // r14
  unsigned int v22; // r15d
  int v23; // eax
  unsigned __int16 v24; // si
  __int64 v25; // rax
  int v26; // ecx
  int FallbackInstalledLanguageInfoByLangId; // eax
  __int128 *v28; // rax
  _WORD *v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned int v33; // esi
  _WORD *v34; // r14
  const WCHAR *v35; // r12
  __int16 Length; // r15
  int v37; // r13d
  _WORD *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  wchar_t *v44; // rcx
  unsigned int v45; // esi
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // [rsp+40h] [rbp-C0h]
  unsigned int v51; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v52[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  _WORD v53[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v54; // [rsp+54h] [rbp-ACh]
  unsigned int v55; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING v56; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v57; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v58; // [rsp+80h] [rbp-80h]
  int v59; // [rsp+84h] [rbp-7Ch]
  unsigned int v60; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v61; // [rsp+8Ch] [rbp-74h]
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v65; // [rsp+B8h] [rbp-48h]
  __int128 *v66; // [rsp+C0h] [rbp-40h]
  HANDLE v67; // [rsp+C8h] [rbp-38h]
  HANDLE v68; // [rsp+D0h] [rbp-30h]
  WCHAR *v69; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t *v70; // [rsp+E0h] [rbp-20h]
  wchar_t *v71; // [rsp+E8h] [rbp-18h]
  HANDLE v72; // [rsp+F0h] [rbp-10h] BYREF
  int i; // [rsp+F8h] [rbp-8h]
  __int64 v74; // [rsp+100h] [rbp+0h]
  _DWORD *v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h]
  UNICODE_STRING *v78; // [rsp+120h] [rbp+20h]
  int v79; // [rsp+128h] [rbp+28h]
  __int128 v80; // [rsp+130h] [rbp+30h]
  int v81; // [rsp+140h] [rbp+40h]
  HANDLE v82; // [rsp+148h] [rbp+48h]
  UNICODE_STRING *v83; // [rsp+150h] [rbp+50h]
  int v84; // [rsp+158h] [rbp+58h]
  __int128 v85; // [rsp+160h] [rbp+60h]
  int v86; // [rsp+170h] [rbp+70h]
  HANDLE v87; // [rsp+178h] [rbp+78h]
  UNICODE_STRING *v88; // [rsp+180h] [rbp+80h]
  int v89; // [rsp+188h] [rbp+88h]
  __int128 v90; // [rsp+190h] [rbp+90h]
  int v91; // [rsp+1A0h] [rbp+A0h]
  __int64 v92; // [rsp+1A8h] [rbp+A8h]
  UNICODE_STRING *v93; // [rsp+1B0h] [rbp+B0h]
  int v94; // [rsp+1B8h] [rbp+B8h]
  __int128 v95; // [rsp+1C0h] [rbp+C0h]
  int v96; // [rsp+1D0h] [rbp+D0h]
  HANDLE v97; // [rsp+1D8h] [rbp+D8h]
  UNICODE_STRING *v98; // [rsp+1E0h] [rbp+E0h]
  int v99; // [rsp+1E8h] [rbp+E8h]
  __int128 v100; // [rsp+1F0h] [rbp+F0h]
  __int128 v101; // [rsp+200h] [rbp+100h] BYREF
  __int64 v102; // [rsp+210h] [rbp+110h]
  int v103; // [rsp+218h] [rbp+118h]

  LOBYTE(v3) = a1;
  v75 = a3;
  v72 = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  v4 = a2;
  Handle = 0LL;
  v5 = 0;
  v61 = 0;
  v6 = 0;
  v55 = 0;
  v7 = 0LL;
  v65 = 0;
  v51 = 0;
  v52[0] = 0;
  v66 = 0LL;
  v102 = 0LL;
  v103 = 0;
  v50 = 0LL;
  v54 = 0;
  v64 = 0LL;
  v71 = 0LL;
  v69 = 0LL;
  v58 = 0;
  v70 = 0LL;
  v74 = 0LL;
  v101 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  v9 = 18440;
  if ( a1 )
    v9 = a1;
  if ( (LOBYTE(v3) = v9, (v9 & 0xFFFF0363) != 0)
    || (v9 & 0x400) != 0 && (!a2 || (v9 & 0xFFFFFBF3) != 0)
    || (v9 & 0x8000) != 0 && (!a2 || (v9 & 0xFFFF6773) != 0)
    || (v9 & 0xC) == 0xC
    || (v9 & 0x1800) == 0x1800
    || (v9 & 0x10) != 0 && (v9 & 0x7080) != 0 )
  {
LABEL_2:
    InstallUILanguage = -1073741811;
LABEL_105:
    if ( (v3 & 0x80u) != 0 && v64 )
      RtlpMuiFreeLangRegistryInfo(v64);
    *v75 = v5 + v6 + v65;
    return (unsigned int)InstallUILanguage;
  }
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v11 = v10 | 0x4000;
  if ( (v10 & 0xE410) != 0 )
    v11 = v10;
  v12 = v11 | 0x800;
  if ( (v11 & 0x1C00) != 0 )
    v12 = v11;
  if ( (v12 & 0x80u) == 0 )
    v13 = RtlpCreateProcessRegistryInfo(&v64);
  else
    v13 = RtlpInitializeLangRegistryInfo(&v64);
  InstallUILanguage = v13;
  if ( v13 >= 0 )
  {
    MaximumLength = 4;
    if ( v4 )
    {
      v16 = 4LL;
      if ( (v12 & 4) == 0 )
        v16 = 85LL;
      if ( (int)RtlpCheckMuiMultiStringSafe(v4, v16) < 0 )
        DbgPrint(
          "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlpSetPreferredUILanguages is not a valid multi-string!\n");
      v3 = v12;
      if ( (v12 & 0x400) != 0 )
      {
        InstallUILanguage = NtQueryInstallUILanguage();
        if ( InstallUILanguage < 0 )
        {
LABEL_94:
          if ( Handle )
          {
            NtClose(Handle);
            Handle = 0LL;
          }
          if ( v67 )
          {
            NtClose(v67);
            v67 = 0LL;
          }
          if ( v68 )
          {
            NtClose(v68);
            v68 = 0LL;
          }
          if ( v72 )
          {
            NtClose(v72);
            v72 = 0LL;
          }
          if ( v7 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
          v5 = v61;
          v6 = v55;
          goto LABEL_105;
        }
        Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 522LL);
        v70 = Heap;
        if ( !Heap )
        {
          InstallUILanguage = -1073741801;
          goto LABEL_94;
        }
        v56.Buffer = Heap;
        *(_DWORD *)&v56.Length = 11141120;
        if ( !RtlLCIDToCultureName(v58, (__int64)&v56) )
        {
          v18 = (__int64)v70;
          InstallUILanguage = -1073741811;
LABEL_91:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v18);
LABEL_92:
          if ( v71 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v71);
          goto LABEL_94;
        }
        v19 = (unsigned __int64)v56.Length >> 1;
        if ( (v12 & 4) != 0 )
        {
          InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, (__int64 *)&v69);
          if ( InstallUILanguage < 0 )
          {
            v7 = 0LL;
            goto LABEL_88;
          }
          v4 = v69;
          v3 = v12 & 0xFFF3 | 8;
        }
        InstallUILanguage = RtlpGetMultiStringLength(v4, v53, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_111;
        v20 = v70;
        memmove(&v70[v19 + 1], v4, 2LL * ((unsigned int)v53[0] + 1));
        v7 = 0LL;
        InstallUILanguage = RtlpAutoCompleteLanguageFallback(v64, v20);
        if ( InstallUILanguage < 0 )
        {
LABEL_88:
          if ( v69 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v69);
          v18 = (__int64)v70;
          if ( !v70 )
            goto LABEL_92;
          goto LABEL_91;
        }
        v4 = (WCHAR *)v20;
      }
      InstallUILanguage = RtlpGetMultiStringLength(v4, &v57, &v51);
      if ( InstallUILanguage < 0 )
        goto LABEL_88;
      v57.Buffer = v4;
      v57.Length *= 2;
      v57.MaximumLength = v57.Length + 2;
      if ( v51 - 1 > 2 )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_88;
      }
      v21 = v4;
      v71 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
      if ( !v71 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_88;
      }
      v22 = v51;
      v59 = 0;
      if ( v51 )
      {
        v23 = v3 & 4;
        for ( i = v23; ; v23 = i )
        {
          if ( v23 )
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v60) < 0 )
              goto LABEL_110;
            v24 = v60;
            if ( ((v60 - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_86;
            DestinationString.Buffer = v71;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v60, (__int64)&DestinationString) )
            {
              InstallUILanguage = -1073741811;
              v7 = 0LL;
              goto LABEL_88;
            }
            Buffer = (__int64)DestinationString.Buffer;
            v25 = -1LL;
            do
              ++v25;
            while ( DestinationString.Buffer[v25] );
            v54 += v25 + 1;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( !RtlCultureNameToLCID(&DestinationString.Length, &v60) )
              goto LABEL_110;
            v24 = v60;
            if ( ((v60 - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_86;
            Buffer = (__int64)DestinationString.Buffer;
          }
          v26 = v59;
          if ( v59 )
          {
            if ( v59 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*(_BYTE *)v66 & 1) != 0 )
                goto LABEL_86;
              if ( (*(_BYTE *)v66 & 2) != 0 )
              {
                v29 = v53;
              }
              else
              {
                if ( (*(_BYTE *)v66 & 4) == 0 || v22 > 2 )
                  goto LABEL_86;
                v29 = v52;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v64,
                                                        (_DWORD)v66,
                                                        v24,
                                                        (unsigned int)&v101,
                                                        (__int64)v29);
            }
            else
            {
              if ( v59 != 2 )
                goto LABEL_78;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v64,
                                                        (_DWORD)v66,
                                                        v24,
                                                        (unsigned int)&v101,
                                                        (__int64)v53);
            }
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
            {
LABEL_110:
              InstallUILanguage = -1073741811;
LABEL_111:
              v7 = 0LL;
              goto LABEL_88;
            }
            v28 = &v101;
          }
          else
          {
            v30 = v64;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v64, (const WCHAR *)Buffer, 1, v52) < 0 )
              goto LABEL_86;
            v28 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v30 + 24) + 16LL) + 28LL * v52[0]);
          }
          v26 = v59;
          v66 = v28;
LABEL_78:
          if ( v21 )
          {
            v31 = -1LL;
            Buffer = 0LL;
            do
              ++v31;
            while ( v21[v31] );
            v21 += v31 + 1;
          }
          else
          {
            v21 = 0LL;
          }
          v59 = v26 + 1;
          if ( v26 + 1 >= v22 )
            break;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v33 = v54 + 1;
        v54 = v33;
        if ( v33 > 0xFFFF )
          goto LABEL_86;
        v7 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v33);
        v50 = v7;
        if ( !v7 )
        {
          InstallUILanguage = -1073741670;
          goto LABEL_88;
        }
        v34 = (_WORD *)v7;
        v57.Buffer = (wchar_t *)v7;
        v35 = v4;
        Length = 2 * v33;
        v37 = 0;
        v38 = v34;
        v57.Length = Length;
        v57.MaximumLength = Length;
        if ( v51 )
        {
          while ( 1 )
          {
            RtlInitUnicodeString(&DestinationString, v35);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v60) < 0 )
              break;
            DestinationString.Buffer = v71;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v60, (__int64)&DestinationString) )
              break;
            if ( (int)RtlStringCchCatW(v38, v54, (__int64)DestinationString.Buffer) < 0 )
            {
              InstallUILanguage = -1073741670;
              goto LABEL_134;
            }
            Buffer = -1LL;
            v39 = -1LL;
            do
              ++v39;
            while ( v38[v39] );
            v54 += -1 - v39;
            if ( v38 )
            {
              v40 = -1LL;
              do
                ++v40;
              while ( v38[v40] );
              v38 += v40 + 1;
            }
            if ( v35 )
            {
              v41 = -1LL;
              do
                ++v41;
              while ( v35[v41] );
              v35 += v41 + 1;
            }
            else
            {
              v35 = 0LL;
            }
            if ( ++v37 >= v51 )
              goto LABEL_132;
          }
          InstallUILanguage = -1073741811;
LABEL_134:
          v7 = (__int64)v34;
          goto LABEL_88;
        }
LABEL_132:
        v57.MaximumLength = Length;
        *v38 = 0;
        v4 = v34;
        MaximumLength = Length;
      }
      else
      {
        v34 = v57.Buffer;
        MaximumLength = v57.MaximumLength;
        Length = v57.Length;
      }
    }
    else
    {
      v34 = &unk_18014810C;
      *(_DWORD *)&v57.Length = 262146;
      v57.Buffer = (wchar_t *)&unk_18014810C;
      Length = 2;
      v3 = v12;
    }
    if ( (v3 & 0x400) != 0 )
    {
      RtlInitUnicodeString(&v56, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v76 = 48;
      v77 = 0LL;
      v79 = 64;
      v78 = &v56;
      v80 = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      RtlInitUnicodeString(&v56, L"InstallLanguageFallback");
      v42 = -1LL;
      do
        ++v42;
      while ( v34[v42] );
      v57.MaximumLength = -2 - 2 * v42 + MaximumLength;
      if ( v34 )
      {
        v43 = -1LL;
        do
          ++v43;
        while ( v34[v43] );
        v44 = &v34[v43 + 1];
      }
      else
      {
        v44 = 0LL;
      }
      v57.Buffer = v44;
      InstallUILanguage = RtlpGetMultiStringLength(v44, &v57, &v51);
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      Length = v57.Length;
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_193;
      v45 = v51;
      MaximumLength = v57.MaximumLength;
      v65 = v51;
    }
    else
    {
      v45 = v51;
    }
    if ( (v3 & 0x10) != 0 )
    {
      InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      v65 = v45;
    }
    if ( (v3 & 0x4000) != 0 )
    {
      InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000u, Buffer, (__int64)&v72);
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      RtlInitUnicodeString(&v56, L"Control Panel\\Desktop");
      v82 = v72;
      v81 = 48;
      v83 = &v56;
      v84 = 64;
      v85 = 0LL;
      InstallUILanguage = NtOpenKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&v56, L"PreferredUILanguagesPending");
      }
      else
      {
        if ( v45 < 2 )
          goto LABEL_86;
        RtlInitUnicodeString(&v56, L"LanguageConfigurationPending");
        v87 = v67;
        v86 = 48;
        v88 = &v56;
        v89 = 64;
        v90 = 0LL;
        InstallUILanguage = ZwCreateKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_87;
        RtlInitUnicodeString(&v56, v4);
        if ( v4 )
        {
          v46 = -1LL;
          do
            ++v46;
          while ( v4[v46] );
          v57.Buffer = &v4[v46 + 1];
        }
        else
        {
          v57.Buffer = 0LL;
        }
        v57.MaximumLength = MaximumLength - v56.MaximumLength;
        v57.Length = Length - v56.MaximumLength;
      }
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      v61 = v45;
    }
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
    }
    if ( (v3 & 0x8800) == 0x8800 )
    {
      DestinationString = v57;
      v47 = RtlpSetMachineUILanguagesImmediate();
      v48 = v45;
      InstallUILanguage = v47;
      v55 = v45;
    }
    else
    {
      v48 = v55;
    }
    if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
    {
      v55 = v48;
      if ( InstallUILanguage >= 0 )
        goto LABEL_190;
LABEL_87:
      v7 = v50;
      goto LABEL_88;
    }
    RtlInitUnicodeString(&v56, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v93 = &v56;
    v91 = 48;
    v92 = 0LL;
    v94 = 64;
    v95 = 0LL;
    InstallUILanguage = ZwCreateKey();
    if ( InstallUILanguage < 0 )
      goto LABEL_87;
    if ( (v3 & 0x800) != 0 )
    {
      RtlInitUnicodeString(&v56, L"PreferredUILanguages");
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
LABEL_189:
      v55 = v45;
LABEL_190:
      if ( (v3 & 0xE410) != 0 )
      {
        ZwGetMUIRegistryInfo();
        if ( (v3 & 0x8410) != 0 )
          RtlUpdateProcessRegistryInfo();
      }
      goto LABEL_87;
    }
    if ( v45 >= 2 )
    {
      RtlInitUnicodeString(&v56, L"LanguageConfiguration");
      v97 = v68;
      v98 = &v56;
      v96 = 48;
      v99 = 64;
      v100 = 0LL;
      Handle = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      RtlInitUnicodeString(&v56, v4);
      if ( v4 )
      {
        v49 = -1LL;
        do
          ++v49;
        while ( v4[v49] );
      }
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage >= 0 )
        goto LABEL_189;
LABEL_193:
      v7 = v50;
      goto LABEL_88;
    }
LABEL_86:
    InstallUILanguage = -1073741811;
    goto LABEL_87;
  }
  return (unsigned int)InstallUILanguage;
}
