/*
 * XREFs of ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x18007B18C
 * Callers:
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180077DF0 (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x18007B540 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 *__fastcall MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(
        __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  __int64 (__fastcall **v4)(_QWORD, GUID *, _QWORD *); // rax
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, HSTRING *); // rdi
  int v8; // eax
  PCWSTR StringRawBuffer; // rax
  __int64 (__fastcall **v10)(_QWORD, GUID *, _QWORD *); // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HSTRING *); // rdi
  int v15; // eax
  const WCHAR *v16; // rax
  __int64 v17; // rcx
  void **v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  void **v21; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-39h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-39h]
  HSTRING v25; // [rsp+38h] [rbp-21h] BYREF
  HSTRING string; // [rsp+40h] [rbp-19h] BYREF
  __int64 v27; // [rsp+48h] [rbp-11h] BYREF
  __int64 v28; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v29[2]; // [rsp+58h] [rbp-1h] BYREF
  void *v30[3]; // [rsp+68h] [rbp+Fh] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v29[1] = a1;
  *a1 = 0LL;
  v4 = *a2;
  v29[0] = 0LL;
  v5 = (*v4)(a2, &GUID_7b56d6f8_990b_4eb5_94a7_5621f3a8b824, v29);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      404LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v5,
      bIgnoreCase);
  string = 0LL;
  v6 = v29[0];
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v29[0] + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = v7(v6, &string);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      407LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v8,
      bIgnoreCase);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String(v30, StringRawBuffer);
  v10 = *a2;
  v28 = 0LL;
  v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64 *))v10[6])(a2, &v28);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      411LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v11,
      bIgnoreCase);
  v27 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v28)(
          v28,
          &GUID_4a01eb05_4e42_41d4_b518_e008a5163614,
          &v27);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v12,
      bIgnoreCase);
  v25 = 0LL;
  v13 = v27;
  v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 56LL);
  WindowsDeleteString(0LL);
  v25 = 0LL;
  v15 = v14(v13, &v25);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      415LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v15,
      bIgnoreCase);
  v16 = WindowsGetStringRawBuffer(v25, 0LL);
  if ( CompareStringOrdinal(v16, -1, L"consumers", -1, 1) == 2 )
  {
    v17 = *a1;
    *a1 = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v18 = v30;
    if ( v31 >= 0x10 )
      v18 = (void **)v30[0];
    v19 = CDPCreateMicrosoftAccount(v18, a1);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        419LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
        (const char *)(unsigned int)v19,
        bIgnoreCasea);
  }
  else
  {
    v20 = *a1;
    *a1 = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v21 = v30;
    if ( v31 >= 0x10 )
      v21 = (void **)v30[0];
    CDPCreateAzureActiveDirectoryAccount(v21, a1);
  }
  WindowsDeleteString(v25);
  v25 = 0LL;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v31 >= 0x10 )
    operator delete(v30[0]);
  v31 = 15LL;
  v30[2] = 0LL;
  LOBYTE(v30[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  if ( v29[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29[0] + 16LL))(v29[0]);
  return a1;
}
