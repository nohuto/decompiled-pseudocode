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

__int64 __fastcall RtlGetUILanguageInfo(int a1, WCHAR *a2, _WORD *a3, unsigned int *a4, int *a5)
{
  char v5; // bl
  _WORD *v7; // r12
  WCHAR *v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // rdx
  int v11; // r15d
  int v12; // eax
  __int64 v13; // rsi
  unsigned int FallbackLanguagesAsMultiSZ; // ebx
  __int64 v15; // r12
  wchar_t *Heap; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r15
  const WCHAR *v21; // rdi
  int v23; // r8d
  int v24; // r9d
  int FallbackLanguageInfoByLangId; // eax
  int v26; // eax
  char v27; // [rsp+30h] [rbp-61h]
  _WORD v28[2]; // [rsp+34h] [rbp-5Dh] BYREF
  _WORD *v29; // [rsp+38h] [rbp-59h]
  unsigned int v30; // [rsp+40h] [rbp-51h] BYREF
  int v31; // [rsp+44h] [rbp-4Dh]
  __int64 v32; // [rsp+48h] [rbp-49h] BYREF
  int v33; // [rsp+50h] [rbp-41h]
  int v34; // [rsp+54h] [rbp-3Dh]
  wchar_t *v35; // [rsp+58h] [rbp-39h]
  UNICODE_STRING v36; // [rsp+60h] [rbp-31h] BYREF
  int *v37; // [rsp+70h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  __int128 v39; // [rsp+88h] [rbp-9h] BYREF
  __int64 v40; // [rsp+98h] [rbp+7h]
  int v41; // [rsp+A0h] [rbp+Fh]

  v5 = a1;
  v33 = a1;
  v29 = a3;
  v37 = a5;
  v32 = 0LL;
  v7 = a3;
  v28[0] = -1;
  v8 = a2;
  LOBYTE(v31) = 0;
  v35 = 0LL;
  if ( a4 )
    v9 = *a4;
  else
    v9 = 0;
  if ( !a2 || !*a2 || (a1 & 0xC) == 0xC || (a1 & 0xFFFFFF73) != 0 || v9 && !a3 )
    return 3221225485LL;
  v10 = 4LL;
  v11 = a1 & 4;
  if ( (a1 & 4) == 0 )
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
  if ( a4 )
    *a4 = 2;
  if ( a5 )
    *a5 = 0;
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
    v15 = *(_QWORD *)(v32 + 24);
    if ( v11 )
    {
      v27 = 1;
      Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
      v35 = Heap;
      if ( !Heap )
      {
        FallbackLanguagesAsMultiSZ = -1073741801;
LABEL_55:
        v13 = v32;
        goto LABEL_56;
      }
      v36.Buffer = Heap;
      *(_DWORD *)&v36.Length = 11141120;
      RtlInitUnicodeString(&DestinationString, v8);
      if ( (int)RtlUnicodeStringToLcid(&DestinationString, &v30) < 0 || !RtlLCIDToCultureName(v30, (__int64)&v36) )
      {
        v19 = (__int64)v35;
        FallbackLanguagesAsMultiSZ = -1073741811;
LABEL_54:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v19);
        goto LABEL_55;
      }
      v13 = v32;
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v32, v30, 1, v28);
    }
    else
    {
      v27 = 0;
      RtlInitUnicodeString(&v36, v8);
      if ( !RtlCultureNameToLCID(&v36.Length, &v30) )
      {
        FallbackLanguagesAsMultiSZ = -1073741811;
LABEL_56:
        v7 = v29;
        goto LABEL_57;
      }
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName(v13, v8, 1, v28);
    }
    FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
    if ( InstalledLanguageIndexByLangId < 0 )
    {
      v7 = v29;
      if ( InstalledLanguageIndexByLangId == -1073741823 )
        FallbackLanguagesAsMultiSZ = -1073741772;
LABEL_53:
      v19 = (__int64)v35;
      if ( !v35 )
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
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v30) < 0 )
              break;
            LOBYTE(v24) = 1;
            FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                             v13,
                                             (unsigned int)&v39,
                                             (unsigned __int16)v30,
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
    if ( a4 )
    {
      v7 = v29;
      *a4 = v9;
      if ( (_BYTE)v23 )
        *a4 = 2;
      else
        FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                       v33,
                                       v13,
                                       (unsigned int)&v39,
                                       (_DWORD)a4,
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
  if ( !FallbackLanguagesAsMultiSZ && a4 && *a4 > v9 )
  {
    if ( v7 )
      return (unsigned int)-1073741789;
  }
  return FallbackLanguagesAsMultiSZ;
}
