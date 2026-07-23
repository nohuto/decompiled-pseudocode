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
  unsigned __int16 v15; // r15
  __int64 v16; // rdx
  WCHAR *Heap; // rax
  WCHAR *v18; // r8
  unsigned __int64 v19; // r14
  const WCHAR *v20; // rsi
  const WCHAR *v21; // r14
  unsigned int v22; // r12d
  int v23; // eax
  unsigned __int16 v24; // si
  __int64 v25; // rax
  int v26; // ecx
  int FallbackInstalledLanguageInfoByLangId; // eax
  __int128 *v28; // rax
  _WORD *v29; // rcx
  _QWORD *v30; // rsi
  __int64 v31; // rax
  unsigned int v33; // esi
  PVOID v34; // rax
  __int16 v35; // r12
  const WCHAR *v36; // r15
  _WORD *v37; // rsi
  WCHAR *v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  WCHAR *v44; // rcx
  unsigned int v45; // esi
  HANDLE v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  unsigned int v49; // ecx
  NTSTATUS v50; // eax
  WCHAR *v51; // rcx
  __int64 v52; // rax
  int v53; // [rsp+40h] [rbp-C0h]
  int v54; // [rsp+40h] [rbp-C0h]
  unsigned int v55; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v56[2]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v57[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v58; // [rsp+50h] [rbp-B0h]
  unsigned int v59; // [rsp+54h] [rbp-ACh]
  _UNICODE_STRING String; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Data[2]; // [rsp+70h] [rbp-90h] BYREF
  LANGID InstallUILanguageId[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG Value; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v64; // [rsp+88h] [rbp-78h]
  unsigned int v65; // [rsp+8Ch] [rbp-74h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v68; // [rsp+B0h] [rbp-50h] BYREF
  int i; // [rsp+B8h] [rbp-48h]
  __int128 *v70; // [rsp+C0h] [rbp-40h]
  HANDLE v71; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE v72; // [rsp+D0h] [rbp-30h] BYREF
  void *Src; // [rsp+D8h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+E0h] [rbp-20h]
  PVOID BaseAddress; // [rsp+E8h] [rbp-18h]
  HANDLE v76; // [rsp+F0h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v78; // [rsp+100h] [rbp+0h]
  _DWORD *v79; // [rsp+108h] [rbp+8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+10h] BYREF
  _OBJECT_ATTRIBUTES v81; // [rsp+140h] [rbp+40h] BYREF
  _OBJECT_ATTRIBUTES v82; // [rsp+170h] [rbp+70h] BYREF
  _OBJECT_ATTRIBUTES v83; // [rsp+1A0h] [rbp+A0h] BYREF
  _OBJECT_ATTRIBUTES v84; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v85; // [rsp+200h] [rbp+100h] BYREF
  __int64 v86; // [rsp+210h] [rbp+110h]
  int v87; // [rsp+218h] [rbp+118h]

  LOBYTE(v3) = a1;
  v79 = a3;
  v76 = 0LL;
  v72 = 0LL;
  v71 = 0LL;
  v4 = a2;
  Handle[0] = 0LL;
  v5 = 0;
  v64 = 0;
  v6 = 0;
  v59 = 0;
  v7 = 0;
  v65 = 0;
  v55 = 0;
  v56[0] = 0;
  v70 = 0LL;
  v86 = 0LL;
  v87 = 0;
  v78 = 0LL;
  v58 = 0;
  v68 = 0LL;
  BaseAddress = 0LL;
  Src = 0LL;
  InstallUILanguageId[0] = 0;
  SourceString = 0LL;
  KeyHandle = 0LL;
  v85 = 0LL;
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
    if ( (v3 & 0x80u) != 0 && v68 )
      RtlpMuiFreeLangRegistryInfo(v68);
    *v79 = v5 + v7 + v6;
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
    v13 = RtlpCreateProcessRegistryInfo(&v68);
  else
    v13 = RtlpInitializeLangRegistryInfo(&v68);
  InstallUILanguage = v13;
  if ( v13 >= 0 )
  {
    v15 = 4;
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
        InstallUILanguage = NtQueryInstallUILanguage(InstallUILanguageId);
        if ( InstallUILanguage < 0 )
        {
LABEL_92:
          if ( Handle[0] )
          {
            NtClose(Handle[0]);
            Handle[0] = 0LL;
          }
          if ( v71 )
          {
            NtClose(v71);
            v71 = 0LL;
          }
          if ( v72 )
          {
            NtClose(v72);
            v72 = 0LL;
          }
          if ( v76 )
          {
            NtClose(v76);
            v76 = 0LL;
          }
          if ( v78 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v78);
          v7 = v65;
          v5 = v64;
          goto LABEL_103;
        }
        Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
        SourceString = Heap;
        if ( !Heap )
        {
          InstallUILanguage = -1073741801;
          goto LABEL_92;
        }
        String.Buffer = Heap;
        *(_DWORD *)&String.Length = 11141120;
        if ( !RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
        {
          v18 = (WCHAR *)SourceString;
          InstallUILanguage = -1073741811;
LABEL_88:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
LABEL_89:
          if ( BaseAddress )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          v6 = v59;
          goto LABEL_92;
        }
        v19 = (unsigned __int64)String.Length >> 1;
        if ( (v12 & 4) != 0 )
        {
          InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, &Src);
          if ( InstallUILanguage < 0 )
            goto LABEL_85;
          v4 = (WCHAR *)Src;
          v3 = v12 & 0xFFF3 | 8;
        }
        InstallUILanguage = RtlpGetMultiStringLength(v4, v57, 0LL);
        if ( InstallUILanguage < 0
          || (v20 = SourceString,
              memmove((void *)&SourceString[v19 + 1], v4, 2LL * ((unsigned int)v57[0] + 1)),
              InstallUILanguage = RtlpAutoCompleteLanguageFallback((__int64)v68, v20),
              InstallUILanguage < 0) )
        {
LABEL_85:
          if ( Src )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
          v18 = (WCHAR *)SourceString;
          if ( !SourceString )
            goto LABEL_89;
          goto LABEL_88;
        }
        v4 = (WCHAR *)v20;
      }
      InstallUILanguage = RtlpGetMultiStringLength(v4, Data, &v55);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      Data[1] = v4;
      LOWORD(Data[0]) *= 2;
      WORD1(Data[0]) = LOWORD(Data[0]) + 2;
      if ( v55 - 1 > 2 )
        goto LABEL_177;
      v21 = v4;
      BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( !BaseAddress )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_85;
      }
      v22 = v55;
      v53 = 0;
      if ( v55 )
      {
        v23 = v3 & 4;
        for ( i = v23; ; v23 = i )
        {
          if ( v23 )
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_84;
            v24 = Value;
            if ( ((Value - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            DestinationString.Buffer = (wchar_t *)BaseAddress;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
              goto LABEL_84;
            Buffer = (__int64)DestinationString.Buffer;
            v25 = -1LL;
            do
              ++v25;
            while ( DestinationString.Buffer[v25] );
            v58 += v25 + 1;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( !RtlCultureNameToLCID(&DestinationString, &Value) )
              goto LABEL_84;
            v24 = Value;
            if ( ((Value - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            Buffer = (__int64)DestinationString.Buffer;
          }
          v26 = v53;
          if ( v53 )
          {
            if ( v53 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*(_BYTE *)v70 & 1) != 0 )
                goto LABEL_84;
              if ( (*(_BYTE *)v70 & 2) != 0 )
              {
                v29 = v57;
              }
              else
              {
                if ( (*(_BYTE *)v70 & 4) == 0 || v22 > 2 )
                  goto LABEL_84;
                v29 = v56;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        (_DWORD)v68,
                                                        (_DWORD)v70,
                                                        v24,
                                                        (unsigned int)&v85,
                                                        (__int64)v29);
            }
            else
            {
              if ( v53 != 2 )
                goto LABEL_77;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        (_DWORD)v68,
                                                        (_DWORD)v70,
                                                        v24,
                                                        (unsigned int)&v85,
                                                        (__int64)v57);
            }
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
              goto LABEL_84;
            v28 = &v85;
          }
          else
          {
            v30 = v68;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v68, (const WCHAR *)Buffer, 1, v56) < 0 )
              goto LABEL_84;
            v28 = (__int128 *)(*(_QWORD *)(v30[3] + 16LL) + 28LL * v56[0]);
          }
          v26 = v53;
          v70 = v28;
LABEL_77:
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
          v53 = v26 + 1;
          if ( v26 + 1 >= v22 )
            break;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v33 = v58 + 1;
        v58 = v33;
        if ( v33 > 0xFFFF )
          goto LABEL_84;
        v34 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v33);
        v78 = v34;
        if ( !v34 )
        {
          InstallUILanguage = -1073741670;
          goto LABEL_85;
        }
        Data[1] = v34;
        v35 = 2 * v33;
        v36 = v4;
        v4 = (WCHAR *)v34;
        LOWORD(Data[0]) = v35;
        v37 = v34;
        WORD1(Data[0]) = v35;
        v38 = (WCHAR *)v34;
        v54 = 0;
        if ( v55 )
        {
          do
          {
            RtlInitUnicodeString(&DestinationString, v36);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_84;
            DestinationString.Buffer = (wchar_t *)BaseAddress;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
              goto LABEL_84;
            if ( (int)RtlStringCchCatW(v37, v58, (__int64)DestinationString.Buffer) < 0 )
            {
              InstallUILanguage = -1073741670;
              goto LABEL_85;
            }
            Buffer = -1LL;
            v39 = -1LL;
            do
              ++v39;
            while ( v37[v39] );
            v58 += -1 - v39;
            if ( v37 )
            {
              v40 = -1LL;
              do
                ++v40;
              while ( v37[v40] );
              v37 += v40 + 1;
            }
            else
            {
              v37 = 0LL;
            }
            if ( v36 )
            {
              v41 = -1LL;
              do
                ++v41;
              while ( v36[v41] );
              v36 += v41 + 1;
            }
            else
            {
              v36 = 0LL;
            }
          }
          while ( ++v54 < v55 );
        }
        WORD1(Data[0]) = v35;
        *v37 = 0;
        v15 = v35;
      }
      else
      {
        v38 = (WCHAR *)Data[1];
        v15 = WORD1(Data[0]);
        v35 = (__int16)Data[0];
      }
    }
    else
    {
      v38 = (WCHAR *)&unk_18015219C;
      LODWORD(Data[0]) = 262146;
      Data[1] = &unk_18015219C;
      v35 = 2;
      v3 = v12;
    }
    if ( (v3 & 0x400) != 0 )
    {
      RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = &String;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      InstallUILanguage = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      RtlInitUnicodeString(&String, L"InstallLanguageFallback");
      v42 = -1LL;
      do
        ++v42;
      while ( v38[v42] );
      WORD1(Data[0]) = -2 - 2 * v42 + v15;
      if ( v38 )
      {
        v43 = -1LL;
        do
          ++v43;
        while ( v38[v43] );
        v44 = &v38[v43 + 1];
      }
      else
      {
        v44 = 0LL;
      }
      Data[1] = v44;
      InstallUILanguage = RtlpGetMultiStringLength(v44, Data, &v55);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      v35 = (__int16)Data[0];
      v38 = (WCHAR *)Data[1];
      InstallUILanguage = ZwSetValueKey(KeyHandle, &String, 0, 7u, Data[1], 2 * LOWORD(Data[0]));
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      v45 = v55;
      v15 = WORD1(Data[0]);
      v65 = v55;
    }
    else
    {
      v45 = v55;
    }
    if ( (v3 & 0x10) != 0 )
    {
      InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      v65 = v45;
    }
    if ( (v3 & 0x4000) == 0 )
      goto LABEL_164;
    InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000u, Buffer, &v76);
    if ( InstallUILanguage < 0 )
      goto LABEL_85;
    RtlInitUnicodeString(&String, L"Control Panel\\Desktop");
    v81.RootDirectory = v76;
    v81.Length = 48;
    v81.ObjectName = &String;
    v81.Attributes = 64;
    *(_OWORD *)&v81.SecurityDescriptor = 0LL;
    InstallUILanguage = NtOpenKey(&v71, 0xF003Fu, &v81);
    if ( InstallUILanguage < 0 )
      goto LABEL_85;
    if ( (v3 & 0x800) != 0 )
    {
      RtlInitUnicodeString(&String, L"PreferredUILanguagesPending");
      v46 = v71;
LABEL_154:
      InstallUILanguage = ZwSetValueKey(v46, &String, 0, 7u, v38, v15);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      v64 = v45;
LABEL_164:
      if ( Handle[0] )
      {
        NtClose(Handle[0]);
        Handle[0] = 0LL;
      }
      if ( (v3 & 0x8800) == 0x8800 )
      {
        DestinationString = *(_UNICODE_STRING *)Data;
        v48 = RtlpSetMachineUILanguagesImmediate((__int64)&DestinationString);
        v49 = v45;
        InstallUILanguage = v48;
        v59 = v45;
      }
      else
      {
        v49 = v59;
      }
      if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
      {
        v59 = v49;
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
LABEL_186:
        if ( (v3 & 0xE410) != 0 )
        {
          ZwGetMUIRegistryInfo(8u, 0LL, 0LL);
          if ( (v3 & 0x8410) != 0 )
            RtlUpdateProcessRegistryInfo();
        }
        goto LABEL_85;
      }
      RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v83.Length = 48;
      v83.RootDirectory = 0LL;
      v83.Attributes = 64;
      v83.ObjectName = &String;
      *(_OWORD *)&v83.SecurityDescriptor = 0LL;
      InstallUILanguage = ZwCreateKey(&v72, 0xF003Fu, &v83, 0, 0LL, 0, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&String, L"PreferredUILanguages");
        v50 = ZwSetValueKey(v72, &String, 0, 7u, v38, v15);
LABEL_184:
        InstallUILanguage = v50;
        if ( v50 < 0 )
          goto LABEL_85;
        v59 = v45;
        goto LABEL_186;
      }
      if ( v45 >= 2 )
      {
        RtlInitUnicodeString(&String, L"LanguageConfiguration");
        v84.RootDirectory = v72;
        v84.Length = 48;
        v84.ObjectName = &String;
        v84.Attributes = 64;
        *(_OWORD *)&v84.SecurityDescriptor = 0LL;
        Handle[0] = 0LL;
        InstallUILanguage = ZwCreateKey(Handle, 0xF003Fu, &v84, 0, 0LL, 0, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&String, v4);
        v51 = 0LL;
        if ( v4 )
        {
          v52 = -1LL;
          do
            ++v52;
          while ( v4[v52] );
          v51 = &v4[v52 + 1];
        }
        v50 = ZwSetValueKey(Handle[0], &String, 0, 7u, v51, (unsigned __int16)(v15 - String.MaximumLength));
        goto LABEL_184;
      }
LABEL_177:
      InstallUILanguage = -1073741811;
      goto LABEL_85;
    }
    if ( v45 >= 2 )
    {
      RtlInitUnicodeString(&String, L"LanguageConfigurationPending");
      v82.RootDirectory = v71;
      v82.Length = 48;
      v82.ObjectName = &String;
      v82.Attributes = 64;
      *(_OWORD *)&v82.SecurityDescriptor = 0LL;
      InstallUILanguage = ZwCreateKey(Handle, 0xF003Fu, &v82, 0, 0LL, 0, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      RtlInitUnicodeString(&String, v4);
      if ( v4 )
      {
        v47 = -1LL;
        do
          ++v47;
        while ( v4[v47] );
        v38 = &v4[v47 + 1];
        Data[1] = v38;
      }
      else
      {
        v38 = 0LL;
        Data[1] = 0LL;
      }
      v15 -= String.MaximumLength;
      v46 = Handle[0];
      WORD1(Data[0]) = v15;
      LOWORD(Data[0]) = v35 - String.MaximumLength;
      goto LABEL_154;
    }
LABEL_84:
    InstallUILanguage = -1073741811;
    goto LABEL_85;
  }
  return (unsigned int)InstallUILanguage;
}
