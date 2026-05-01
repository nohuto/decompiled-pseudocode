/*
 * XREFs of ?OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180472BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18009A320 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x1800DDD20 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJI@AA @ 0x180295180 (--_9IPropertyValue@Foundation@Windows@@$BJI@AA.c)
 *     ?GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z @ 0x180472508 (-GetViewWindow@CBaseTrayFlyoutExperienceManager@@QEAAJPEAPEAUHWND__@@@Z.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x180472654 (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnEventQueued(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  int PropVal; // ebx
  HSTRING_HEADER *v9; // rax
  HSTRING v10; // r8
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  HSTRING Reserved1; // rbx
  int v14; // eax
  HSTRING v15; // r8
  const WCHAR *StringRawBuffer; // rax
  HSTRING_HEADER *v17; // rax
  HSTRING v18; // r8
  __int64 v19; // rcx
  HWND hWnd; // [rsp+38h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v22; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER v23; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]

  PropVal = 0;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         &v23,
         (const WCHAR **)&off_1807F4500,
         (unsigned int)a3);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, (HSTRING)v9[1].Reserved.Reserved1, v10) )
  {
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)&off_1807F44F8, v11);
    if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                          a3,
                          (HSTRING)v17[1].Reserved.Reserved1,
                          v18) )
      CBaseTrayFlyoutExperienceManager::HideFlyout((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
  }
  else
  {
    v22 = a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
    WindowsDeleteString(0LL);
    Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                           &v23,
                           (const WCHAR **)&off_1807F4508,
                           v12)[1].Reserved.Reserved1;
    hWnd = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&hWnd);
    PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v22,
                Reserved1,
                (struct Windows::Foundation::IPropertyValue **)&hWnd);
    if ( PropVal >= 0 )
    {
      v14 =  Windows::Foundation::IPropertyValue::`vcall'{152,{flat}}((__int64)hWnd);
      PropVal = v14;
      if ( v14 >= 0 )
        PropVal = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&hWnd);
    if ( PropVal >= 0 )
    {
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(0LL, 0LL, v15) )
      {
        PropVal = CBaseTrayFlyoutExperienceManager::GetViewWindow(
                    (CBaseTrayFlyoutExperienceManager *)((char *)this - 48),
                    &hWnd);
        if ( PropVal >= 0 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
          SetWindowTextW(hWnd, StringRawBuffer);
        }
      }
    }
    WindowsDeleteString(0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
  }
  v19 = *((_QWORD *)this + 42);
  if ( v19 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *, Microsoft::WRL::Wrappers::Details *, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v19 + 88LL))(
      v19,
      a2,
      a3,
      a4);
  return (unsigned int)PropVal;
}
