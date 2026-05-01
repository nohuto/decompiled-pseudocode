/*
 * XREFs of ?TryGetCertSubjectName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18056B220
 * Callers:
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18056B008 (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180065868 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802EBA5C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18056AD24 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-L.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AHPEAX@Z$1?CryptMsgClose@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18056AE40 (--1-$unique_storage@U-$resource_policy@PEAXP6AHPEAX@Z$1-CryptMsgClose@@YAH0@ZU-$integral_constan.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CertCloseStoreNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18056AE68 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CertCloseStoreNoParam@details@wil@@YAX0.c)
 *     ??1?$unique_storage@U?$resource_policy@PEBU_CERT_CONTEXT@@P6AHPEBU1@@Z$1?CertFreeCertificateContext@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEBU1@PEBU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18056AE88 (--1-$unique_storage@U-$resource_policy@PEBU_CERT_CONTEXT@@P6AHPEBU1@@Z$1-CertFreeCertificateCont.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall TryGetCertSubjectName(_QWORD *a1, const void *a2)
{
  char *v3; // rbx
  const char *v4; // r9
  const CERT_CONTEXT *CertificateInStore; // rax
  const CERT_CONTEXT *v6; // rdi
  DWORD NameStringW; // r14d
  void *v8; // rdx
  HCRYPTMSG hCryptMsg; // [rsp+60h] [rbp-A0h] BYREF
  LPWSTR pszNameString; // [rsp+68h] [rbp-98h] BYREF
  HCERTSTORE hCertStore; // [rsp+70h] [rbp-90h] BYREF
  const CERT_CONTEXT *v13[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE pvFindPara[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v15; // [rsp+98h] [rbp-68h]
  __int128 v16; // [rsp+C0h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]
  DWORD pcbData; // [rsp+1A0h] [rbp+A0h] BYREF
  int pvTypePara; // [rsp+1A8h] [rbp+A8h] BYREF

  hCryptMsg = 0LL;
  hCertStore = 0LL;
  if ( !CryptQueryObject(1u, a2, 0x400u, 2u, 0, 0LL, 0LL, 0LL, &hCertStore, &hCryptMsg, 0LL)
    || !CryptMsgGetParam(hCryptMsg, 6u, 0, 0LL, &pcbData) )
  {
    goto LABEL_13;
  }
  v3 = (char *)LocalAlloc(0x40u, pcbData);
  v13[1] = (const CERT_CONTEXT *)v3;
  if ( !v3 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x1B,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v4);
  if ( !CryptMsgGetParam(hCryptMsg, 6u, 0, v3, &pcbData) )
  {
LABEL_12:
    LocalFree(v3);
LABEL_13:
    a1[2] = 0LL;
    a1[3] = 7LL;
    *(_WORD *)a1 = 0;
    goto LABEL_14;
  }
  memset_0(pvFindPara, 0, 0xD0uLL);
  v16 = *(_OWORD *)(v3 + 8);
  v15 = *(_OWORD *)(v3 + 24);
  CertificateInStore = CertFindCertificateInStore(hCertStore, 0x10001u, 0, 0xB0000u, pvFindPara, 0LL);
  v6 = CertificateInStore;
  v13[0] = CertificateInStore;
  if ( !CertificateInStore
    || (pvTypePara = 33554435, (NameStringW = CertGetNameStringW(CertificateInStore, 2u, 0, &pvTypePara, 0LL, 0)) == 0) )
  {
LABEL_11:
    wil::details::unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>(v13);
    goto LABEL_12;
  }
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&pszNameString);
  if ( !CertGetNameStringW(v6, 2u, 0, &pvTypePara, pszNameString, NameStringW) )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&pszNameString);
    goto LABEL_11;
  }
  std::wstring::wstring(a1, pszNameString);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&pszNameString);
  wil::details::unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>(v13);
  LocalFree(v3);
LABEL_14:
  wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CryptMsgClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CryptMsgClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&hCryptMsg);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CertCloseStoreNoParam_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    (wil::details **)&hCertStore,
    v8);
  return a1;
}
