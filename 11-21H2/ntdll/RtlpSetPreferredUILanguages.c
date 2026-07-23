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
  PVOID v7; // r15
  int InstallUILanguage; // ebx
  int v9; // eax
  __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // si
  int v13; // eax
  __int64 Buffer; // rdx
  unsigned __int16 v15; // r12
  __int64 v16; // rdx
  PVOID Heap; // rax
  PVOID v18; // r8
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
  _QWORD *v30; // rsi
  __int64 v31; // rax
  unsigned int v33; // esi
  WCHAR *v34; // r14
  const WCHAR *v35; // r12
  __int16 v36; // r15
  int v37; // r13d
  WCHAR *v38; // rsi
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
  __int64 v50; // rax
  WCHAR *v51; // rcx
  PVOID v52; // [rsp+40h] [rbp-C0h]
  unsigned int v53; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v54[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  _WORD v55[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v56; // [rsp+54h] [rbp-ACh]
  unsigned int v57; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING String; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Data[2]; // [rsp+70h] [rbp-90h] BYREF
  LANGID InstallUILanguageId[2]; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+84h] [rbp-7Ch]
  ULONG Value; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v63; // [rsp+8Ch] [rbp-74h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v66; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v67; // [rsp+B8h] [rbp-48h]
  __int128 *v68; // [rsp+C0h] [rbp-40h]
  HANDLE v69; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE v70; // [rsp+D0h] [rbp-30h] BYREF
  PVOID BaseAddress; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v72; // [rsp+E0h] [rbp-20h]
  PVOID v73; // [rsp+E8h] [rbp-18h]
  HANDLE v74; // [rsp+F0h] [rbp-10h] BYREF
  int i; // [rsp+F8h] [rbp-8h]
  HANDLE KeyHandle; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v77; // [rsp+108h] [rbp+8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+10h] BYREF
  _OBJECT_ATTRIBUTES v79; // [rsp+140h] [rbp+40h] BYREF
  _OBJECT_ATTRIBUTES v80; // [rsp+170h] [rbp+70h] BYREF
  _OBJECT_ATTRIBUTES v81; // [rsp+1A0h] [rbp+A0h] BYREF
  _OBJECT_ATTRIBUTES v82; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v83; // [rsp+200h] [rbp+100h] BYREF
  __int64 v84; // [rsp+210h] [rbp+110h]
  int v85; // [rsp+218h] [rbp+118h]

  LOBYTE(v3) = a1;
  v77 = a3;
  v74 = 0LL;
  v70 = 0LL;
  v69 = 0LL;
  v4 = a2;
  Handle[0] = 0LL;
  v5 = 0;
  v63 = 0;
  v6 = 0;
  v57 = 0;
  v7 = 0LL;
  v67 = 0;
  v53 = 0;
  v54[0] = 0;
  v68 = 0LL;
  v84 = 0LL;
  v85 = 0;
  v52 = 0LL;
  v56 = 0;
  v66 = 0LL;
  v73 = 0LL;
  BaseAddress = 0LL;
  InstallUILanguageId[0] = 0;
  v72 = 0LL;
  KeyHandle = 0LL;
  v83 = 0LL;
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
    if ( (v3 & 0x80u) != 0 && v66 )
      RtlpMuiFreeLangRegistryInfo(v66);
    *v77 = v5 + v6 + v67;
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
LABEL_94:
          if ( Handle[0] )
          {
            NtClose(Handle[0]);
            Handle[0] = 0LL;
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
          if ( v74 )
          {
            NtClose(v74);
            v74 = 0LL;
          }
          if ( v7 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
          v5 = v63;
          v6 = v57;
          goto LABEL_105;
        }
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
        v72 = Heap;
        if ( !Heap )
        {
          InstallUILanguage = -1073741801;
          goto LABEL_94;
        }
        String.Buffer = (wchar_t *)Heap;
        *(_DWORD *)&String.Length = 11141120;
        if ( !RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
        {
          v18 = v72;
          InstallUILanguage = -1073741811;
LABEL_91:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
LABEL_92:
          if ( v73 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v73);
          goto LABEL_94;
        }
        v19 = (unsigned __int64)String.Length >> 1;
        if ( (v12 & 4) != 0 )
        {
          InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, &BaseAddress);
          if ( InstallUILanguage < 0 )
          {
            v7 = 0LL;
            goto LABEL_88;
          }
          v4 = (WCHAR *)BaseAddress;
          v3 = v12 & 0xFFF3 | 8;
        }
        InstallUILanguage = RtlpGetMultiStringLength(v4, v55, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_111;
        v20 = (const WCHAR *)v72;
        memmove((char *)v72 + 2 * v19 + 2, v4, 2LL * ((unsigned int)v55[0] + 1));
        v7 = 0LL;
        InstallUILanguage = RtlpAutoCompleteLanguageFallback((__int64)v66, v20);
        if ( InstallUILanguage < 0 )
        {
LABEL_88:
          if ( BaseAddress )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          v18 = v72;
          if ( !v72 )
            goto LABEL_92;
          goto LABEL_91;
        }
        v4 = (WCHAR *)v20;
      }
      InstallUILanguage = RtlpGetMultiStringLength(v4, Data, &v53);
      if ( InstallUILanguage < 0 )
        goto LABEL_88;
      Data[1] = v4;
      LOWORD(Data[0]) *= 2;
      WORD1(Data[0]) = LOWORD(Data[0]) + 2;
      if ( v53 - 1 > 2 )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_88;
      }
      v21 = v4;
      v73 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( !v73 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_88;
      }
      v22 = v53;
      v61 = 0;
      if ( v53 )
      {
        v23 = v3 & 4;
        for ( i = v23; ; v23 = i )
        {
          if ( v23 )
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_110;
            v24 = Value;
            if ( ((Value - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_86;
            DestinationString.Buffer = (wchar_t *)v73;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
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
            v56 += v25 + 1;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( !RtlCultureNameToLCID(&DestinationString, &Value) )
              goto LABEL_110;
            v24 = Value;
            if ( ((Value - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_86;
            Buffer = (__int64)DestinationString.Buffer;
          }
          v26 = v61;
          if ( v61 )
          {
            if ( v61 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*(_BYTE *)v68 & 1) != 0 )
                goto LABEL_86;
              if ( (*(_BYTE *)v68 & 2) != 0 )
              {
                v29 = v55;
              }
              else
              {
                if ( (*(_BYTE *)v68 & 4) == 0 || v22 > 2 )
                  goto LABEL_86;
                v29 = v54;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        (_DWORD)v66,
                                                        (_DWORD)v68,
                                                        v24,
                                                        (unsigned int)&v83,
                                                        (__int64)v29);
            }
            else
            {
              if ( v61 != 2 )
                goto LABEL_78;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        (_DWORD)v66,
                                                        (_DWORD)v68,
                                                        v24,
                                                        (unsigned int)&v83,
                                                        (__int64)v55);
            }
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
            {
LABEL_110:
              InstallUILanguage = -1073741811;
LABEL_111:
              v7 = 0LL;
              goto LABEL_88;
            }
            v28 = &v83;
          }
          else
          {
            v30 = v66;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v66, (const WCHAR *)Buffer, 1, v54) < 0 )
              goto LABEL_86;
            v28 = (__int128 *)(*(_QWORD *)(v30[3] + 16LL) + 28LL * v54[0]);
          }
          v26 = v61;
          v68 = v28;
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
          v61 = v26 + 1;
          if ( v26 + 1 >= v22 )
            break;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v33 = v56 + 1;
        v56 = v33;
        if ( v33 > 0xFFFF )
          goto LABEL_86;
        v7 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v33);
        v52 = v7;
        if ( !v7 )
        {
          InstallUILanguage = -1073741670;
          goto LABEL_88;
        }
        v34 = (WCHAR *)v7;
        Data[1] = v7;
        v35 = v4;
        v36 = 2 * v33;
        v37 = 0;
        v38 = v34;
        LOWORD(Data[0]) = v36;
        WORD1(Data[0]) = v36;
        if ( v53 )
        {
          while ( 1 )
          {
            RtlInitUnicodeString(&DestinationString, v35);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              break;
            DestinationString.Buffer = (wchar_t *)v73;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
              break;
            if ( (int)RtlStringCchCatW(v38, v56, (__int64)DestinationString.Buffer) < 0 )
            {
              InstallUILanguage = -1073741670;
              goto LABEL_134;
            }
            Buffer = -1LL;
            v39 = -1LL;
            do
              ++v39;
            while ( v38[v39] );
            v56 += -1 - v39;
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
            if ( ++v37 >= v53 )
              goto LABEL_132;
          }
          InstallUILanguage = -1073741811;
LABEL_134:
          v7 = v34;
          goto LABEL_88;
        }
LABEL_132:
        WORD1(Data[0]) = v36;
        *v38 = 0;
        v4 = v34;
        v15 = v36;
      }
      else
      {
        v34 = (WCHAR *)Data[1];
        v15 = WORD1(Data[0]);
        v36 = (__int16)Data[0];
      }
    }
    else
    {
      v34 = (WCHAR *)&unk_18014810C;
      LODWORD(Data[0]) = 262146;
      Data[1] = &unk_18014810C;
      v36 = 2;
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
        goto LABEL_87;
      RtlInitUnicodeString(&String, L"InstallLanguageFallback");
      v42 = -1LL;
      do
        ++v42;
      while ( v34[v42] );
      WORD1(Data[0]) = -2 - 2 * v42 + v15;
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
      Data[1] = v44;
      InstallUILanguage = RtlpGetMultiStringLength(v44, Data, &v53);
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      v36 = (__int16)Data[0];
      v34 = (WCHAR *)Data[1];
      InstallUILanguage = ZwSetValueKey(KeyHandle, &String, 0, 7u, Data[1], 2 * LOWORD(Data[0]));
      if ( InstallUILanguage < 0 )
        goto LABEL_195;
      v45 = v53;
      v15 = WORD1(Data[0]);
      v67 = v53;
    }
    else
    {
      v45 = v53;
    }
    if ( (v3 & 0x10) != 0 )
    {
      InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      v67 = v45;
    }
    if ( (v3 & 0x4000) != 0 )
    {
      InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000u, Buffer, &v74);
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      RtlInitUnicodeString(&String, L"Control Panel\\Desktop");
      v79.RootDirectory = v74;
      v79.Length = 48;
      v79.ObjectName = &String;
      v79.Attributes = 64;
      *(_OWORD *)&v79.SecurityDescriptor = 0LL;
      InstallUILanguage = NtOpenKey(&v69, 0xF003Fu, &v79);
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&String, L"PreferredUILanguagesPending");
        v46 = v69;
      }
      else
      {
        if ( v45 < 2 )
          goto LABEL_86;
        RtlInitUnicodeString(&String, L"LanguageConfigurationPending");
        v80.RootDirectory = v69;
        v80.Length = 48;
        v80.ObjectName = &String;
        v80.Attributes = 64;
        *(_OWORD *)&v80.SecurityDescriptor = 0LL;
        InstallUILanguage = ZwCreateKey(Handle, 0xF003Fu, &v80, 0, 0LL, 0, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_87;
        RtlInitUnicodeString(&String, v4);
        if ( v4 )
        {
          v47 = -1LL;
          do
            ++v47;
          while ( v4[v47] );
          v34 = &v4[v47 + 1];
          Data[1] = v34;
        }
        else
        {
          v34 = 0LL;
          Data[1] = 0LL;
        }
        v15 -= String.MaximumLength;
        v46 = Handle[0];
        WORD1(Data[0]) = v15;
        LOWORD(Data[0]) = v36 - String.MaximumLength;
      }
      InstallUILanguage = ZwSetValueKey(v46, &String, 0, 7u, v34, v15);
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      v63 = v45;
    }
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
      v57 = v45;
    }
    else
    {
      v49 = v57;
    }
    if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
    {
      v57 = v49;
      if ( InstallUILanguage >= 0 )
        goto LABEL_192;
LABEL_87:
      v7 = v52;
      goto LABEL_88;
    }
    RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v81.ObjectName = &String;
    v81.Length = 48;
    v81.RootDirectory = 0LL;
    v81.Attributes = 64;
    *(_OWORD *)&v81.SecurityDescriptor = 0LL;
    InstallUILanguage = ZwCreateKey(&v70, 0xF003Fu, &v81, 0, 0LL, 0, 0LL);
    if ( InstallUILanguage < 0 )
      goto LABEL_87;
    if ( (v3 & 0x800) != 0 )
    {
      RtlInitUnicodeString(&String, L"PreferredUILanguages");
      InstallUILanguage = ZwSetValueKey(v70, &String, 0, 7u, v34, v15);
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
LABEL_191:
      v57 = v45;
LABEL_192:
      if ( (v3 & 0xE410) != 0 )
      {
        ZwGetMUIRegistryInfo(8u, 0LL, 0LL);
        if ( (v3 & 0x8410) != 0 )
          RtlUpdateProcessRegistryInfo();
      }
      goto LABEL_87;
    }
    if ( v45 >= 2 )
    {
      RtlInitUnicodeString(&String, L"LanguageConfiguration");
      v82.RootDirectory = v70;
      v82.ObjectName = &String;
      v82.Length = 48;
      v82.Attributes = 64;
      *(_OWORD *)&v82.SecurityDescriptor = 0LL;
      Handle[0] = 0LL;
      InstallUILanguage = ZwCreateKey(Handle, 0xF003Fu, &v82, 0, 0LL, 0, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_87;
      RtlInitUnicodeString(&String, v4);
      if ( v4 )
      {
        v50 = -1LL;
        do
          ++v50;
        while ( v4[v50] );
        v51 = &v4[v50 + 1];
      }
      else
      {
        v51 = 0LL;
      }
      InstallUILanguage = ZwSetValueKey(Handle[0], &String, 0, 7u, v51, (unsigned __int16)(v15 - String.MaximumLength));
      if ( InstallUILanguage >= 0 )
        goto LABEL_191;
LABEL_195:
      v7 = v52;
      goto LABEL_88;
    }
LABEL_86:
    InstallUILanguage = -1073741811;
    goto LABEL_87;
  }
  return (unsigned int)InstallUILanguage;
}
