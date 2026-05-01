/*
 * XREFs of ??$SetValue@N@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJNPEAPEAUIInspectable@@@ZN@Z @ 0x18036E428
 * Callers:
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x18036FA80 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIPropertyValue@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180036424 (--$As@UIPropertyValue@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPt.c)
 *     ?GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x180036480 (-GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyV.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x1800934AC (-SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyVa.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     ??_9IPropertyValueStatics@Foundation@Windows@@$BHI@AA @ 0x1801F4110 (--_9IPropertyValueStatics@Foundation@Windows@@$BHI@AA.c)
 */

__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<double>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2)
{
  Windows::Internal::ShellHelpers::PropertySetHelper *v4; // rcx
  int PropertyValueFactory; // eax
  int v6; // ebx
  struct Windows::Foundation::IPropertyValueStatics *v7; // rbx
  int v8; // eax
  int v9; // eax
  struct Windows::Foundation::IPropertyValue *v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct Windows::Foundation::IPropertyValueStatics *v14; // [rsp+60h] [rbp+20h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  PropertyValueFactory = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropertyValueFactory(v4, &v14);
  v6 = PropertyValueFactory;
  if ( PropertyValueFactory >= 0 )
  {
    v12 = 0LL;
    v7 = v14;
    Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf((__int64 *)&v12);
    v8 =  Windows::Foundation::IPropertyValueStatics::`vcall'{120,{flat}}((__int64)v7);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v11 = 0LL;
      v9 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IPropertyValue>(&v12, (__int64 *)&v11);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetPropVal(this, a2, v11);
        if ( v6 >= 0 )
          v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
          (const char *)(unsigned int)v9);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)PropertyValueFactory);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v6;
}
