/*
 * XREFs of ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1804AF364
 * Callers:
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180076818 (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180083DE4 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x1800DDD20 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJI@AA @ 0x180295180 (--_9IPropertyValue@Foundation@Windows@@$BJI@AA.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        HWND a3,
        int *a4)
{
  unsigned int v7; // r8d
  HSTRING Reserved1; // rbx
  int PropVal; // ebx
  int v10; // eax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, HWND, _QWORD); // rbx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, PCWSTR, int *); // rdi
  PCWSTR StringRawBuffer; // rax
  struct Windows::Foundation::IPropertyValue *v22; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64); // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v26; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v27; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v26 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
  *a4 = 0;
  WindowsDeleteString(0LL);
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                         &v27,
                         (const WCHAR **)off_1807F46C0,
                         v7)[1].Reserved.Reserved1;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v26,
              Reserved1,
              &v22);
  if ( PropVal >= 0 )
  {
    v10 =  Windows::Foundation::IPropertyValue::`vcall'{152,{flat}}((__int64)v22);
    PropVal = v10;
    if ( v10 >= 0 )
      PropVal = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
  if ( PropVal >= 0 )
  {
    v23 = 0LL;
    v11 = *((_QWORD *)this + 27);
    v12 = *(__int64 (__fastcall **)(__int64, HWND, _QWORD))(*(_QWORD *)v11 + 48LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
    PropVal = v12(v11, a3, &v23);
    if ( PropVal < 0 )
    {
LABEL_16:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
      goto LABEL_17;
    }
    v25 = 0LL;
    v24 = 0LL;
    PropVal = Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v23, (__int64)&v24);
    if ( PropVal >= 0 )
    {
      v13 = v24;
      v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 24LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v25);
      v16 = v14(v13, AddressOf);
      PropVal = v16;
      if ( v16 >= 0 )
      {
        v18 = v25;
        v19 = *(__int64 (__fastcall **)(__int64, PCWSTR, int *))(*(_QWORD *)v25 + 88LL);
        StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
        v16 = v19(v18, StringRawBuffer, a4);
        PropVal = v16;
        if ( v16 >= 0 )
        {
          PropVal = 0;
          goto LABEL_15;
        }
        v17 = 1458LL;
      }
      else
      {
        v17 = 1456LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v16);
    }
LABEL_15:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A7,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)PropVal);
LABEL_17:
  WindowsDeleteString(0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
  return (unsigned int)PropVal;
}
