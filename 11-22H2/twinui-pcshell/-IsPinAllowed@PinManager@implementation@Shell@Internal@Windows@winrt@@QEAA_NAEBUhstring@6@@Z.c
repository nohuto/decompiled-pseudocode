/*
 * XREFs of ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x1806A3594
 * Callers:
 *     ?IsPinAllowed@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAXPEA_N@Z @ 0x1806A3510 (-IsPinAllowed@-$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@34.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x1800868B8 (-Release@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@AEAAKXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??$QueueTask@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@Z @ 0x18024EB38 (--$QueueTask@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18069DD64 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ??1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ @ 0x18069ECCC (--1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x1806A0458 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1806A1BAC (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 *     ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1806A3868 (-IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV-$shared_p.c)
 *     ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x1806A3ACC (-IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV-$shar.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A54A4 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?StartActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBG@Z @ 0x1806A58BC (-StartActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z @ 0x1806A5E68 (-Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z.c)
 *     ?IsNotificationConsentAvailable@@YA_NXZ @ 0x1806ADDA0 (-IsNotificationConsentAvailable@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsPinAllowed(
        winrt::Windows::Internal::Shell::implementation::PinManager *this,
        const struct winrt::hstring *a2)
{
  const unsigned __int16 *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  char v7; // bl
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // r8
  DWORD CurrentThreadId; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rax
  unsigned int v18; // r9d
  volatile signed __int32 *v20; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v21[2]; // [rsp+38h] [rbp-C8h] BYREF
  char v22; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  std::_Ref_count_base *v26; // [rsp+68h] [rbp-98h]
  _QWORD v27[3]; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v28[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v29[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  memset_0(v29, 0, sizeof(v29));
  v4 = winrt::hstring::c_str(a2);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"PinManagerIsPinAllowed");
  v29[0] = &PinManagerTelemetry::PinManagerIsPinAllowed::`vftable';
  PinManagerTelemetry::PinManagerIsPinAllowed::StartActivity((PinManagerTelemetry::PinManagerIsPinAllowed *)v29, v4);
  pv = 0LL;
  winrt::Windows::Internal::Shell::implementation::PinManager::GetPinRequestContext(
    (__int64)this,
    &hObject,
    (__int64 *)a2,
    0,
    (__int64)&pv);
  v5 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
         v27,
         &v25);
  if ( !(unsigned __int8)winrt::Windows::Internal::Shell::implementation::PinManager::IsPinRequestorAllowed(
                           &pv,
                           hObject,
                           v5) )
  {
    v6 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v25, v21);
    PinManagerTelemetry::PinManagerIsPinAllowed::Stop(v29, *v6, 1LL);
    v7 = 0;
    goto LABEL_13;
  }
  *(_OWORD *)v28 = 0LL;
  v20 = 0LL;
  v8 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
         v21,
         &v25);
  PinOperationContext::Create((__int64 **)v28, v8, a2, (winrt::hstring *)&v20);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
  v9 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
         v27,
         v28);
  LOBYTE(v10) = 1;
  if ( (unsigned __int8)winrt::Windows::Internal::Shell::implementation::PinManager::IsPinOperationAllowed(
                          this,
                          v9,
                          v10,
                          &pv) )
  {
    if ( IsNotificationConsentAvailable() )
    {
      v22 = 0;
      v27[0] = &v25;
      v27[1] = v28;
      v27[2] = &v22;
      CurrentThreadId = GetCurrentThreadId();
      v16 = Windows::Internal::ComTaskPool::QueueTask<_lambda_e618d2e1a4350f330cc93ddf3d982686_>(
              v15,
              v14,
              CurrentThreadId,
              (__int64)v27);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2CE,
          (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          (const char *)(unsigned int)v16,
          (int)&pv);
      v17 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v25, v21);
      PinManagerTelemetry::PinManagerIsPinAllowed::Stop(v29, *v17, v18);
      v7 = v22;
      goto LABEL_11;
    }
    v11 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v25, v21);
    v12 = 4LL;
  }
  else
  {
    v11 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v25, v21);
    v12 = 2LL;
  }
  PinManagerTelemetry::PinManagerIsPinAllowed::Stop(v29, *v11, v12);
  v7 = 0;
LABEL_11:
  if ( v28[1] )
    std::_Ref_count_base::_Decref(v28[1]);
LABEL_13:
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
  if ( hObject )
    CloseHandle(hObject);
  if ( pv )
    tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::Release((volatile signed __int32 *)pv);
  PinManagerTelemetry::PinManagerIsPinAllowed::~PinManagerIsPinAllowed((PinManagerTelemetry::PinManagerIsPinAllowed *)v29);
  return v7;
}
