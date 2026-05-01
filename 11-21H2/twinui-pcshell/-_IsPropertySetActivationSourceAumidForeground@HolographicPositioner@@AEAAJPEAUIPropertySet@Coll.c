/*
 * XREFs of ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1803D2480
 * Callers:
 *     ?_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180099A4C (-_IsViewPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180093870 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BJI@AA @ 0x1801F1690 (--_9IPropertyValue@Foundation@Windows@@$BJI@AA.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x18030EF04 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        HWND a3,
        int *a4)
{
  unsigned int v7; // r8d
  HSTRING v8; // rdx
  int PropVal; // ebx
  int v10; // eax
  struct Windows::Foundation::IPropertyValue *v11; // rcx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, HWND, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  __int64 *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, PCWSTR, int *); // rdi
  PCWSTR StringRawBuffer; // rax
  struct Windows::Foundation::IPropertyValue *v24; // [rsp+20h] [rbp-60h] BYREF
  HSTRING string; // [rsp+28h] [rbp-58h]
  __int64 v26; // [rsp+30h] [rbp-50h] BYREF
  __int64 v27; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v30[32]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v29 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
  *a4 = 0;
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      (__int64)v30,
                      (const WCHAR **)off_1806697C0,
                      v7)
                  + 24);
  string = 0LL;
  v24 = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
              v8,
              &v24);
  if ( PropVal < 0 )
    goto LABEL_2;
  v10 =  Windows::Foundation::IPropertyValue::`vcall'{152,{flat}}((__int64)v24);
  PropVal = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)v10);
LABEL_2:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
    goto LABEL_8;
  }
  v11 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  PropVal = 0;
LABEL_8:
  if ( PropVal >= 0 )
  {
    v28 = 0LL;
    v12 = *((_QWORD *)this + 28);
    v13 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v12 + 48LL);
    AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v28);
    PropVal = v13(v12, a3, AddressOf);
    if ( PropVal < 0 )
    {
LABEL_19:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v28);
      goto LABEL_20;
    }
    v27 = 0LL;
    v26 = 0LL;
    PropVal = Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v28, &v26);
    if ( PropVal >= 0 )
    {
      v15 = v26;
      v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 24LL);
      v17 = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v27);
      v18 = v16(v15, v17);
      PropVal = v18;
      if ( v18 >= 0 )
      {
        v20 = v27;
        v21 = *(__int64 (__fastcall **)(__int64, PCWSTR, int *))(*(_QWORD *)v27 + 88LL);
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        v18 = v21(v20, StringRawBuffer, a4);
        PropVal = v18;
        if ( v18 >= 0 )
        {
          PropVal = 0;
          goto LABEL_18;
        }
        v19 = 1470LL;
      }
      else
      {
        v19 = 1468LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v18);
    }
LABEL_18:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5B3,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)PropVal);
LABEL_20:
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
  return (unsigned int)PropVal;
}
