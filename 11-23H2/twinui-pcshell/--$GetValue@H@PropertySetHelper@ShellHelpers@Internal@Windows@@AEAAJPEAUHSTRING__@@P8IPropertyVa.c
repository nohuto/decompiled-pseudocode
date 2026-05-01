/*
 * XREFs of ??$GetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAH@Z1@Z @ 0x180394590
 * Callers:
 *     ?TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18003A55C (-TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?GetInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAH@Z @ 0x18039B70C (-GetInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAH@Z.c)
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18047B224 (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180485CF4 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x1800DDD20 (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BFI@AA @ 0x18028E814 (--_9IPropertyValue@Foundation@Windows@@$BFI@AA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<int>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        __int64 a3,
        _DWORD *a4)
{
  int PropVal; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v10; // [rsp+40h] [rbp+18h] BYREF

  *a4 = 0;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(this, a2, &v10);
  if ( PropVal >= 0 )
  {
    v7 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}((__int64)v10);
    PropVal = v7;
    if ( v7 >= 0 )
      PropVal = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  return (unsigned int)PropVal;
}
