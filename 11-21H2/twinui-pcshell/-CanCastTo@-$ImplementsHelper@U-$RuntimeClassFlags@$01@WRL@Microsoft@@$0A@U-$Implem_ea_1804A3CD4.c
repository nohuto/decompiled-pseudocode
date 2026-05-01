/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@@Details@23@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804A3CD4
 * Callers:
 *     ?CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A3B3C (-CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInter.c)
 *     ?Get@?$CWeakReference@VCSnapAssistViewHost@@@WeakReference@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804A40D0 (-Get@-$CWeakReference@VCSnapAssistViewHost@@@WeakReference@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804A4370 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1804A4370.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804A3C60 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInvocationAnimationHo.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<ISnapAssistViewHost>>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r11
  unsigned int v6; // r10d
  _DWORD *v7; // r9

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4);
  v6 = 0;
  if ( IsEqualGUID || InlineIsEqualGUID(v3, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9) )
  {
    *v4 = v5;
  }
  else if ( *v7 == -1811144131
         && v7[1] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
         && v7[2] == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
         && v7[3] == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
  {
    *v4 = v5 + 8;
  }
  else
  {
    return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
                           v5 + 120,
                           v7);
  }
  return v6;
}
