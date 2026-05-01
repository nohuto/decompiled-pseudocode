/*
 * XREFs of ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x180036264
 * Callers:
 *     ?SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@AEBU_GUID@@@Z @ 0x18005B178 (-SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x180380148 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIPropertyValue@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180036424 (--$As@UIPropertyValue@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPt.c)
 *     ?GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x180036480 (-GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyV.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x1800934AC (-SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyVa.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BKA@AA @ 0x1801F4C30 (--_9IPropertyValueStatics@Foundation@Windows@@$BKA@AA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        __int64 a3,
        __int128 *a4)
{
  Windows::Internal::ShellHelpers::PropertySetHelper *v7; // rcx
  int PropertyValueFactory; // eax
  int v9; // ebx
  struct Windows::Foundation::IPropertyValueStatics *v10; // rbx
  __int64 AddressOf; // rax
  int v12; // eax
  int v13; // eax
  struct Windows::Foundation::IPropertyValue *v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::Foundation::IPropertyValueStatics *v19; // [rsp+70h] [rbp+30h] BYREF

  v19 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  PropertyValueFactory = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropertyValueFactory(v7, &v19);
  v9 = PropertyValueFactory;
  if ( PropertyValueFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)PropertyValueFactory,
      (int)v15);
  }
  else
  {
    v16 = 0LL;
    v10 = v19;
    AddressOf = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(&v16);
    v17 = *a4;
    v12 =  Windows::Foundation::IPropertyValueStatics::`vcall'{160,{flat}}(v10, &v17, AddressOf);
    v9 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v12,
        (int)v15);
    }
    else
    {
      v15 = 0LL;
      v13 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IPropertyValue>(&v16, &v15);
      v9 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v13,
          (int)v15);
      }
      else
      {
        v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetPropVal(this, a2, v15);
        if ( v9 >= 0 )
          v9 = 0;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  return (unsigned int)v9;
}
