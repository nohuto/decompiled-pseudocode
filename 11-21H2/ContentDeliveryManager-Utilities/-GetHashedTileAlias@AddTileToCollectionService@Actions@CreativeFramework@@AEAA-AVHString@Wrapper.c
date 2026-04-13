/*
 * XREFs of ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x1800BED70
 * Callers:
 *     ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x1800BCCC8 (--0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x1800A3D30 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800A4528 (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800AF020 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$GetActivationFactory@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BC440 (--$GetActivationFactory@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@@wil@@YA.c)
 *     ??$GetActivationFactory@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BC4E0 (--$GetActivationFactory@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
const WCHAR *__fastcall CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias(
        __int64 a1,
        const WCHAR *a2,
        char *a3,
        char *a4)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  void **v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, PVOID, _QWORD, __int64 *); // rdi
  const WCHAR *v20; // rax
  HSTRING_HEADER *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, HSTRING *); // rdi
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, __int64, const WCHAR *); // rdi
  int v34; // eax
  int v36; // [rsp+20h] [rbp-79h]
  HSTRING string; // [rsp+30h] [rbp-69h] BYREF
  __int64 v38; // [rsp+38h] [rbp-61h] BYREF
  __int64 *v39; // [rsp+40h] [rbp-59h] BYREF
  __int64 v40; // [rsp+48h] [rbp-51h] BYREF
  int v41; // [rsp+50h] [rbp-49h]
  __int64 v42; // [rsp+58h] [rbp-41h] BYREF
  __int64 v43; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v44; // [rsp+68h] [rbp-31h] BYREF
  const WCHAR *v45[2]; // [rsp+70h] [rbp-29h] BYREF
  void *v46[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v47; // [rsp+90h] [rbp-9h]
  unsigned __int64 v48; // [rsp+98h] [rbp-1h]
  HSTRING_HEADER v49; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v45[1] = a2;
  v41 = 0;
  v48 = 7LL;
  v47 = 0LL;
  LOWORD(v46[0]) = 0;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)&a4[2 * v8] );
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)&a3[2 * v9] );
  v10 = v8 + v9 + 2;
  if ( v10 != 7 && std::wstring::_Grow((__int64)v46, v10, 1) )
  {
    v11 = v46;
    if ( v48 >= 8 )
      v11 = (void **)v46[0];
    v47 = 0LL;
    *(_WORD *)v11 = 0;
  }
  if ( *(_WORD *)a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)&a3[2 * v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::append((char *)v46, a3, v12);
  std::wstring::append((char *)v46, (char *)L"_", 1uLL);
  if ( *(_WORD *)a4 )
  {
    do
      ++v7;
    while ( *(_WORD *)&a4[2 * v7] );
  }
  else
  {
    v7 = 0LL;
  }
  std::wstring::append((char *)v46, a4, v7);
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>((const WCHAR *)&v42, v13, v14);
  wil::GetActivationFactory<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>(
    (const WCHAR *)&v44,
    v15,
    v16);
  v40 = 0LL;
  v18 = v42;
  v19 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, __int64 *))(*(_QWORD *)v42 + 120LL);
  v40 = 0LL;
  v20 = (const WCHAR *)v46;
  if ( v48 >= 8 )
    v20 = (const WCHAR *)v46[0];
  v45[0] = v20;
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v49, v45, v17);
  v22 = v19(v18, v21[1].Reserved.Reserved1, 0LL, &v40);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      519LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v22,
      v36);
  wil::GetActivationFactory<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>(
    (const WCHAR *)&v43,
    v23,
    v24);
  string = 0LL;
  v25 = v43;
  v26 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v43 + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v27 = v26(v25, &string);
  if ( v27 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      524LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v27,
      v36);
  v39 = 0LL;
  v28 = *v44;
  v39 = 0LL;
  v29 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, __int64 **))(v28 + 48))(v44, string, &v39);
  if ( v29 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      528LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v29,
      v36);
  v38 = 0LL;
  v30 = *v39;
  v38 = 0LL;
  v31 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v30 + 64))(v39, v40, &v38);
  if ( v31 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      530LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v31,
      v36);
  *(_QWORD *)a2 = 0LL;
  v41 = 1;
  v32 = v42;
  v33 = *(__int64 (__fastcall **)(__int64, __int64, const WCHAR *))(*(_QWORD *)v42 + 96LL);
  WindowsDeleteString(0LL);
  *(_QWORD *)a2 = 0LL;
  v34 = v33(v32, v38, a2);
  if ( v34 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      532LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v34,
      v36);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v39 )
    (*(void (__fastcall **)(__int64 *))(*v39 + 16))(v39);
  WindowsDeleteString(string);
  string = 0LL;
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  if ( v44 )
    (*(void (__fastcall **)(__int64 *))(*v44 + 16))(v44);
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  if ( v48 >= 8 )
    operator delete(v46[0]);
  return a2;
}
