/*
 * XREFs of ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x1800ADB40
 * Callers:
 *     ?CreateTileIdentifier@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W00@Z @ 0x1800AD3F4 (-CreateTileIdentifier@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@U.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180096FF4 (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x18009FE98 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 *     ??$GetActivationFactory@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800ABAE4 (--$GetActivationFactory@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@@wil@@YA.c)
 *     ??$GetActivationFactory@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800ABB84 (--$GetActivationFactory@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@@wil@.c)
 *     ?reserve@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K@Z @ 0x1800B052C (-reserve@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
const WCHAR *__fastcall CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias(
        __int64 a1,
        const WCHAR *a2,
        _WORD *a3,
        _WORD *a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, PVOID, _QWORD, __int64 *); // rdi
  const WCHAR *v16; // rax
  HSTRING_HEADER *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, HSTRING *); // rdi
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, __int64, const WCHAR *); // rdi
  int v30; // eax
  int v32; // [rsp+20h] [rbp-79h]
  HSTRING string; // [rsp+30h] [rbp-69h] BYREF
  __int64 v34; // [rsp+38h] [rbp-61h] BYREF
  __int64 *v35; // [rsp+40h] [rbp-59h] BYREF
  __int64 v36; // [rsp+48h] [rbp-51h] BYREF
  int v37; // [rsp+50h] [rbp-49h]
  __int64 v38; // [rsp+58h] [rbp-41h] BYREF
  __int64 v39; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v40; // [rsp+68h] [rbp-31h] BYREF
  const WCHAR *v41[2]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v42[3]; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int64 v43; // [rsp+98h] [rbp-1h]
  HSTRING_HEADER v44; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v41[1] = a2;
  v37 = 0;
  v43 = 7LL;
  v42[2] = 0LL;
  LOWORD(v42[0]) = 0;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( a4[v8] );
  do
    ++v7;
  while ( a3[v7] );
  std::wstring::reserve(v42, v8 + v7 + 2);
  std::wstring::append((__int64)v42, a3);
  std::wstring::append((__int64)v42, L"_");
  std::wstring::append((__int64)v42, a4);
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>((const WCHAR *)&v38, v9, v10);
  wil::GetActivationFactory<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>(
    (const WCHAR *)&v40,
    v11,
    v12);
  v36 = 0LL;
  v14 = v38;
  v15 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, __int64 *))(*(_QWORD *)v38 + 120LL);
  v36 = 0LL;
  v16 = (const WCHAR *)v42;
  if ( v43 >= 8 )
    v16 = (const WCHAR *)v42[0];
  v41[0] = v16;
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, v41, v13);
  v18 = v15(v14, v17[1].Reserved.Reserved1, 0LL, &v36);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v18,
      v32);
  wil::GetActivationFactory<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>(
    (const WCHAR *)&v39,
    v19,
    v20);
  string = 0LL;
  v21 = v39;
  v22 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v39 + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v23 = v22(v21, &string);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x201,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v23,
      v32);
  v35 = 0LL;
  v24 = *v40;
  v35 = 0LL;
  v25 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, __int64 **))(v24 + 48))(v40, string, &v35);
  if ( v25 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x205,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v25,
      v32);
  v34 = 0LL;
  v26 = *v35;
  v34 = 0LL;
  v27 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v26 + 64))(v35, v36, &v34);
  if ( v27 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x207,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v27,
      v32);
  *(_QWORD *)a2 = 0LL;
  v37 = 1;
  v28 = v38;
  v29 = *(__int64 (__fastcall **)(__int64, __int64, const WCHAR *))(*(_QWORD *)v38 + 96LL);
  WindowsDeleteString(0LL);
  *(_QWORD *)a2 = 0LL;
  v30 = v29(v28, v34, a2);
  if ( v30 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x209,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v30,
      v32);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v34);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v35);
  WindowsDeleteString(string);
  string = 0LL;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v39);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v36);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v40);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v38);
  std::wstring::_Tidy(v42, 1, 0LL);
  return a2;
}
