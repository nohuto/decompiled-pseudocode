/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@@Details@23@UIWeakReferenceSource@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180772CF8
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1807701CC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$C_ea_1807701CC.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180183418 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiv_ea_180183418.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>>,IWeakReferenceSource,IVirtualDesktopSwitcherViewHostInternal>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // r10
  __int64 result; // rax
  _DWORD *v7; // r10
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r11d

  if ( InlineIsEqualGUID(a2, &GUID_1be71764_e771_4442_b78f_eda2c7f067f3)
    || InlineIsEqualGUID(v2, &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9) )
  {
    goto LABEL_5;
  }
  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>::CanCastTo(
             v4 + 8,
             v5,
             v3);
  if ( (_DWORD)result != -2147467262 )
    return result;
  if ( InlineIsEqualGUID(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
LABEL_5:
    *v3 = v4;
    return 0LL;
  }
  if ( InlineIsEqualGUID(v8, &GUID_1ed755e6_0150_4780_a937_c85c00302079) )
  {
    *v9 = v10 + 8;
    return 0LL;
  }
  return v11;
}
