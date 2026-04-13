/*
 * XREFs of ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x1800701F0
 * Callers:
 *     ??R_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_@@QEBA@XZ @ 0x18006E9DC (--R_lambda_b6e2bb9b6cdc2c942b52a1d3b2d3e2cf_@@QEBA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIUriRuntimeClassWithAbsoluteCanonicalUri@Foundation@Windows@@@?$com_ptr_t@UIUriRuntimeClass@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUriRuntimeClassWithAbsoluteCanonicalUri@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18006DEA0 (--$query@UIUriRuntimeClassWithAbsoluteCanonicalUri@Foundation@Windows@@@-$com_ptr_t@UIUriRuntime.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180070380 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, _QWORD *),
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // [rsp+60h] [rbp+28h] BYREF
  __int64 v17; // [rsp+68h] [rbp+30h]
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // [rsp+70h] [rbp+38h] BYREF
  __int64 *v19; // [rsp+78h] [rbp+40h] BYREF

  v17 = a2;
  v16 = a1;
  *a3 = 0LL;
  *a4 = 0LL;
  MobilityExperience::ActivityWrapper::GetUserActivityPayload(a2, &v19);
  v18 = 0LL;
  v7 = *v19;
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v7 + 192))(v19, &v18);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v8,
      v13);
  wil::com_ptr_t<Windows::Foundation::IUriRuntimeClass,wil::err_exception_policy>::query<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>(
    &v18,
    v14);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14[0] + 48LL))(v14[0], a3);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v9,
      v13);
  v16 = 0LL;
  v10 = *v19;
  v16 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v10 + 176))(v19, &v16) >= 0
    && v16 )
  {
    wil::com_ptr_t<Windows::Foundation::IUriRuntimeClass,wil::err_exception_policy>::query<Windows::Foundation::IUriRuntimeClassWithAbsoluteCanonicalUri>(
      &v16,
      &v13);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 48LL))(v13, a4);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE9,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v11,
        v13);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v13);
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v16);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v14);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v18);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v19);
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 8));
}
