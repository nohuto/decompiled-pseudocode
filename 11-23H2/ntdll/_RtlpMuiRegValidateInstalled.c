/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x180115950
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x180115124 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180009F98 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180010484 (RtlpIsALicensedRegularLanguage.c)
 *     RtlLCIDToCultureName @ 0x180015AB0 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015B98 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _MuiRegAllocArray @ 0x180015CD8 (_MuiRegAllocArray.c)
 *     RtlpMuiRegGetOrAddString @ 0x180016498 (RtlpMuiRegGetOrAddString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800861D0 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtIsUILanguageComitted @ 0x1800A2FE0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A39E0 (NtQueryInstallUILanguage.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x180113440 (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x180115D00 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x180115F48 (_RtlpMuiRegValidatePartialLanguage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180116084 (_RtlpRemovePendingDeleteLanguages.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  unsigned __int16 v2; // si
  int v3; // edi
  int v4; // r14d
  wchar_t *v5; // r12
  NTSTATUS IsUILanguageComitted; // eax
  unsigned __int16 v7; // dx
  bool v8; // r13
  NTSTATUS result; // eax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v11; // rcx
  wchar_t *v12; // rax
  __int64 v13; // r8
  int v14; // eax
  unsigned __int16 v15; // cx
  __int64 v16; // rcx
  int v17; // r15d
  __int64 v18; // rsi
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int16 v21; // ax
  int v22; // r10d
  __int64 v23; // r8
  __int64 v24; // r11
  __int16 v25; // cx
  unsigned int v26; // edx
  int v27; // edi
  __int64 v28; // rsi
  LANGID InstallUILanguageId[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v30[2]; // [rsp+2Ch] [rbp-DCh] BYREF
  _UNICODE_STRING String; // [rsp+30h] [rbp-D8h] BYREF
  wchar_t *v32; // [rsp+40h] [rbp-C8h]
  int v33; // [rsp+48h] [rbp-C0h] BYREF
  LANGID v34; // [rsp+4Ch] [rbp-BCh]
  int v35; // [rsp+4Eh] [rbp-BAh]
  __int64 v36; // [rsp+54h] [rbp-B4h]
  __int64 v37; // [rsp+5Ch] [rbp-ACh]
  _BYTE v38[176]; // [rsp+68h] [rbp-A0h] BYREF

  v2 = -1;
  InstallUILanguageId[0] = 0;
  v30[0] = -1;
  v32 = 0LL;
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
  memset_thunk_772440563353939046(v38, 0, 0xAAuLL);
  IsUILanguageComitted = NtIsUILanguageComitted();
  v7 = *(_WORD *)(a1 + 4);
  v8 = IsUILanguageComitted == 0;
  if ( v7 )
  {
    InstallUILanguageId[0] = *(_WORD *)(a1 + 4);
  }
  else
  {
    result = NtQueryInstallUILanguage(InstallUILanguageId);
    if ( result < 0 )
      return result;
    v7 = InstallUILanguageId[0];
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v7, 0, v30);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    v30[0] = -1;
    v12 = (wchar_t *)MuiRegAllocArray(v11, 0x55u);
    v32 = v12;
    v5 = v12;
    if ( !v12 )
      return -1073741801;
    String.Buffer = v12;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
    {
      LOBYTE(v13) = 1;
      v14 = RtlpMuiRegGetOrAddString(a1, String.Buffer, v13, v30);
      v15 = -1;
      if ( v14 >= 0 )
        v15 = v30[0];
      v35 = v15;
      v34 = InstallUILanguageId[0];
      v33 = 49;
      v36 = 0LL;
      v37 = 0LL;
      RtlpMuiRegAddNeutralLanguage(a1, (__int64)&v33, String.Buffer);
      if ( (int)RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)&v33, 0LL) >= 0 )
      {
        v3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL) - 1;
        goto LABEL_16;
      }
    }
  }
  else if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = v30[0];
LABEL_16:
    if ( v3 != -1 )
    {
      String.Buffer = (wchar_t *)v38;
      String.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), &String) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage((_QWORD *)a1, String.Buffer) >= 0 )
        {
          v4 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) |= 0x8000u;
        }
      }
    }
  }
  if ( v8 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v16 = *(_QWORD *)(a1 + 24);
  v17 = 0;
  if ( *(_WORD *)(v16 + 6) )
  {
    v18 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v18 + *(_QWORD *)(v16 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v17);
        v19 = v4 + 1;
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v21 = *(_WORD *)(v20 + v18);
        if ( (v21 & 0x1000) != 0 )
          v19 = v4;
        v4 = v19;
        if ( v8 && v17 != v3 && v19 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v20 + v18) = v21 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v18) |= 0x8000u;
        }
      }
      v16 = *(_QWORD *)(a1 + 24);
      ++v17;
      v18 += 28LL;
    }
    while ( v17 < *(unsigned __int16 *)(v16 + 6) );
    v5 = v32;
  }
  v22 = 0;
  if ( *(_WORD *)(v16 + 6) )
  {
    v23 = 0LL;
    do
    {
      v24 = *(_QWORD *)(v16 + 16);
      v25 = *(_WORD *)(v24 + v23);
      if ( (v25 & 0x21) == 0x21 )
      {
        v26 = v4 + 1;
        if ( (v25 & 0x1000) != 0 )
          v26 = v4;
        v4 = v26;
        if ( v8 && v22 != v3 && v26 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v24 + v23) = v25 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v23) |= 0x8000u;
        }
      }
      v16 = *(_QWORD *)(a1 + 24);
      ++v22;
      v23 += 28LL;
    }
    while ( v22 < *(unsigned __int16 *)(v16 + 6) );
    v5 = v32;
  }
  v27 = 0;
  if ( *(_WORD *)(v16 + 6) )
  {
    v28 = 0LL;
    do
    {
      if ( (*(_BYTE *)(v28 + *(_QWORD *)(v16 + 16)) & 4) != 0 )
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v27);
      v16 = *(_QWORD *)(a1 + 24);
      ++v27;
      v28 += 28LL;
    }
    while ( v27 < *(unsigned __int16 *)(v16 + 6) );
  }
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0;
}
