/*
 * XREFs of ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x1800BACDC
 * Callers:
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800BA16C (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIInspectable@@@wil@@YA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B8E44 (--$GetActivationFactory@UIInspectable@@@wil@@YA-AV-$com_ptr_t@UIInspectable@@Uerr_exception_poli.c)
 *     ??$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B8EE4 (--$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@W.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800B936C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800B96D4 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=25 #try_helpers=1
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
  DWORD v10; // edx
  int v11; // r8d
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // r8d
  const WCHAR *v16; // rdi
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  DWORD v21; // edx
  int v22; // r8d
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rbx
  int DefaultSignInAccount; // eax
  const WCHAR *v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  __int64 *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  signed __int64 v32; // rax
  bool v33; // si
  int v35; // [rsp+20h] [rbp-A8h]
  const WCHAR *v36; // [rsp+30h] [rbp-98h] BYREF
  __int64 v37; // [rsp+38h] [rbp-90h] BYREF
  __int64 *v38; // [rsp+40h] [rbp-88h] BYREF
  __int64 *v39; // [rsp+48h] [rbp-80h] BYREF
  __int64 (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-78h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-70h] BYREF
  const WCHAR *v42; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v43[2]; // [rsp+68h] [rbp-60h] BYREF
  HSTRING_HEADER v44; // [rsp+78h] [rbp-50h] BYREF
  HSTRING_HEADER v45; // [rsp+98h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  LODWORD(v37) = 0;
  v36 = L"https://login.microsoft.com";
  v42 = L"consumers";
  wil::GetActivationFactory<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>(
    (const WCHAR *)v43,
    a2,
    a3);
  v41 = 0LL;
  v3 = v43[0];
  v4 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v43[0] + 96LL);
  v41 = 0LL;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v45, &v42, v5)[1].Reserved.Reserved1;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, &v36, v7);
  v9 = v4(v3, v8[1].Reserved.Reserved1, Reserved1, &v41);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      55LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v9,
      v35);
  v12 = v41;
  v36 = 0LL;
  LODWORD(v37) = 4;
  v13 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider *> *>(
          v41,
          v10,
          v11);
  if ( v13 >= 0 )
    v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), const WCHAR **))(*v12)[8])(
            v12,
            &v36);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1647LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v13,
      v35);
  v16 = v36;
  v36 = 0LL;
  v43[1] = v16;
  if ( v16 )
  {
    wil::GetActivationFactory<IInspectable>((const WCHAR *)&v42, v14, v15);
    v38 = 0LL;
    v17 = (**(__int64 (__fastcall ***)(const WCHAR *, GUID *, __int64 **))v42)(
            v42,
            &GUID_07650a66_66ea_489d_aa90_0dabc75f3567,
            &v38);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v17,
        v35);
    *(GUID *)&v44.Reserved.Reserved1 = GUID_00000000_0000_0000_0000_000000000000;
    v18 = (*(__int64 (__fastcall **)(__int64 *, const WCHAR *, HSTRING_HEADER *))(*v38 + 264))(v38, v16, &v44);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        65LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v18,
        v35);
    v40 = 0LL;
    v19 = *v38;
    v40 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v19 + 232))(
            v38,
            &v40);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        69LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v20,
        v35);
    v23 = v40;
    v36 = 0LL;
    LODWORD(v37) = 82;
    DefaultSignInAccount = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *> *>(
                             v40,
                             v21,
                             v22);
    if ( DefaultSignInAccount >= 0 )
      DefaultSignInAccount = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), const WCHAR **))(*v23)[8])(
                               v23,
                               &v36);
    if ( DefaultSignInAccount < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1647LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
        (const char *)(unsigned int)DefaultSignInAccount,
        v35);
    v25 = v36;
    v39 = 0LL;
    v26 = *(_QWORD *)v36;
    v39 = 0LL;
    v27 = (*(__int64 (__fastcall **)(const WCHAR *, __int64 **))(v26 + 48))(v36, &v39);
    if ( v27 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        72LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v27,
        v35);
    v28 = v39;
    if ( v39 )
    {
      v37 = 0LL;
      v29 = *v39;
      v37 = 0LL;
      v30 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v29 + 48))(v39, &v37);
      if ( v30 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          76LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
          (const char *)(unsigned int)v30,
          v35);
      if ( v37 )
      {
        *(GUID *)&v45.Reserved.Reserved1 = GUID_00000000_0000_0000_0000_000000000000;
        v31 = (*(__int64 (__fastcall **)(__int64 *, __int64, HSTRING_HEADER *))(*v38 + 264))(v38, v37, &v45);
        if ( v31 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            81LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
            (const char *)(unsigned int)v31,
            v35);
        v32 = (char *)v44.Reserved.Reserved1 - (char *)v45.Reserved.Reserved1;
        if ( v44.Reserved.Reserved1 == v45.Reserved.Reserved1 )
          v32 = *(_QWORD *)&v44.Reserved.Reserved2[8] - *(_QWORD *)&v45.Reserved.Reserved2[8];
        v33 = v32 == 0;
        if ( v37 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
        if ( v39 )
          (*(void (__fastcall **)(__int64 *))(*v39 + 16))(v39);
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v25 + 16LL))(v25);
        if ( v40 )
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v40)[2])(v40);
        if ( v38 )
          (*(void (__fastcall **)(__int64 *))(*v38 + 16))(v38);
        if ( v42 )
          (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v42 + 16LL))(v42);
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v16 + 16LL))(v16);
        if ( v41 )
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v41)[2])(v41);
        if ( v43[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v43[0] + 16LL))(v43[0]);
        return v33;
      }
      v28 = v39;
    }
    if ( v28 )
      (*(void (__fastcall **)(__int64 *))(*v28 + 16))(v28);
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v40 )
      ((void (*)(void))(*v40)[2])();
    if ( v38 )
      (*(void (**)(void))(*v38 + 16))();
    if ( v42 )
      (*(void (**)(void))(*(_QWORD *)v42 + 16LL))();
  }
  if ( v16 )
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v41 )
    ((void (*)(void))(*v41)[2])();
  if ( v43[0] )
    (*(void (**)(void))(*(_QWORD *)v43[0] + 16LL))();
  return 0;
}
