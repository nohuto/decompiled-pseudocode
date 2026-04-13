/*
 * XREFs of ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x1800AAA8C
 * Callers:
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800AA060 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIInspectable@@@wil@@YA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800A9170 (--$GetActivationFactory@UIInspectable@@@wil@@YA-AV-$com_ptr_t@UIInspectable@@Uerr_exception_poli.c)
 *     ??$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800A9214 (--$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@W.c)
 *     ??$query@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A9A80 (--$query@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@@-$com_ptr_t.c)
 *     ??$wait_for_completion@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@V?$ComPtr@UIGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800A9AE0 (--$wait_for_completion@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Wi.c)
 *     ??$wait_for_completion@PEAVWebAccountProvider@Credentials@Security@Windows@@V?$ComPtr@UIWebAccountProvider@Credentials@Security@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIWebAccountProvider@Credentials@Security@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800A9B64 (--$wait_for_completion@PEAVWebAccountProvider@Credentials@Security@Windows@@V-$ComPtr@UIWebAccou.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
bool __fastcall CreativeFramework::Actions::IsMsaConnected(
        CreativeFramework::Actions *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, PVOID, PVOID, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rsi
  unsigned int v5; // r8d
  PVOID Reserved1; // rdi
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  int v10; // r8d
  const WCHAR *v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // r8d
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  signed __int64 v21; // rax
  bool v22; // bl
  int v24; // [rsp+20h] [rbp-A8h]
  const WCHAR *v25; // [rsp+30h] [rbp-98h] BYREF
  const WCHAR *v26; // [rsp+38h] [rbp-90h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-88h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-80h] BYREF
  __int64 *v29; // [rsp+50h] [rbp-78h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-70h] BYREF
  const WCHAR *v31; // [rsp+60h] [rbp-68h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp-60h] BYREF
  __int64 v33; // [rsp+70h] [rbp-58h] BYREF
  HSTRING_HEADER v34; // [rsp+78h] [rbp-50h] BYREF
  HSTRING_HEADER v35; // [rsp+98h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v26 = L"https://login.microsoft.com";
  v31 = L"consumers";
  wil::GetActivationFactory<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>(
    (const WCHAR *)&v33,
    a2,
    a3);
  v30 = 0LL;
  v3 = v33;
  v4 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v33 + 96LL);
  v30 = 0LL;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, &v31, v5)[1].Reserved.Reserved1;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, &v26, v7);
  v9 = v4(v3, v8[1].Reserved.Reserved1, Reserved1, &v30);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v9,
      v24);
  wil::wait_for_completion<Windows::Security::Credentials::WebAccountProvider *,Microsoft::WRL::ComPtr<Windows::Security::Credentials::IWebAccountProvider>>(
    &v25,
    v30,
    v10);
  v11 = v25;
  v25 = 0LL;
  v31 = v11;
  if ( !v11 )
    goto LABEL_21;
  wil::GetActivationFactory<IInspectable>((WCHAR *)&v32);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Internal::Security::Authentication::Web::ITokenBrokerInternalStatics>(
    &v32,
    &v29);
  *(GUID *)&v34.Reserved.Reserved1 = GUID_00000000_0000_0000_0000_000000000000;
  v12 = (*(__int64 (__fastcall **)(__int64 *, const WCHAR *, HSTRING_HEADER *))(*v29 + 264))(v29, v11, &v34);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v12,
      v24);
  v28 = 0LL;
  v13 = *v29;
  v28 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v13 + 232))(
          v29,
          &v28);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v14,
      v24);
  wil::wait_for_completion<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *,Microsoft::WRL::ComPtr<Windows::Internal::Security::Authentication::Web::IGetDefaultSignInAccountResult>>(
    &v26,
    v28,
    v15);
  v27 = 0LL;
  v16 = *(_QWORD *)v26;
  v27 = 0LL;
  v17 = (*(__int64 (__fastcall **)(const WCHAR *, __int64 **))(v16 + 48))(v26, &v27);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v17,
      v24);
  if ( !v27 )
  {
LABEL_20:
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v27);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v26);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v28);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v29);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v32);
LABEL_21:
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v31);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v30);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v33);
    return 0;
  }
  v25 = 0LL;
  v18 = *v27;
  v25 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64 *, const WCHAR **))(v18 + 48))(v27, &v25);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v19,
      v24);
  if ( !v25 )
  {
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v25);
    goto LABEL_20;
  }
  *(GUID *)&v35.Reserved.Reserved1 = GUID_00000000_0000_0000_0000_000000000000;
  v20 = (*(__int64 (__fastcall **)(__int64 *, const WCHAR *, HSTRING_HEADER *))(*v29 + 264))(v29, v25, &v35);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v20,
      v24);
  v21 = (char *)v34.Reserved.Reserved1 - (char *)v35.Reserved.Reserved1;
  if ( v34.Reserved.Reserved1 == v35.Reserved.Reserved1 )
    v21 = *(_QWORD *)&v34.Reserved.Reserved2[8] - *(_QWORD *)&v35.Reserved.Reserved2[8];
  v22 = v21 == 0;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v25);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v27);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v26);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v28);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v29);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v32);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v31);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v30);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v33);
  return v22;
}
