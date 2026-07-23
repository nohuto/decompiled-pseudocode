/*
 * XREFs of RtlGetUILanguageInfo @ 0x1800FA470
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18004B090 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18004B690 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18004B778 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006DCA0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006DCD0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18006E290 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlUnicodeStringToInteger @ 0x18007C230 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     RtlUnicodeStringToLcid @ 0x1800FA9A8 (RtlUnicodeStringToLcid.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180111498 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180111658 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1801117D4 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
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
  __int64 v10; // rdx
  ULONG v11; // r15d
  int v12; // eax
  PVOID v13; // rsi
  NTSTATUS FallbackLanguagesAsMultiSZ; // ebx
  __int64 v15; // r12
  PVOID Heap; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v18; // r9
  PVOID v19; // r8
  __int64 v20; // r15
  const WCHAR *v21; // rdi
  int v23; // r8d
  int v24; // r9d
  int FallbackLanguageInfoByLangId; // eax
  int v26; // eax
  char v27; // [rsp+30h] [rbp-61h]
  _WORD v28[2]; // [rsp+34h] [rbp-5Dh] BYREF
  PZZWSTR v29; // [rsp+38h] [rbp-59h]
  LCID Lcid; // [rsp+40h] [rbp-51h] BYREF
  int v31; // [rsp+44h] [rbp-4Dh]
  PVOID v32; // [rsp+48h] [rbp-49h] BYREF
  ULONG v33; // [rsp+50h] [rbp-41h]
  int v34; // [rsp+54h] [rbp-3Dh]
  PVOID BaseAddress; // [rsp+58h] [rbp-39h]
  _UNICODE_STRING String; // [rsp+60h] [rbp-31h] BYREF
  PULONG v37; // [rsp+70h] [rbp-21h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
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
  v10 = 4LL;
  v11 = Flags & 4;
  if ( (Flags & 4) == 0 )
    v10 = 85LL;
  if ( (int)RtlpCheckMuiMultiStringSafe(v8, v10) < 0 )
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
    v12 = RtlpInitializeLangRegistryInfo(&v32);
  else
    v12 = RtlpCreateProcessRegistryInfo(&v32);
  v13 = v32;
  FallbackLanguagesAsMultiSZ = v12;
  if ( v12 >= 0 )
  {
    if ( !v32 )
    {
      FallbackLanguagesAsMultiSZ = -1073741823;
      goto LABEL_57;
    }
    v15 = *((_QWORD *)v32 + 3);
    if ( v11 )
    {
      v27 = 1;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      BaseAddress = Heap;
      if ( !Heap )
      {
        FallbackLanguagesAsMultiSZ = -1073741801;
LABEL_55:
        v13 = v32;
        goto LABEL_56;
      }
      String.Buffer = (wchar_t *)Heap;
      *(_DWORD *)&String.Length = 11141120;
      RtlInitUnicodeString(&DestinationString, v8);
      if ( (int)RtlUnicodeStringToLcid(&DestinationString, &Lcid) < 0 || !RtlLCIDToCultureName(Lcid, &String) )
      {
        v19 = BaseAddress;
        FallbackLanguagesAsMultiSZ = -1073741811;
LABEL_54:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
        goto LABEL_55;
      }
      v13 = v32;
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId((__int64)v32, Lcid, 1, v28);
    }
    else
    {
      v27 = 0;
      RtlInitUnicodeString(&String, v8);
      if ( !RtlCultureNameToLCID(&String, &Lcid) )
      {
        FallbackLanguagesAsMultiSZ = -1073741811;
LABEL_56:
        v7 = v29;
        goto LABEL_57;
      }
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v13, v8, 1, v28);
    }
    FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
    if ( InstalledLanguageIndexByLangId < 0 )
    {
      v7 = v29;
      if ( InstalledLanguageIndexByLangId == -1073741823 )
        FallbackLanguagesAsMultiSZ = -1073741772;
LABEL_53:
      v19 = BaseAddress;
      if ( !BaseAddress )
        goto LABEL_57;
      goto LABEL_54;
    }
    if ( v28[0] < 0 || v28[0] >= (int)*(unsigned __int16 *)(v15 + 6) )
      goto LABEL_51;
    v20 = *(_QWORD *)(v15 + 16) + 28LL * v28[0];
    while ( *v8 )
      ++v8;
    v21 = v8 + 1;
    v39 = *(_OWORD *)v20;
    v40 = *(_QWORD *)(v20 + 16);
    v41 = *(_DWORD *)(v20 + 24);
    if ( (*(_BYTE *)v20 & 1) != 0 )
    {
      if ( (*(_BYTE *)v20 & 6) != 0 )
      {
        FallbackLanguagesAsMultiSZ = -1073741595;
        goto LABEL_52;
      }
      if ( *v21 )
      {
LABEL_51:
        FallbackLanguagesAsMultiSZ = -1073741772;
        goto LABEL_52;
      }
      LOBYTE(v23) = v31;
    }
    else
    {
      LOBYTE(v23) = v31;
      if ( *v21 )
      {
        while ( !(_BYTE)v23 )
        {
          if ( v27 )
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Lcid) < 0 )
              break;
            LOBYTE(v24) = 1;
            FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                             (_DWORD)v13,
                                             (unsigned int)&v39,
                                             (unsigned __int16)Lcid,
                                             v24,
                                             (__int64)&v39);
          }
          else
          {
            LOBYTE(v18) = 1;
            FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v13, &v39, v21, v18, &v39);
          }
          FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
          if ( FallbackLanguageInfoByLangId < 0 )
            goto LABEL_52;
          v23 = (unsigned __int8)v31;
          if ( (v39 & 0x20) != 0 )
            v23 = 1;
          v31 = v23;
          while ( *v21 )
            ++v21;
          if ( !*++v21 )
            goto LABEL_82;
        }
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_52;
      }
    }
LABEL_82:
    if ( v37 )
    {
      v26 = *(_WORD *)v20 & 0x419F | 0x20;
      if ( (*(_WORD *)v20 & 0x1000) != 0 )
        v26 = *(_WORD *)v20 & 0x419F;
      *v37 = v26 | 0x40;
    }
    if ( NumberOfFallbackLanguages )
    {
      v7 = v29;
      *NumberOfFallbackLanguages = v9;
      if ( (_BYTE)v23 )
        *NumberOfFallbackLanguages = 2;
      else
        FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                       v33,
                                       (_DWORD)v13,
                                       (unsigned int)&v39,
                                       (_DWORD)NumberOfFallbackLanguages,
                                       (__int64)v7);
      goto LABEL_53;
    }
LABEL_52:
    v7 = v29;
    goto LABEL_53;
  }
LABEL_57:
  if ( v34 && v13 )
    RtlpMuiFreeLangRegistryInfo(v13);
  if ( !FallbackLanguagesAsMultiSZ && NumberOfFallbackLanguages && *NumberOfFallbackLanguages > v9 )
  {
    if ( v7 )
      return -1073741789;
  }
  return FallbackLanguagesAsMultiSZ;
}
