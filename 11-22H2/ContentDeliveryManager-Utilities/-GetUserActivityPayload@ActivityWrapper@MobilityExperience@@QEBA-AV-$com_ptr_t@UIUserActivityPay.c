/*
 * XREFs of ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180070380
 * Callers:
 *     ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x1800701F0 (-GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@.c)
 *     ?SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ @ 0x180070E0C (-SetActivityComplete@ActivityWrapper@MobilityExperience@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetActivationFactory@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Windows@@@wil@@YA?AV?$com_ptr_t@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18006CBEC (--$GetActivationFactory@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Wi.c)
 *     ?Utf8StringToWString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBD@Z @ 0x180071390 (-Utf8StringToWString@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@GU-$char_tr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
const WCHAR *__fastcall MobilityExperience::ActivityWrapper::GetUserActivityPayload(
        __int64 a1,
        const WCHAR *a2,
        unsigned int a3)
{
  __int64 v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, const WCHAR *); // rdi
  const WCHAR *v9; // rcx
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-21h] BYREF
  const WCHAR *v14[2]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v15[4]; // [rsp+40h] [rbp-9h] BYREF
  HSTRING_HEADER v16; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v14[1] = a2;
  wil::GetActivationFactory<Windows::ApplicationModel::Internal::UserActivities::IUserActivityPayloadFactory>(
    (const WCHAR *)&v13,
    (__int64)a2,
    a3);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 136LL))(*(_QWORD *)(a1 + 8));
  CreativeFramework::CommonHelper::StringUtils::Utf8StringToWString(v15, v5);
  *(_QWORD *)a2 = 0LL;
  v7 = v13;
  v8 = *(__int64 (__fastcall **)(__int64, PVOID, const WCHAR *))(*(_QWORD *)v13 + 56LL);
  *(_QWORD *)a2 = 0LL;
  v9 = (const WCHAR *)v15;
  if ( v15[3] >= 8uLL )
    v9 = (const WCHAR *)v15[0];
  v14[0] = v9;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, v14, v6);
  v11 = v8(v7, v10[1].Reserved.Reserved1, a2);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x298,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v11,
      1);
  std::wstring::_Tidy(v15, 1, 0LL);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v13);
  return a2;
}
