/*
 * XREFs of ?OnEventQueued@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180369140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180093870 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x1800944A8 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18017C488 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJI@AA @ 0x1801F1690 (--_9IPropertyValue@Foundation@Windows@@$BJI@AA.c)
 *     ?HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ @ 0x180368AE0 (-HideFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJXZ.c)
 *     ?SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x180369AD8 (-SendFocusToTray@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnEventQueued(
        CPeopleBarFlyoutExperienceManager *this,
        ExperienceManagerUtils **a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v7; // rax
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  HSTRING v10; // rdx
  int PropVal; // ebx
  HSTRING v12; // r8
  int v13; // eax
  struct Windows::Foundation::IPropertyValue *v14; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v15; // rdx
  HWND v16; // rbx
  const WCHAR *StringRawBuffer; // rax
  __int64 v19; // rax
  CPeopleBarFlyoutExperienceManager *v20; // rcx
  int v21; // eax
  int v22; // eax
  unsigned int v23; // ebx
  struct Windows::Foundation::IPropertyValue *v24; // [rsp+28h] [rbp-38h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v25; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v26[32]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v25 = a3;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)v26,
         (const WCHAR **)&off_180669460,
         (unsigned int)a3);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v25, v7) )
  {
    v25 = a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
    WindowsDeleteString(0LL);
    v10 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                         (__int64)v26,
                         (const WCHAR **)&off_180669458,
                         v9)
                     + 24);
    v24 = 0LL;
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
                v10,
                &v24);
    if ( PropVal >= 0 )
    {
      v13 =  Windows::Foundation::IPropertyValue::`vcall'{152,{flat}}((__int64)v24);
      PropVal = v13;
      if ( v13 >= 0 )
      {
        v14 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v14 + 16LL))(v14);
        }
        PropVal = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v13);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
LABEL_9:
    if ( PropVal >= 0 )
    {
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(0LL, 0LL, v12) )
      {
        v16 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v15);
        StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
        SetWindowTextW(v16, StringRawBuffer);
      }
    }
    WindowsDeleteString(0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
    return 0LL;
  }
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v26, (const WCHAR **)&off_180669468, v8);
  if ( !Microsoft::WRL::Wrappers::operator==((HSTRING *)&v25, v19) )
    return 0LL;
  v21 = CPeopleBarFlyoutExperienceManager::SendFocusToTray(v20);
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2EB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v21);
  v22 = CPeopleBarFlyoutExperienceManager::HideFlyout((CPeopleBarFlyoutExperienceManager *)((char *)this - 64));
  v23 = v22;
  if ( v22 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2ED,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)(unsigned int)v22);
  return v23;
}
