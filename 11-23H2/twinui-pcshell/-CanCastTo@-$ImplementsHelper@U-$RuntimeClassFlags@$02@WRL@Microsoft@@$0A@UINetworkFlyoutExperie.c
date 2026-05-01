/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@UILightDismissNotification@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180471C00
 * Callers:
 *     ??$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180470CDC (--$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details.c)
 *     ?QueryInterface@MeetNowExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180474880 (-QueryInterface@MeetNowExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIClosable@Foundation@Windows@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180192F2C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIClosable_ea_180192F2C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,IWeakReferenceSource,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  _DWORD *v10; // r10

  if ( InlineIsEqualGUID(a2, &GUID_c9ddc674_b44b_4c67_9d79_2b237d9be05a) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
      || InlineIsEqualGUID(v6, &GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>::CanCastTo(
                             v9 + 8,
                             v10);
    }
    return v8;
  }
}
