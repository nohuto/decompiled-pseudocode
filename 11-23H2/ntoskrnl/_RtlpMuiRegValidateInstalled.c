/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x140844F40
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1408456D0 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x1403A129C (_MuiRegAllocArray.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403A1360 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1403A1644 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     NtQueryInstallUILanguage @ 0x1407FCAE0 (NtQueryInstallUILanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x1408451A4 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140845278 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegGetOrAddString @ 0x140845B68 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x14085F00C (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlLCIDToCultureName @ 0x1409BEEF0 (RtlLCIDToCultureName.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x140A760D8 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x140A7631C (_RtlpMuiRegValidatePartialLanguage.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  int v2; // r15d
  wchar_t *v3; // r12
  __int16 v4; // si
  int v5; // edi
  LANGID v6; // r14
  unsigned int v7; // r13d
  NTSTATUS result; // eax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r14d
  __int64 v13; // rsi
  int v14; // r10d
  __int64 v15; // r8
  __int64 v16; // r11
  __int16 v17; // cx
  unsigned int v18; // edx
  int v19; // edi
  __int64 v20; // rsi
  wchar_t *v21; // rax
  __int64 v22; // r8
  bool v23; // sf
  LANGID v24; // ax
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int16 v27; // ax
  LANGID InstallUILanguageId[4]; // [rsp+28h] [rbp-E0h] BYREF
  wchar_t *v29; // [rsp+30h] [rbp-D8h]
  UNICODE_STRING String; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING v31; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v32[4]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v33[176]; // [rsp+78h] [rbp-90h] BYREF

  InstallUILanguageId[0] = 0;
  v2 = 0;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  v3 = 0LL;
  v29 = 0LL;
  v4 = -1;
  InstallUILanguageId[2] = -1;
  v5 = -1;
  memset(v32, 0, 28);
  v31 = 0LL;
  memset(v33, 0, 0xAAuLL);
  v6 = *(_WORD *)(a1 + 4);
  v7 = PsUILanguageComitted == 0 ? 0xC0000034 : 0;
  if ( !v6 )
  {
    result = NtQueryInstallUILanguage(InstallUILanguageId);
    if ( result < 0 )
      return result;
    v6 = InstallUILanguageId[0];
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v6, 0LL, &InstallUILanguageId[2]);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    InstallUILanguageId[0] = -1;
    v21 = (wchar_t *)MuiRegAllocArray(v10, 0x55u);
    v29 = v21;
    v3 = v21;
    if ( !v21 )
      return -1073741801;
    String.Buffer = v21;
    *(_DWORD *)&String.Length = 11141120;
    if ( !RtlLCIDToCultureName(v6, &String) )
      goto LABEL_12;
    LOBYTE(v22) = 1;
    v23 = (int)RtlpMuiRegGetOrAddString(a1, String.Buffer, v22, InstallUILanguageId) < 0;
    v24 = -1;
    if ( !v23 )
      v24 = InstallUILanguageId[0];
    HIWORD(v32[0]) = v24;
    LODWORD(v32[0]) = 49;
    WORD2(v32[0]) = v6;
    memset(&v32[1], 0, 20);
    if ( (int)RtlpMuiRegGetOrAddLangInfo(a1 + 24, v32, 0LL) < 0 )
      goto LABEL_12;
    v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL) - 1;
    goto LABEL_8;
  }
  if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v5 = (__int16)InstallUILanguageId[2];
LABEL_8:
    if ( v5 != -1 )
    {
      v31.Buffer = (wchar_t *)v33;
      v31.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v5 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), &v31) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage(a1, v31.Buffer) < 0 )
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v5) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v5) |= 0x8000u;
        }
        else
        {
          v2 = 1;
        }
      }
    }
  }
LABEL_12:
  if ( !v7 )
    v4 = v5;
  RtlpRemovePendingDeleteLanguages(a1, v4);
  v11 = *(_QWORD *)(a1 + 24);
  v12 = 0;
  if ( *(_WORD *)(v11 + 6) )
  {
    v13 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v13 + *(_QWORD *)(v11 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v12);
        v25 = v2 + 1;
        v26 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v27 = *(_WORD *)(v26 + v13);
        if ( (v27 & 0x1000) != 0 )
          v25 = v2;
        v2 = v25;
        if ( !v7 && v12 != v5 && v25 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v26 + v13) = v27 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v13) |= 0x8000u;
        }
      }
      v11 = *(_QWORD *)(a1 + 24);
      ++v12;
      v13 += 28LL;
    }
    while ( v12 < *(unsigned __int16 *)(v11 + 6) );
    v3 = v29;
  }
  v14 = 0;
  if ( *(_WORD *)(v11 + 6) )
  {
    v15 = 0LL;
    do
    {
      v16 = *(_QWORD *)(v11 + 16);
      v17 = *(_WORD *)(v16 + v15);
      if ( (v17 & 0x21) == 0x21 )
      {
        v18 = v2 + 1;
        if ( (v17 & 0x1000) != 0 )
          v18 = v2;
        v2 = v18;
        if ( !v7 && v14 != v5 && v18 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v16 + v15) = v17 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v15) |= 0x8000u;
        }
      }
      v11 = *(_QWORD *)(a1 + 24);
      ++v14;
      v15 += 28LL;
    }
    while ( v14 < *(unsigned __int16 *)(v11 + 6) );
    v3 = v29;
  }
  v19 = 0;
  if ( *(_WORD *)(v11 + 6) )
  {
    v20 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v20 + *(_QWORD *)(v11 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v19);
      v11 = *(_QWORD *)(a1 + 24);
      ++v19;
      v20 += 28LL;
    }
    while ( v19 < *(unsigned __int16 *)(v11 + 6) );
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return 0;
}
