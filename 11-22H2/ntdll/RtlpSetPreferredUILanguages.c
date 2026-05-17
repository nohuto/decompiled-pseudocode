/*
 * XREFs of RtlpSetPreferredUILanguages @ 0x1800FC160
 * Callers:
 *     RtlpSetInstallLanguage @ 0x1800FBAA0 (RtlpSetInstallLanguage.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x18000C904 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014994 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18007021C (RtlpCheckMuiMultiStringSafe.c)
 *     RtlUnicodeStringToInteger @ 0x180076E90 (RtlUnicodeStringToInteger.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18008A3A0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18008A420 (RtlpInitializeLangRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008A44C (RtlUpdateProcessRegistryInfo.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     ZwCreateKey @ 0x18009F190 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18009F9E0 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A0D80 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A1920 (NtQueryInstallUILanguage.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlStringCchCatW @ 0x1800FA2D8 (RtlStringCchCatW.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x1800FA79C (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800FAFF0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetMultiStringLength @ 0x1800FB5D0 (RtlpGetMultiStringLength.c)
 *     RtlpSetInstallLanguage @ 0x1800FBAA0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800FBF88 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x180111698 (RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId.c)
 */

__int64 __fastcall RtlpSetPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  __int16 v3; // di
  WCHAR *v4; // r13
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  int InstallUILanguage; // ebx
  int v9; // eax
  __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // si
  int v13; // eax
  __int64 Buffer; // rdx
  __int64 v15; // r9
  __int16 MaximumLength; // r15
  __int64 v17; // rdx
  WCHAR *Heap; // rax
  PCWSTR v19; // r8
  unsigned __int64 v20; // r14
  const WCHAR *v21; // rsi
  const WCHAR *v22; // r14
  unsigned int v23; // r12d
  int v24; // eax
  unsigned __int16 v25; // si
  __int64 v26; // rax
  int v27; // ecx
  int FallbackInstalledLanguageInfoByLangId; // eax
  __int128 *v29; // rax
  _WORD *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax
  unsigned int v34; // esi
  __int64 v35; // rax
  __int16 Length; // r12
  const WCHAR *v37; // r15
  _WORD *v38; // rsi
  _WORD *v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  wchar_t *v45; // rcx
  unsigned int v46; // esi
  __int64 v47; // rax
  int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // rax
  int v51; // [rsp+40h] [rbp-C0h]
  int v52; // [rsp+40h] [rbp-C0h]
  unsigned int v53; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v54[2]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v55[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v56; // [rsp+50h] [rbp-B0h]
  unsigned int v57; // [rsp+54h] [rbp-ACh]
  UNICODE_STRING v58; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v59; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v60; // [rsp+80h] [rbp-80h]
  unsigned int v61; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v62; // [rsp+88h] [rbp-78h]
  unsigned int v63; // [rsp+8Ch] [rbp-74h]
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-50h] BYREF
  int i; // [rsp+B8h] [rbp-48h]
  __int128 *v68; // [rsp+C0h] [rbp-40h]
  HANDLE v69; // [rsp+C8h] [rbp-38h]
  HANDLE v70; // [rsp+D0h] [rbp-30h]
  void *Src; // [rsp+D8h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+E0h] [rbp-20h]
  wchar_t *v73; // [rsp+E8h] [rbp-18h]
  HANDLE v74[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v75; // [rsp+100h] [rbp+0h]
  _DWORD *v76; // [rsp+108h] [rbp+8h]
  int v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h]
  UNICODE_STRING *v79; // [rsp+120h] [rbp+20h]
  int v80; // [rsp+128h] [rbp+28h]
  __int128 v81; // [rsp+130h] [rbp+30h]
  int v82; // [rsp+140h] [rbp+40h]
  HANDLE v83; // [rsp+148h] [rbp+48h]
  UNICODE_STRING *v84; // [rsp+150h] [rbp+50h]
  int v85; // [rsp+158h] [rbp+58h]
  __int128 v86; // [rsp+160h] [rbp+60h]
  int v87; // [rsp+170h] [rbp+70h]
  HANDLE v88; // [rsp+178h] [rbp+78h]
  UNICODE_STRING *v89; // [rsp+180h] [rbp+80h]
  int v90; // [rsp+188h] [rbp+88h]
  __int128 v91; // [rsp+190h] [rbp+90h]
  int v92; // [rsp+1A0h] [rbp+A0h]
  __int64 v93; // [rsp+1A8h] [rbp+A8h]
  UNICODE_STRING *v94; // [rsp+1B0h] [rbp+B0h]
  int v95; // [rsp+1B8h] [rbp+B8h]
  __int128 v96; // [rsp+1C0h] [rbp+C0h]
  int v97; // [rsp+1D0h] [rbp+D0h]
  HANDLE v98; // [rsp+1D8h] [rbp+D8h]
  UNICODE_STRING *v99; // [rsp+1E0h] [rbp+E0h]
  int v100; // [rsp+1E8h] [rbp+E8h]
  __int128 v101; // [rsp+1F0h] [rbp+F0h]
  __int128 v102; // [rsp+200h] [rbp+100h] BYREF
  __int64 v103; // [rsp+210h] [rbp+110h]
  int v104; // [rsp+218h] [rbp+118h]

  LOBYTE(v3) = a1;
  v76 = a3;
  v74[0] = 0LL;
  v70 = 0LL;
  v69 = 0LL;
  v4 = a2;
  Handle = 0LL;
  v5 = 0;
  v62 = 0;
  v6 = 0;
  v57 = 0;
  v7 = 0;
  v63 = 0;
  v53 = 0;
  v54[0] = 0;
  v68 = 0LL;
  v103 = 0LL;
  v104 = 0;
  v75 = 0LL;
  v56 = 0;
  v66 = 0LL;
  v73 = 0LL;
  Src = 0LL;
  v60 = 0;
  SourceString = 0LL;
  v74[1] = 0LL;
  v102 = 0LL;
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
LABEL_103:
    if ( (v3 & 0x80u) != 0 && v66 )
      RtlpMuiFreeLangRegistryInfo(v66);
    *v76 = v5 + v7 + v6;
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
    v13 = RtlpCreateProcessRegistryInfo(&v66);
  else
    v13 = RtlpInitializeLangRegistryInfo(&v66);
  InstallUILanguage = v13;
  if ( v13 >= 0 )
  {
    MaximumLength = 4;
    if ( v4 )
    {
      v17 = 4LL;
      if ( (v12 & 4) == 0 )
        v17 = 85LL;
      if ( (int)RtlpCheckMuiMultiStringSafe(v4, v17) < 0 )
        DbgPrint(
          "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlpSetPreferredUILanguages is not a valid multi-string!\n");
      v3 = v12;
      if ( (v12 & 0x400) != 0 )
      {
        InstallUILanguage = NtQueryInstallUILanguage();
        if ( InstallUILanguage < 0 )
        {
LABEL_92:
          if ( Handle )
          {
            NtClose(Handle);
            Handle = 0LL;
          }
          if ( v69 )
          {
            NtClose(v69);
            v69 = 0LL;
          }
          if ( v70 )
          {
            NtClose(v70);
            v70 = 0LL;
          }
          if ( v74[0] )
          {
            NtClose(v74[0]);
            v74[0] = 0LL;
          }
          if ( v75 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v75);
          v7 = v63;
          v5 = v62;
          goto LABEL_103;
        }
        Heap = (WCHAR *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 522LL);
        SourceString = Heap;
        if ( !Heap )
        {
          InstallUILanguage = -1073741801;
          goto LABEL_92;
        }
        v58.Buffer = Heap;
        *(_DWORD *)&v58.Length = 11141120;
        if ( !RtlLCIDToCultureName(v60, (__int64)&v58) )
        {
          v19 = SourceString;
          InstallUILanguage = -1073741811;
LABEL_88:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v19);
LABEL_89:
          if ( v73 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v73);
          v6 = v57;
          goto LABEL_92;
        }
        v20 = (unsigned __int64)v58.Length >> 1;
        if ( (v12 & 4) != 0 )
        {
          InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, (__int64 *)&Src);
          if ( InstallUILanguage < 0 )
            goto LABEL_85;
          v4 = (WCHAR *)Src;
          v3 = v12 & 0xFFF3 | 8;
        }
        InstallUILanguage = RtlpGetMultiStringLength(v4, v55, 0LL);
        if ( InstallUILanguage < 0
          || (v21 = SourceString,
              memmove((void *)&SourceString[v20 + 1], v4, 2LL * ((unsigned int)v55[0] + 1)),
              InstallUILanguage = RtlpAutoCompleteLanguageFallback(v66, v21),
              InstallUILanguage < 0) )
        {
LABEL_85:
          if ( Src )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Src);
          v19 = SourceString;
          if ( !SourceString )
            goto LABEL_89;
          goto LABEL_88;
        }
        v4 = (WCHAR *)v21;
      }
      InstallUILanguage = RtlpGetMultiStringLength(v4, &v59, &v53);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      v59.Buffer = v4;
      v59.Length *= 2;
      v59.MaximumLength = v59.Length + 2;
      if ( v53 - 1 > 2 )
        goto LABEL_177;
      v22 = v4;
      v73 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
      if ( !v73 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_85;
      }
      v23 = v53;
      v51 = 0;
      if ( v53 )
      {
        v24 = v3 & 4;
        for ( i = v24; ; v24 = i )
        {
          if ( v24 )
          {
            RtlInitUnicodeString(&DestinationString, v22);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v61) < 0 )
              goto LABEL_84;
            v25 = v61;
            if ( ((v61 - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            DestinationString.Buffer = v73;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v61, (__int64)&DestinationString) )
              goto LABEL_84;
            Buffer = (__int64)DestinationString.Buffer;
            v26 = -1LL;
            do
              ++v26;
            while ( DestinationString.Buffer[v26] );
            v56 += v26 + 1;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v22);
            if ( !RtlCultureNameToLCID(&DestinationString.Length, (int *)&v61) )
              goto LABEL_84;
            v25 = v61;
            if ( ((v61 - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            Buffer = (__int64)DestinationString.Buffer;
          }
          v27 = v51;
          if ( v51 )
          {
            if ( v51 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*(_BYTE *)v68 & 1) != 0 )
                goto LABEL_84;
              if ( (*(_BYTE *)v68 & 2) != 0 )
              {
                v30 = v55;
              }
              else
              {
                if ( (*(_BYTE *)v68 & 4) == 0 || v23 > 2 )
                  goto LABEL_84;
                v30 = v54;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v66,
                                                        (_DWORD)v68,
                                                        v25,
                                                        (unsigned int)&v102,
                                                        (__int64)v30);
            }
            else
            {
              if ( v51 != 2 )
                goto LABEL_77;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v66,
                                                        (_DWORD)v68,
                                                        v25,
                                                        (unsigned int)&v102,
                                                        (__int64)v55);
            }
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
              goto LABEL_84;
            v29 = &v102;
          }
          else
          {
            v31 = v66;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v66, (const WCHAR *)Buffer, 1, v54) < 0 )
              goto LABEL_84;
            v29 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v31 + 24) + 16LL) + 28LL * v54[0]);
          }
          v27 = v51;
          v68 = v29;
