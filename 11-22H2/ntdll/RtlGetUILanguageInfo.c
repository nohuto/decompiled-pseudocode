/*
 * XREFs of RtlGetUILanguageInfo @ 0x180089EF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014994 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015DA8 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
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
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlUnicodeStringToLcid @ 0x1800FA3AC (RtlUnicodeStringToLcid.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18011191C (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180111AD4 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x180111C44 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 */

NTSTATUS __cdecl RtlGetUILanguageInfo(
        ULONG Flags,
        PCZZWSTR Languages,
        PZZWSTR FallbackLanguages,
        PULONG NumberOfFallbackLanguages,
        PULONG Attributes)
{
  char v5; // bl
  PZZWSTR v7; // r12
  WCHAR *v8; // rdi
  ULONG v9; // r13d
  const WCHAR *v11; // rdi
  int v12; // r8d
  int v13; // eax
  PVOID v14; // r8
  __int64 v15; // rdx
  ULONG v16; // r15d
  int v17; // eax
  void *v18; // rsi
  NTSTATUS FallbackLanguagesAsMultiSZ; // ebx
  __int64 v20; // r12
  int InstalledLanguageIndexByLangId; // eax
  __int64 v22; // r9
  __int64 v23; // r15
  PVOID Heap; // rax
  int v25; // r9d
  int FallbackLanguageInfoByLangId; // eax
  char v27; // [rsp+30h] [rbp-61h]
  _WORD v28[2]; // [rsp+34h] [rbp-5Dh] BYREF
  PZZWSTR v29; // [rsp+38h] [rbp-59h]
  DWORD Lcid; // [rsp+40h] [rbp-51h] BYREF
  int v31; // [rsp+44h] [rbp-4Dh]
  _QWORD *v32; // [rsp+48h] [rbp-49h] BYREF
  ULONG v33; // [rsp+50h] [rbp-41h]
  int v34; // [rsp+54h] [rbp-3Dh]
  PVOID BaseAddress; // [rsp+58h] [rbp-39h]
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-31h] BYREF
  PULONG v37; // [rsp+70h] [rbp-21h]
  _UNICODE_STRING String; // [rsp+78h] [rbp-19h] BYREF
  __int128 v39; // [rsp+88h] [rbp-9h] BYREF
  __int64 v40; // [rsp+98h] [rbp+7h]
  int v41; // [rsp+A0h] [rbp+Fh]

  v5 = Flags;
  v33 = Flags;
  v29 = FallbackLanguages;
  v37 = Attributes;
  v32 = 0LL;
  v7 = FallbackLanguages;
  v28[0] = -1;
  v8 = (WCHAR *)Languages;
  LOBYTE(v31) = 0;
  BaseAddress = 0LL;
  if ( NumberOfFallbackLanguages )
    v9 = *NumberOfFallbackLanguages;
  else
    v9 = 0;
  if ( !Languages || !*Languages || (Flags & 0xC) == 0xC || (Flags & 0xFFFFFF73) != 0 || v9 && !FallbackLanguages )
    return -1073741811;
  v15 = 4LL;
  v16 = Flags & 4;
  if ( (Flags & 4) == 0 )
    v15 = 85LL;
  if ( (int)RtlpCheckMuiMultiStringSafe(v8, v15) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter pwmszLanguage for function RtlGetUILanguageInfo is not a valid multi-string!\n");
  if ( v7 )
  {
    if ( v9 )
      *v7 = 0;
    if ( v9 > 1 )
      v7[1] = 0;
  }
  if ( NumberOfFallbackLanguages )
    *NumberOfFallbackLanguages = 2;
  if ( Attributes )
    *Attributes = 0;
  v34 = v5 & 0x80;
  if ( v5 < 0 )
    v17 = RtlpInitializeLangRegistryInfo(&v32);
  else
    v17 = RtlpCreateProcessRegistryInfo(&v32);
  v18 = v32;
  FallbackLanguagesAsMultiSZ = v17;
  if ( v17 >= 0 )
  {
    if ( !v32 )
    {
      FallbackLanguagesAsMultiSZ = -1073741823;
      goto LABEL_20;
    }
    v20 = v32[3];
    if ( v16 )
    {
      v27 = 1;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      BaseAddress = Heap;
      if ( !Heap )
      {
        FallbackLanguagesAsMultiSZ = -1073741801;
LABEL_65:
        v18 = v32;
LABEL_66:
        v7 = v29;
        goto LABEL_20;
      }
      DestinationString.Buffer = (wchar_t *)Heap;
      *(_DWORD *)&DestinationString.Length = 11141120;
      RtlInitUnicodeString(&String, v8);
      if ( (int)RtlUnicodeStringToLcid(&String, &Lcid) < 0 || !RtlLCIDToCultureName(Lcid, &DestinationString) )
      {
        v14 = BaseAddress;
        FallbackLanguagesAsMultiSZ = -1073741811;
LABEL_64:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
        goto LABEL_65;
      }
      v18 = v32;
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId((__int64)v32, Lcid, 1, v28);
    }
    else
    {
      v27 = 0;
      RtlInitUnicodeString(&DestinationString, v8);
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      {
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_66;
      }
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v18, v8, 1, v28);
    }
    FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
    if ( InstalledLanguageIndexByLangId < 0 )
    {
      v7 = v29;
      if ( InstalledLanguageIndexByLangId == -1073741823 )
        FallbackLanguagesAsMultiSZ = -1073741772;
      goto LABEL_19;
    }
    if ( v28[0] >= 0 && v28[0] < (int)*(unsigned __int16 *)(v20 + 6) )
    {
      v23 = *(_QWORD *)(v20 + 16) + 28LL * v28[0];
      while ( *v8 )
        ++v8;
      v11 = v8 + 1;
      v39 = *(_OWORD *)v23;
      v40 = *(_QWORD *)(v23 + 16);
      v41 = *(_DWORD *)(v23 + 24);
      if ( (*(_BYTE *)v23 & 1) == 0 )
      {
        LOBYTE(v12) = v31;
        if ( *v11 )
        {
          while ( !(_BYTE)v12 )
          {
            if ( v27 )
            {
              RtlInitUnicodeString(&String, v11);
              if ( RtlUnicodeStringToInteger(&String, 0x10u, &Lcid) < 0 )
                break;
              LOBYTE(v25) = 1;
              FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                               (_DWORD)v18,
                                               (unsigned int)&v39,
                                               (unsigned __int16)Lcid,
                                               v25,
                                               (__int64)&v39);
            }
            else
            {
              LOBYTE(v22) = 1;
              FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v18, &v39, v11, v22, &v39);
            }
            FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
            if ( FallbackLanguageInfoByLangId < 0 )
              goto LABEL_18;
            v12 = (unsigned __int8)v31;
            if ( (v39 & 0x20) != 0 )
              v12 = 1;
            v31 = v12;
            while ( *v11 )
              ++v11;
            if ( !*++v11 )
              goto LABEL_13;
          }
          FallbackLanguagesAsMultiSZ = -1073741811;
          goto LABEL_18;
        }
        goto LABEL_13;
      }
      if ( (*(_BYTE *)v23 & 6) != 0 )
      {
        FallbackLanguagesAsMultiSZ = -1073741595;
        goto LABEL_18;
      }
      if ( !*v11 )
      {
        LOBYTE(v12) = v31;
LABEL_13:
        if ( v37 )
        {
          v13 = *(_WORD *)v23 & 0x419F | 0x20;
          if ( (*(_WORD *)v23 & 0x1000) != 0 )
            v13 = *(_WORD *)v23 & 0x419F;
          *v37 = v13 | 0x40;
        }
        if ( !NumberOfFallbackLanguages )
          goto LABEL_18;
        v7 = v29;
        *NumberOfFallbackLanguages = v9;
        if ( (_BYTE)v12 )
          *NumberOfFallbackLanguages = 2;
        else
          FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                         v33,
                                         (_DWORD)v18,
                                         (unsigned int)&v39,
                                         (_DWORD)NumberOfFallbackLanguages,
                                         (__int64)v7);
LABEL_19:
        v14 = BaseAddress;
        if ( !BaseAddress )
          goto LABEL_20;
        goto LABEL_64;
      }
    }
    FallbackLanguagesAsMultiSZ = -1073741772;
LABEL_18:
    v7 = v29;
    goto LABEL_19;
  }
LABEL_20:
  if ( v34 && v18 )
    RtlpMuiFreeLangRegistryInfo(v18);
  if ( !FallbackLanguagesAsMultiSZ && NumberOfFallbackLanguages && *NumberOfFallbackLanguages > v9 )
  {
    if ( v7 )
      return -1073741789;
  }
  return FallbackLanguagesAsMultiSZ;
}
