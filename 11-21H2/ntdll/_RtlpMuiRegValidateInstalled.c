/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x18011406C
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x180113838 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpMuiRegGetOrAddString @ 0x18004B16C (RtlpMuiRegGetOrAddString.c)
 *     RtlLCIDToCultureName @ 0x18004B690 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18004B778 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _MuiRegAllocArray @ 0x18004B8B8 (_MuiRegAllocArray.c)
 *     RtlpIsALicensedRegularLanguage @ 0x18004C864 (RtlpIsALicensedRegularLanguage.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18006F570 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpGetNameFromLangInfoNode @ 0x180089520 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtIsUILanguageComitted @ 0x1800A6180 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A6B40 (NtQueryInstallUILanguage.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x180111B54 (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x18011443C (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x18011467C (_RtlpMuiRegValidatePartialLanguage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1801147B8 (_RtlpRemovePendingDeleteLanguages.c)
 */

NTSTATUS __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  unsigned __int16 v2; // di
  int v3; // esi
  int v4; // r15d
  wchar_t *v5; // r12
  NTSTATUS IsUILanguageComitted; // eax
  unsigned __int16 v7; // dx
  bool v8; // r13
  NTSTATUS result; // eax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  wchar_t *v13; // rax
  __int64 v14; // r8
  int v15; // eax
  unsigned __int16 v16; // cx
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rdi
  unsigned int v22; // r8d
  __int64 v23; // r9
  __int16 v24; // cx
  int v25; // r10d
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdi
  __int16 v29; // r11
  unsigned int v30; // r8d
  int v31; // edi
  __int64 v32; // rsi
  __int64 v33; // rcx
  LANGID InstallUILanguageId[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v35[2]; // [rsp+2Ch] [rbp-DCh] BYREF
  _UNICODE_STRING String; // [rsp+30h] [rbp-D8h] BYREF
  wchar_t *v37; // [rsp+40h] [rbp-C8h]
  int v38; // [rsp+48h] [rbp-C0h] BYREF
  LANGID v39; // [rsp+4Ch] [rbp-BCh]
  int v40; // [rsp+4Eh] [rbp-BAh]
  __int64 v41; // [rsp+54h] [rbp-B4h]
  __int64 v42; // [rsp+5Ch] [rbp-ACh]
  _BYTE v43[176]; // [rsp+68h] [rbp-A0h] BYREF

  v2 = -1;
  InstallUILanguageId[0] = 0;
  v35[0] = -1;
  v37 = 0LL;
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
  memset(v43, 0, 0xAAuLL);
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
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v7, 0, v35);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    v35[0] = -1;
    v13 = (wchar_t *)MuiRegAllocArray(v11, 0x55u);
    v37 = v13;
    v5 = v13;
    if ( !v13 )
      return -1073741801;
    String.Buffer = v13;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
    {
      LOBYTE(v14) = 1;
      v15 = RtlpMuiRegGetOrAddString(a1, String.Buffer, v14, v35);
      v16 = -1;
      if ( v15 >= 0 )
        v16 = v35[0];
      v40 = v16;
      v39 = InstallUILanguageId[0];
      v38 = 49;
      v41 = 0LL;
      v42 = 0LL;
      RtlpMuiRegAddNeutralLanguage(a1, (__int64)&v38, String.Buffer);
      if ( (int)RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)&v38, 0LL) >= 0 )
      {
        v12 = *(_QWORD *)(a1 + 24);
        v3 = *(unsigned __int16 *)(v12 + 6) - 1;
        goto LABEL_16;
      }
    }
  }
  else if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = v35[0];
    v12 = *(_QWORD *)(a1 + 24);
LABEL_16:
    if ( v3 != -1 )
    {
      v17 = *(_QWORD *)(v12 + 16);
      String.Buffer = (wchar_t *)v43;
      String.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + v17, &String) >= 0 )
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
  v18 = *(_QWORD *)(a1 + 24);
  v19 = 0;
  if ( *(_WORD *)(v18 + 6) )
  {
    v20 = *(_QWORD *)(a1 + 24);
    v21 = 0LL;
    do
    {
      v18 = v20;
      if ( (*(_BYTE *)(v21 + *(_QWORD *)(v20 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v19);
        v22 = v4 + 1;
        v18 = *(_QWORD *)(a1 + 24);
        v23 = *(_QWORD *)(v18 + 16);
        v24 = *(_WORD *)(v23 + v21);
        if ( (v24 & 0x1000) != 0 )
          v22 = v4;
        v4 = v22;
        if ( v8 && v19 != v3 && v22 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v23 + v21) = v24 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v21) |= 0x8000u;
          v18 = *(_QWORD *)(a1 + 24);
        }
      }
      ++v19;
      v21 += 28LL;
      v20 = v18;
    }
    while ( v19 < *(unsigned __int16 *)(v18 + 6) );
    v5 = v37;
  }
  v25 = 0;
  if ( *(_WORD *)(v18 + 6) )
  {
    v26 = v18;
    v27 = 0LL;
    do
    {
      v28 = *(_QWORD *)(v26 + 16);
      v18 = v26;
      v29 = *(_WORD *)(v28 + v27);
      if ( (v29 & 0x21) == 0x21 )
      {
        v30 = v4 + 1;
        if ( (v29 & 0x1000) != 0 )
          v30 = v4;
        v4 = v30;
        if ( v8 && v25 != v3 && v30 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v28 + v27) = v29 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v27) |= 0x8000u;
          v18 = *(_QWORD *)(a1 + 24);
        }
      }
      ++v25;
      v27 += 28LL;
      v26 = v18;
    }
    while ( v25 < *(unsigned __int16 *)(v18 + 6) );
    v5 = v37;
  }
  v31 = 0;
  if ( *(_WORD *)(v18 + 6) )
  {
    v32 = 0LL;
    do
    {
      v33 = v18;
      if ( (*(_BYTE *)(v32 + *(_QWORD *)(v18 + 16)) & 4) != 0 )
      {
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v31);
        v33 = *(_QWORD *)(a1 + 24);
      }
      ++v31;
      v32 += 28LL;
      v18 = v33;
    }
    while ( v31 < *(unsigned __int16 *)(v33 + 6) );
  }
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0;
}