LABEL_77:
          if ( v22 )
          {
            v32 = -1LL;
            Buffer = 0LL;
            do
              ++v32;
            while ( v22[v32] );
            v22 += v32 + 1;
          }
          else
          {
            v22 = 0LL;
          }
          v51 = v27 + 1;
          if ( v27 + 1 >= v23 )
            break;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v34 = v56 + 1;
        v56 = v34;
        if ( v34 > 0xFFFF )
          goto LABEL_84;
        v35 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v34);
        v75 = v35;
        if ( !v35 )
        {
          InstallUILanguage = -1073741670;
          goto LABEL_85;
        }
        v59.Buffer = (wchar_t *)v35;
        Length = 2 * v34;
        v37 = v4;
        v4 = (WCHAR *)v35;
        v59.Length = Length;
        v38 = (_WORD *)v35;
        v59.MaximumLength = Length;
        v39 = (_WORD *)v35;
        v52 = 0;
        if ( v53 )
        {
          do
          {
            RtlInitUnicodeString(&DestinationString, v37);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v61) < 0 )
              goto LABEL_84;
            DestinationString.Buffer = v73;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v61, (__int64)&DestinationString) )
              goto LABEL_84;
            if ( (int)RtlStringCchCatW(v38, v56, (__int64)DestinationString.Buffer) < 0 )
            {
              InstallUILanguage = -1073741670;
              goto LABEL_85;
            }
            Buffer = -1LL;
            v40 = -1LL;
            do
              ++v40;
            while ( v38[v40] );
            v56 += -1 - v40;
            if ( v38 )
            {
              v41 = -1LL;
              do
                ++v41;
              while ( v38[v41] );
              v38 += v41 + 1;
            }
            else
            {
              v38 = 0LL;
            }
            if ( v37 )
            {
              v42 = -1LL;
              do
                ++v42;
              while ( v37[v42] );
              v37 += v42 + 1;
            }
            else
            {
              v37 = 0LL;
            }
          }
          while ( ++v52 < v53 );
        }
        v59.MaximumLength = Length;
        *v38 = 0;
        MaximumLength = Length;
      }
      else
      {
        v39 = v59.Buffer;
        MaximumLength = v59.MaximumLength;
        Length = v59.Length;
      }
    }
    else
    {
      v39 = &unk_18015219C;
      *(_DWORD *)&v59.Length = 262146;
      v59.Buffer = (wchar_t *)&unk_18015219C;
      Length = 2;
      v3 = v12;
    }
    if ( (v3 & 0x400) != 0 )
    {
      RtlInitUnicodeString(&v58, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v77 = 48;
      v78 = 0LL;
      v80 = 64;
      v79 = &v58;
      v81 = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      RtlInitUnicodeString(&v58, L"InstallLanguageFallback");
      v43 = -1LL;
      do
        ++v43;
      while ( v39[v43] );
      v59.MaximumLength = -2 - 2 * v43 + MaximumLength;
      if ( v39 )
      {
        v44 = -1LL;
        do
          ++v44;
        while ( v39[v44] );
        v45 = &v39[v44 + 1];
      }
      else
      {
        v45 = 0LL;
      }
      v59.Buffer = v45;
      InstallUILanguage = RtlpGetMultiStringLength(v45, &v59, &v53);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      Length = v59.Length;
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      v46 = v53;
      MaximumLength = v59.MaximumLength;
      v63 = v53;
    }
    else
    {
      v46 = v53;
    }
    if ( (v3 & 0x10) != 0 )
    {
      InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      v63 = v46;
    }
    if ( (v3 & 0x4000) == 0 )
      goto LABEL_164;
    InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000u, Buffer, (__int64)v74, v15);
    if ( InstallUILanguage < 0 )
      goto LABEL_85;
    RtlInitUnicodeString(&v58, L"Control Panel\\Desktop");
    v83 = v74[0];
    v82 = 48;
    v84 = &v58;
    v85 = 64;
    v86 = 0LL;
    InstallUILanguage = NtOpenKey();
    if ( InstallUILanguage < 0 )
      goto LABEL_85;
    if ( (v3 & 0x800) != 0 )
    {
      RtlInitUnicodeString(&v58, L"PreferredUILanguagesPending");
LABEL_154:
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      v62 = v46;
LABEL_164:
      if ( Handle )
      {
        NtClose(Handle);
        Handle = 0LL;
      }
      if ( (v3 & 0x8800) == 0x8800 )
      {
        DestinationString = v59;
        v48 = RtlpSetMachineUILanguagesImmediate();
        v49 = v46;
        InstallUILanguage = v48;
        v57 = v46;
      }
      else
      {
        v49 = v57;
      }
      if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
      {
        v57 = v49;
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
LABEL_184:
        if ( (v3 & 0xE410) != 0 )
        {
          ZwGetMUIRegistryInfo();
          if ( (v3 & 0x8410) != 0 )
            RtlUpdateProcessRegistryInfo();
        }
        goto LABEL_85;
      }
      RtlInitUnicodeString(&v58, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v92 = 48;
      v93 = 0LL;
      v95 = 64;
      v94 = &v58;
      v96 = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&v58, L"PreferredUILanguages");
LABEL_182:
        InstallUILanguage = ZwSetValueKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v57 = v46;
        goto LABEL_184;
      }
      if ( v46 >= 2 )
      {
        RtlInitUnicodeString(&v58, L"LanguageConfiguration");
        v98 = v70;
        v97 = 48;
        v99 = &v58;
        v100 = 64;
        v101 = 0LL;
        Handle = 0LL;
        InstallUILanguage = ZwCreateKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&v58, v4);
        if ( v4 )
        {
          v50 = -1LL;
          do
            ++v50;
          while ( v4[v50] );
        }
        goto LABEL_182;
      }
LABEL_177:
      InstallUILanguage = -1073741811;
      goto LABEL_85;
    }
    if ( v46 >= 2 )
    {
      RtlInitUnicodeString(&v58, L"LanguageConfigurationPending");
      v88 = v69;
      v87 = 48;
      v89 = &v58;
      v90 = 64;
      v91 = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      RtlInitUnicodeString(&v58, v4);
      if ( v4 )
      {
        v47 = -1LL;
        do
          ++v47;
        while ( v4[v47] );
        v59.Buffer = &v4[v47 + 1];
      }
      else
      {
        v59.Buffer = 0LL;
      }
      v59.MaximumLength = MaximumLength - v58.MaximumLength;
      v59.Length = Length - v58.MaximumLength;
      goto LABEL_154;
    }
LABEL_84:
    InstallUILanguage = -1073741811;
    goto LABEL_85;
  }
  return (unsigned int)InstallUILanguage;
}
