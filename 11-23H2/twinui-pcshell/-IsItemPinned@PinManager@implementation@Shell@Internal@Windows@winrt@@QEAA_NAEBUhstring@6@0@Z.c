/*
 * XREFs of ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x1806A320C
 * Callers:
 *     ?IsItemPinned@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAX0PEA_N@Z @ 0x1806A3180 (-IsItemPinned@-$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@34.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Release@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x1800868B8 (-Release@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1801041A8 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18069DD64 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ??1PinManagerIsItemPinned@PinManagerTelemetry@@QEAA@XZ @ 0x18069ECA0 (--1PinManagerIsItemPinned@PinManagerTelemetry@@QEAA@XZ.c)
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1806A1BAC (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54A4 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?StartActivity@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXXZ @ 0x1806A580C (-StartActivity@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z @ 0x1806A5BD8 (-Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1806A7300 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 */

// Hidden C++ exception states: #wind=7
bool __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned(
        winrt::Windows::Internal::Shell::implementation::PinManager *this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  bool v6; // r14
  IUnknown *v7; // rdi
  HRESULT v8; // eax
  void *v9; // rcx
  int Instance; // eax
  struct CPinnedList *v11; // rbx
  void *v12; // rcx
  const unsigned __int16 **v13; // rax
  int v15; // [rsp+20h] [rbp-E0h]
  struct CPinnedList *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID *v18; // [rsp+48h] [rbp-B8h] BYREF
  LPITEMIDLIST ppidl; // [rsp+50h] [rbp-B0h] BYREF
  char v20; // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID pv[2]; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v23; // [rsp+80h] [rbp-80h] BYREF
  HANDLE hObject; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h]
  std::_Ref_count_base *v26; // [rsp+98h] [rbp-68h]
  _QWORD v27[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  memset_0(v27, 0, sizeof(v27));
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"PinManagerIsItemPinned");
  v27[0] = &PinManagerTelemetry::PinManagerIsItemPinned::`vftable';
  PinManagerTelemetry::PinManagerIsItemPinned::StartActivity((PinManagerTelemetry::PinManagerIsItemPinned *)v27);
  v23 = 0LL;
  winrt::Windows::Internal::Shell::implementation::PinManager::GetPinRequestContext(
    (__int64)this,
    &hObject,
    (__int64 *)a2,
    0,
    (__int64)&v23);
  v6 = 0;
  *(_OWORD *)v16 = *(_OWORD *)winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)a3, &v21);
  *(_OWORD *)pv = *(_OWORD *)PinRequestContext::RequestorBestAvailableAppId(v25, &v18);
  TryGetAppsFolderItem(&punk, pv, v16);
  v7 = punk;
  if ( punk )
  {
    pv[0] = 0LL;
    v18 = pv;
    ppidl = 0LL;
    v20 = 1;
    v8 = SHGetIDListFromObject(punk, &ppidl);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2E1,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v8,
        v15);
    if ( v20 )
    {
      v9 = *v18;
      *v18 = ppidl;
      if ( v9 )
        CoTaskMemFree(v9);
    }
    v16[0] = 0LL;
    Instance = CTaskbandPin_CreateInstance(v16);
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2E4,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)Instance,
        v15);
    v11 = v16[0];
    v6 = (*(unsigned int (__fastcall **)(char *, LPVOID))(*((_QWORD *)v16[0] + 2) + 72LL))((char *)v16[0] + 16, pv[0]) == 0;
    if ( v11 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v16);
    v12 = pv[0];
    pv[0] = 0LL;
    if ( v12 )
      CoTaskMemFree(v12);
  }
  if ( v7 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&punk);
  v13 = (const unsigned __int16 **)PinRequestContext::RequestorBestAvailableAppId(v25, &v18);
  PinManagerTelemetry::PinManagerIsItemPinned::Stop((PinManagerTelemetry::PinManagerIsItemPinned *)v27, *v13, v6);
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
  if ( hObject )
    CloseHandle(hObject);
  if ( v23 )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)v23);
  PinManagerTelemetry::PinManagerIsItemPinned::~PinManagerIsItemPinned((PinManagerTelemetry::PinManagerIsItemPinned *)v27);
  return v6;
}
