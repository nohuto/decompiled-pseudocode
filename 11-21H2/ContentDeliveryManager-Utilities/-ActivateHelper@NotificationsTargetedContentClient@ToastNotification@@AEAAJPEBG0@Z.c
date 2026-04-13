/*
 * XREFs of ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x180077394
 * Callers:
 *     ?Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x180077360 (-Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180075448 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180075B18 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x180078240 (-GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV-$basic_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall ToastNotification::NotificationsTargetedContentClient::ActivateHelper(
        ToastNotification::NotificationsTargetedContentClient *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  unsigned int v3; // r8d
  HSTRING_HEADER *v4; // rax
  int ActivationFactory; // eax
  unsigned int v6; // r8d
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, PVOID, _QWORD); // rbx
  const WCHAR *v9; // rcx
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  DWORD v12; // edx
  int v13; // r8d
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rbx
  int v15; // eax
  unsigned int v16; // r8d
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, PVOID, __int64 **); // rsi
  const WCHAR *v19; // rcx
  HSTRING_HEADER *v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  DWORD v28; // edx
  int v29; // r8d
  int v30; // eax
  const char *v31; // r9
  __int64 result; // rax
  const WCHAR *v33; // [rsp+28h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v35; // [rsp+38h] [rbp-B0h] BYREF
  __int64 *v36; // [rsp+40h] [rbp-A8h] BYREF
  __int64 *v37; // [rsp+48h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-98h] BYREF
  __int64 v39; // [rsp+58h] [rbp-90h] BYREF
  __int64 v40; // [rsp+60h] [rbp-88h] BYREF
  WCHAR *v41; // [rsp+68h] [rbp-80h] BYREF
  __int64 v42; // [rsp+78h] [rbp-70h]
  unsigned __int64 v43; // [rsp+80h] [rbp-68h]
  void *v44[3]; // [rsp+88h] [rbp-60h] BYREF
  unsigned __int64 v45; // [rsp+A0h] [rbp-48h]
  HSTRING_HEADER v46; // [rsp+A8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v45 = 7LL;
  v44[2] = 0LL;
  LOWORD(v44[0]) = 0;
  v43 = 7LL;
  v42 = 0LL;
  LOWORD(v41) = 0;
  try
  {
    ToastNotification::NotificationsTargetedContentClient::GetContentIdAndPath(this);
    v33 = L"Windows.Services.TargetedContent.TargetedContentContainer";
    v40 = 0LL;
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v46, &v33, v3);
    ActivationFactory = RoGetActivationFactory(
                          v4[1].Reserved.Reserved1,
                          &GUID_5b47e7fb_2140_4c1f_a736_c59583f227d8,
                          &v40);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1686LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)ActivationFactory,
        1);
    v7 = v40;
    v38 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD))(*(_QWORD *)v40 + 48LL);
    v38 = 0LL;
    v9 = (const WCHAR *)&v41;
    if ( v43 >= 8 )
      v9 = v41;
    v33 = v9;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v46, &v33, v6);
    v11 = v8(v7, v10[1].Reserved.Reserved1, &v38);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        58LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v11,
        1);
    v39 = 0LL;
    v14 = v38;
    v15 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(
            v38,
            v12,
            v13);
    if ( v15 >= 0 )
      v15 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v14)[8])(
              v14,
              &v39);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        61LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v15,
        1);
    v37 = 0LL;
    v17 = v39;
    v18 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 **))(*(_QWORD *)v39 + 80LL);
    v37 = 0LL;
    v19 = (const WCHAR *)v44;
    if ( v45 >= 8 )
      v19 = (const WCHAR *)v44[0];
    v33 = v19;
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v46, &v33, v16);
    v21 = v18(v17, v20[1].Reserved.Reserved1, &v37);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        64LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v21,
        1);
    v36 = 0LL;
    v22 = *v37;
    v36 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v22 + 72))(v37, &v36);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        67LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v23,
        1);
    v35 = 0LL;
    v24 = *v36;
    v35 = 0LL;
    v25 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v24 + 112))(v36, &v35);
    if ( v25 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        70LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v25,
        1);
    v34 = 0LL;
    v26 = *v35;
    v34 = 0LL;
    v27 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v26 + 48))(
            v35,
            &v34);
    if ( v27 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        73LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v27,
        1);
    v30 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v34, v28, v29);
    if ( v30 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        74LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v30,
        1);
    if ( v34 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v34)[2])(v34);
    if ( v35 )
      (*(void (__fastcall **)(__int64 *))(*v35 + 16))(v35);
    if ( v36 )
      (*(void (__fastcall **)(__int64 *))(*v36 + 16))(v36);
    if ( v37 )
      (*(void (__fastcall **)(__int64 *))(*v37 + 16))(v37);
    if ( v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    if ( v38 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v38)[2])(v38);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v43 >= 8 )
      operator delete(v41);
    v43 = 7LL;
    v42 = 0LL;
    LOWORD(v41) = 0;
    if ( v45 >= 8 )
      operator delete(v44[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4E,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                           v31);
  }
  return result;
}
