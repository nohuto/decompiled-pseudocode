/*
 * XREFs of ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x18006EEC4
 * Callers:
 *     ?Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x18006EE90 (-Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??$GetActivationFactory@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18006CA5C (--$GetActivationFactory@UITargetedContentContainerStatics@TargetedContent@Services@Windows@@@wil.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@PEAPEAUITargetedContentContainer@TargetedContent@Services@3@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@PEAPEAUITargetedContentContainer@TargetedContent@Services@4@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18006D81C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedCon_ea_18006D81C.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18006DA10 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18006F980 (-GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV-$basic_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
__int64 __fastcall ToastNotification::NotificationsTargetedContentClient::ActivateHelper(
        ToastNotification::NotificationsTargetedContentClient *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v3; // rdx
  unsigned int v4; // r8d
  const WCHAR *v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // r8d
  __int64 (__fastcall *v8)(__int64, PVOID, _QWORD); // rbx
  const WCHAR *v9; // rdx
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, __int64 **); // rdi
  const WCHAR *v17; // rcx
  HSTRING_HEADER *v18; // rax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  DWORD v26; // edx
  int v27; // r8d
  int v28; // eax
  int v30; // [rsp+20h] [rbp-C8h]
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-B8h] BYREF
  const WCHAR *v32; // [rsp+38h] [rbp-B0h] BYREF
  __int64 *v33; // [rsp+40h] [rbp-A8h] BYREF
  __int64 *v34; // [rsp+48h] [rbp-A0h] BYREF
  __int64 *v35; // [rsp+50h] [rbp-98h] BYREF
  __int64 (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-90h] BYREF
  __int64 v37; // [rsp+60h] [rbp-88h] BYREF
  __int64 v38; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v39[3]; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-60h]
  _QWORD v41[3]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+A8h] [rbp-40h]
  HSTRING_HEADER v43; // [rsp+B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v42 = 7LL;
  v41[2] = 0LL;
  LOWORD(v41[0]) = 0;
  v40 = 7LL;
  v39[2] = 0LL;
  LOWORD(v39[0]) = 0;
  ToastNotification::NotificationsTargetedContentClient::GetContentIdAndPath(7LL, a3, v39, v41);
  v5 = wil::GetActivationFactory<Windows::Services::TargetedContent::ITargetedContentContainerStatics>(
         (const WCHAR *)&v32,
         v3,
         v4);
  v6 = *(_QWORD *)v5;
  *(_QWORD *)v5 = 0LL;
  v38 = v6;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v32);
  v36 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD))(*(_QWORD *)v6 + 48LL);
  v36 = 0LL;
  v9 = (const WCHAR *)v39;
  if ( v40 >= 8 )
    v9 = (const WCHAR *)v39[0];
  v32 = v9;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, &v32, v7);
  v11 = v8(v6, v10[1].Reserved.Reserved1, &v36);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v11,
      v30);
  v37 = 0LL;
  v13 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *,Windows::Services::TargetedContent::ITargetedContentContainer * *>(
          v36,
          (__int64)&v37,
          v12);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v13,
      v30);
  v35 = 0LL;
  v15 = v37;
  v16 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 **))(*(_QWORD *)v37 + 80LL);
  v35 = 0LL;
  v17 = (const WCHAR *)v41;
  if ( v42 >= 8 )
    v17 = (const WCHAR *)v41[0];
  v32 = v17;
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, &v32, v14);
  v19 = v16(v15, v18[1].Reserved.Reserved1, &v35);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v19,
      v30);
  v34 = 0LL;
  v20 = *v35;
  v34 = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v20 + 72))(v35, &v34);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v21,
      v30);
  v33 = 0LL;
  v22 = *v34;
  v33 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v22 + 112))(v34, &v33);
  if ( v23 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x46,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v23,
      v30);
  v31 = 0LL;
  v24 = *v33;
  v31 = 0LL;
  v25 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v24 + 48))(
          v33,
          &v31);
  if ( v25 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x49,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v25,
      v30);
  v28 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v31, v26, v27);
  if ( v28 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v28,
      v30);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v31);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v33);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v34);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v35);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v37);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v36);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v38);
  std::wstring::_Tidy(v39, 1, 0LL);
  std::wstring::_Tidy(v41, 1, 0LL);
  return 0LL;
}
