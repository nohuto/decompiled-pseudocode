/*
 * XREFs of ?OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180394B00
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
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18017C488 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJI@AA @ 0x1801F1690 (--_9IPropertyValue@Foundation@Windows@@$BJI@AA.c)
 *     ?GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z @ 0x180394268 (-GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x1803943B4 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnEventQueued(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  int PropVal; // ebx
  __int64 v9; // rax
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  HSTRING v12; // rdx
  HSTRING v13; // r8
  int v14; // eax
  HWND v15; // rcx
  const WCHAR *StringRawBuffer; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  HWND hWnd; // [rsp+30h] [rbp-48h] BYREF
  HSTRING string; // [rsp+38h] [rbp-40h]
  struct Windows::Foundation::Collections::IPropertySet *v22; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v23[32]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]

  v22 = a3;
  PropVal = 0;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)v23,
         (const WCHAR **)&off_180669608,
         (unsigned int)a3);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v22, v9) )
  {
    v22 = a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
    WindowsDeleteString(0LL);
    string = 0LL;
    v12 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                         (__int64)v23,
                         (const WCHAR **)&off_180669600,
                         v11)
                     + 24);
    string = 0LL;
    hWnd = 0LL;
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                v12,
                (struct Windows::Foundation::IPropertyValue **)&hWnd);
    if ( PropVal >= 0 )
    {
      v14 =  Windows::Foundation::IPropertyValue::`vcall'{152,{flat}}((__int64)hWnd);
      PropVal = v14;
      if ( v14 >= 0 )
      {
        v15 = hWnd;
        if ( hWnd )
        {
          hWnd = 0LL;
          (*(void (__fastcall **)(HWND))(*(_QWORD *)v15 + 16LL))(v15);
        }
        PropVal = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&hWnd);
LABEL_9:
    if ( PropVal >= 0 )
    {
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                           (Microsoft::WRL::Wrappers::Details *)string,
                           0LL,
                           v13) )
      {
        PropVal = CBaseTrayFlyoutExperienceManager::GetViewWindow(
                    (CBaseTrayFlyoutExperienceManager *)((char *)this - 48),
                    &hWnd);
        if ( PropVal >= 0 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          SetWindowTextW(hWnd, StringRawBuffer);
        }
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    goto LABEL_16;
  }
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, (const WCHAR **)&off_1806695F8, v10);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)&v22, v17) )
    CBaseTrayFlyoutExperienceManager::HideFlyout((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
LABEL_16:
  v18 = *((_QWORD *)this + 42);
  if ( v18 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *, struct Windows::Foundation::Collections::IPropertySet *, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v18 + 88LL))(
      v18,
      a2,
      a3,
      a4);
  return (unsigned int)PropVal;
}
