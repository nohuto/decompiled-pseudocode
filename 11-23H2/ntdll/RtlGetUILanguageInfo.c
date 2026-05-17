/*
 * XREFs of RtlGetUILanguageInfo @ 0x18008A6F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014788 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180015AB0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015B98 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F190 (RtlpCreateProcessRegistryInfo.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18007021C (RtlpCheckMuiMultiStringSafe.c)
 *     RtlUnicodeStringToInteger @ 0x180077500 (RtlUnicodeStringToInteger.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18008ABA0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18008AC20 (RtlpInitializeLangRegistryInfo.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlUnicodeStringToLcid @ 0x1800FB7BC (RtlUnicodeStringToLcid.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180112DCC (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180112F84 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1801130F4 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 */

__int64 __fastcall RtlGetUILanguageInfo(int a1, WCHAR *a2, _WORD *a3, unsigned int *a4, int *a5)
{
  char v5; // bl
  _WORD *v7; // r12
  WCHAR *v8; // rdi
  unsigned int v9; // r13d
  const WCHAR *v11; // rdi
  int v12; // r8d
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // r15d
  int v17; // eax
  __int64 v18; // rsi
  unsigned int FallbackLanguagesAsMultiSZ; // ebx
  __int64 v20; // r12
  int InstalledLanguageIndexByLangId; // eax
  __int64 v22; // r9
  __int64 v23; // r15
  wchar_t *Heap; // rax
  int v25; // r9d
  int FallbackLanguageInfoByLangId; // eax
  char v27; // [rsp+30h] [rbp-61h]
  _WORD v28[2]; // [rsp+34h] [rbp-5Dh] BYREF
  _WORD *v29; // [rsp+38h] [rbp-59h]
  unsigned int v30; // [rsp+40h] [rbp-51h] BYREF
  int v31; // [rsp+44h] [rbp-4Dh]
  __int64 v32; // [rsp+48h] [rbp-49h] BYREF
  int v33; // [rsp+50h] [rbp-41h]
  int v34; // [rsp+54h] [rbp-3Dh]
  wchar_t *v35; // [rsp+58h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-31h] BYREF
  int *v37; // [rsp+70h] [rbp-21h]
  UNICODE_STRING v38; // [rsp+78h] [rbp-19h] BYREF
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
  v15 = 4LL;
  v16 = a1 & 4;
  if ( (a1 & 4) == 0 )
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
  if ( a4 )
    *a4 = 2;
  if ( a5 )
    *a5 = 0;
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
    v20 = *(_QWORD *)(v32 + 24);
    if ( v16 )
    {
      v27 = 1;
      Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
      v35 = Heap;
      if ( !Heap )
      {
        FallbackLanguagesAsMultiSZ = -1073741801;
LABEL_65:
        v18 = v32;
LABEL_66:
        v7 = v29;
        goto LABEL_20;
      }
      DestinationString.Buffer = Heap;
      *(_DWORD *)&DestinationString.Length = 11141120;
      RtlInitUnicodeString(&v38, v8);
      if ( (int)RtlUnicodeStringToLcid(&v38, &v30) < 0 || !RtlLCIDToCultureName(v30, (__int64)&DestinationString) )
      {
        v14 = (__int64)v35;
        FallbackLanguagesAsMultiSZ = -1073741811;
LABEL_64:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
        goto LABEL_65;
      }
      v18 = v32;
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v32, v30, 1, v28);
    }
    else
    {
      v27 = 0;
      RtlInitUnicodeString(&DestinationString, v8);
      if ( !RtlCultureNameToLCID(&DestinationString.Length, (int *)&v30) )
      {
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_66;
      }
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName(v18, v8, 1, v28);
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
              RtlInitUnicodeString(&v38, v11);
              if ( (int)RtlUnicodeStringToInteger(&v38.Length, 0x10u, (int *)&v30) < 0 )
                break;
              LOBYTE(v25) = 1;
              FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                               v18,
                                               (unsigned int)&v39,
                                               (unsigned __int16)v30,
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
        if ( !a4 )
          goto LABEL_18;
        v7 = v29;
        *a4 = v9;
        if ( (_BYTE)v12 )
          *a4 = 2;
        else
          FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                         v33,
                                         v18,
                                         (unsigned int)&v39,
                                         (_DWORD)a4,
                                         (__int64)v7);
LABEL_19:
        v14 = (__int64)v35;
        if ( !v35 )
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
  if ( !FallbackLanguagesAsMultiSZ && a4 && *a4 > v9 )
  {
    if ( v7 )
      return (unsigned int)-1073741789;
  }
  return FallbackLanguagesAsMultiSZ;
}
