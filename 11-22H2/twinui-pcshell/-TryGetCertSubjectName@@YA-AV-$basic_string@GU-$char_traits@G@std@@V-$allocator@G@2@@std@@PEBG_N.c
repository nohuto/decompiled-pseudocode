/*
 * XREFs of ?TryGetCertSubjectName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG_N@Z @ 0x1806221C0
 * Callers:
 *     ?GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x18061D5D0 (-GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING_.c)
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180621F8C (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D66A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180621D2C (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-L.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CertCloseStoreNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180621E50 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CertCloseStoreNoParam@details@wil@@YAX0.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall TryGetCertSubjectName(_QWORD *a1, const void *a2, char a3)
{
  char *v5; // rsi
  const char *v6; // r9
  PCCERT_CONTEXT CertificateInStore; // rbx
  int v8; // eax
  DWORD NameStringW; // eax
  __int64 v10; // rdx
  const char *v11; // r9
  DWORD v12; // r14d
  int pvTypePara; // [rsp+60h] [rbp-A0h] BYREF
  HCRYPTMSG hCryptMsg; // [rsp+68h] [rbp-98h] BYREF
  LPWSTR pszNameString; // [rsp+70h] [rbp-90h] BYREF
  HCERTSTORE hCertStore[5]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE pvFindPara[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v19; // [rsp+A8h] [rbp-58h]
  __int128 v20; // [rsp+D0h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]
  DWORD pcbData; // [rsp+1A8h] [rbp+A8h] BYREF

  hCryptMsg = 0LL;
  hCertStore[0] = 0LL;
  if ( !CryptQueryObject(1u, a2, 0x400u, 2u, 0, 0LL, 0LL, 0LL, hCertStore, &hCryptMsg, 0LL)
    || !CryptMsgGetParam(hCryptMsg, 6u, 0, 0LL, &pcbData) )
  {
    goto LABEL_19;
  }
  v5 = (char *)LocalAlloc(0x40u, pcbData);
  hCertStore[2] = v5;
  if ( !v5 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x1B,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v6);
  if ( !CryptMsgGetParam(hCryptMsg, 6u, 0, v5, &pcbData) )
  {
LABEL_18:
    LocalFree(v5);
LABEL_19:
    *a1 = 0LL;
    a1[2] = 0LL;
    a1[3] = 7LL;
    *(_WORD *)a1 = 0;
    goto LABEL_20;
  }
  memset_0(pvFindPara, 0, 0xD0uLL);
  v20 = *(_OWORD *)(v5 + 8);
  v19 = *(_OWORD *)(v5 + 24);
  CertificateInStore = CertFindCertificateInStore(hCertStore[0], 0x10001u, 0, 0xB0000u, pvFindPara, 0LL);
  hCertStore[3] = (HCERTSTORE)CertificateInStore;
  if ( !CertificateInStore )
    goto LABEL_16;
  v8 = 3;
  if ( a3 )
    v8 = 33554435;
  pvTypePara = v8;
  NameStringW = CertGetNameStringW(CertificateInStore, 2u, 0, &pvTypePara, 0LL, 0);
  v12 = NameStringW;
  if ( !NameStringW )
  {
LABEL_16:
    if ( CertificateInStore )
      CertFreeCertificateContext(CertificateInStore);
    goto LABEL_18;
  }
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pszNameString,
    v10,
    NameStringW,
    v11);
  if ( !CertGetNameStringW(CertificateInStore, 2u, 0, &pvTypePara, pszNameString, v12) )
  {
    if ( pszNameString )
      LocalFree(pszNameString);
    goto LABEL_16;
  }
  std::wstring::wstring(a1, pszNameString);
  if ( pszNameString )
    LocalFree(pszNameString);
  CertFreeCertificateContext(CertificateInStore);
  LocalFree(v5);
LABEL_20:
  if ( hCryptMsg )
    CryptMsgClose(hCryptMsg);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CertCloseStoreNoParam_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(hCertStore);
  return a1;
}
