/*
 * XREFs of ?IsSubscriptionEnabledNoThrow@ConfigurationHelper@TargetedContent@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x1805460B4
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180548360 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@P.c)
 *     ?GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18055DCF0 (-GetWallpaper@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x18000A854 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x180545914 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CreativeFramework::TargetedContent::ConfigurationHelper::IsSubscriptionEnabledNoThrow(
        CreativeFramework::TargetedContent::ConfigurationHelper *this,
        unsigned __int16 *a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, _BYTE *); // rdi
  unsigned __int16 **v10; // rdx
  bool v11; // zf
  int CurrentUserSidString; // eax
  HRESULT ClassObject; // eax
  __int64 (__fastcall *v14)(LPVOID, _QWORD, _QWORD, GUID *, int *); // r11
  int v15; // eax
  __int64 v16; // rdx
  int v18[2]; // [rsp+38h] [rbp-9h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-1h] BYREF
  void *v20; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v21[4]; // [rsp+50h] [rbp+Fh] BYREF
  _BYTE v22[4]; // [rsp+54h] [rbp+13h] BYREF
  __int64 v23; // [rsp+58h] [rbp+17h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+27h] BYREF
  __int64 v26; // [rsp+80h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  *(_BYTE *)a2 = 0;
  v24 = 0LL;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Services.TargetedContent.Internal.TargetedContentSubscriptionInternal",
    0x4Eu,
    0x4Du);
  v4 = RoActivateInstance(v26, &v24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v23 = 0LL;
    v6 = (**v24)(v24, &GUID_b512937b_1be6_4e97_8489_d7ce7d2279ed, &v23);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 46LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\internal\\shell\\inc\\TargetedContentConfigurationHelper.h",
        (const char *)(unsigned int)v6);
LABEL_22:
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v23);
      goto LABEL_23;
    }
    v8 = v23;
    v9 = *(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)v23 + 56LL);
    Windows::Internal::StringReference::_ConstructorHelper(
      (Windows::Internal::StringReference *)&hstringHeader,
      L"Desktop");
    v6 = v9(v8, hstringHeader.Reserved.Reserved1, v21);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = 48LL;
      goto LABEL_7;
    }
    v11 = (v21[0] & 1) == 0;
    *(_BYTE *)a2 = v21[0] & 1;
    if ( !v11 )
    {
      v20 = 0LL;
      CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                               (CreativeFramework::LockScreenCreativeConfigHelpers *)&v20,
                               v10);
      v5 = CurrentUserSidString;
      if ( CurrentUserSidString < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x36,
          (__int64)"onecoreuap\\internal\\shell\\inc\\TargetedContentConfigurationHelper.h",
          (const char *)(unsigned int)CurrentUserSidString);
LABEL_19:
        wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v20);
        goto LABEL_22;
      }
      ppv = 0LL;
      ClassObject = CoGetClassObject(
                      &GUID_38142214_ed63_4965_9214_1bbc06e130e9,
                      1u,
                      0LL,
                      &GUID_8e1bbbb9_b3d5_430d_b276_d0e7454caab2,
                      &ppv);
      v5 = ClassObject;
      if ( ClassObject < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39,
          (__int64)"onecoreuap\\internal\\shell\\inc\\TargetedContentConfigurationHelper.h",
          (const char *)(unsigned int)ClassObject);
LABEL_18:
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppv);
        goto LABEL_19;
      }
      *(_QWORD *)v18 = 0LL;
      v14 = *(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, GUID *, int *))(*(_QWORD *)ppv + 24LL);
      *(_QWORD *)v18 = 0LL;
      v15 = v14(ppv, NtCurrentPeb()->SessionId, 0LL, &GUID_428d4ddd_3462_43df_9395_1eff13ae7a4b, v18);
      v5 = v15;
      if ( v15 < 0 )
      {
        v16 = 59LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"onecoreuap\\internal\\shell\\inc\\TargetedContentConfigurationHelper.h",
          (const char *)(unsigned int)v15);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v18);
        goto LABEL_18;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, void *, _BYTE *))(**(_QWORD **)v18 + 24LL))(*(_QWORD *)v18, v20, v22);
      v5 = v15;
      if ( v15 < 0 )
      {
        v16 = 61LL;
        goto LABEL_17;
      }
      *(_BYTE *)a2 = (v22[0] & 1) == 0;
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)v18);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppv);
      wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v20);
    }
    v5 = 0;
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C,
    (__int64)"onecoreuap\\internal\\shell\\inc\\TargetedContentConfigurationHelper.h",
    (const char *)(unsigned int)v4);
LABEL_23:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v24);
  return v5;
}
