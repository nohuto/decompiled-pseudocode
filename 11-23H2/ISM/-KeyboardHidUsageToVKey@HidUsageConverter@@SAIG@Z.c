/*
 * XREFs of ?KeyboardHidUsageToVKey@HidUsageConverter@@SAIG@Z @ 0x1800F3958
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800F0E84 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x1800589B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ??9?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGI@std@@@std@@@std@@@std@@QEBA_NAEBV01@@Z @ 0x18005AC74 (--9-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBGI@std@@@std@@@std@@@st.c)
 *     ?at@?$map@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@@std@@QEBAAEBIAEBG@Z @ 0x18005AEE0 (-at@-$map@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@@std@@QEBAAEBIAEBG@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGI@std@@@std@@@std@@@2@AEBG@Z @ 0x18005AF30 (-find@-$_Tree@V-$_Tmap_traits@GIU-$less@G@std@@V-$allocator@U-$pair@$$CBGI@std@@@2@$0A@@std@@@st.c)
 */

UINT __fastcall HidUsageConverter::KeyboardHidUsageToVKey(USHORT a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  __int64 *v4; // rax
  __int64 v5; // rcx
  UINT v6; // ebx
  HKL KeyboardLayout; // rax
  UINT v8; // ecx
  unsigned __int8 *i; // rcx
  unsigned __int8 *j; // rcx
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF
  USHORT ChangedUsageList; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int16 InsertCodesContext; // [rsp+68h] [rbp+20h] BYREF
  _HIDP_KEYBOARD_MODIFIER_STATE ModifierState; // [rsp+70h] [rbp+28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+30h] BYREF

  ChangedUsageList = a1;
  v1 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
  {
    if ( IsEdition(8778LL) )
    {
      InsertCodesContext = 0;
      ModifierState.0 = 0;
      if ( (unsigned __int16)(ChangedUsageList - 89) <= 9u )
        return (unsigned __int8)aAbcdefghi[ChangedUsageList - 89];
      v4 = std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::find(
             v2,
             (__int64)v11,
             &ChangedUsageList);
      v15 = qword_180268CA0;
      if ( std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,unsigned int>>>>::operator!=(
             v4,
             &v15) )
      {
        return *(_DWORD *)std::map<unsigned short,unsigned int>::at(v5, &ChangedUsageList);
      }
      HidP_TranslateUsagesToI8042ScanCodes(
        &ChangedUsageList,
        1u,
        HidP_Keyboard_Make,
        &ModifierState,
        (PHIDP_INSERT_SCANCODES)HidUsageConverter::HidUsageToScanCode,
        &InsertCodesContext);
      v6 = InsertCodesContext;
      KeyboardLayout = GetKeyboardLayout(0);
      v8 = v6;
      return MapVirtualKeyExW(v8, 1u, KeyboardLayout);
    }
    for ( i = (unsigned __int8 *)&unk_18021EBB0; *i != ChangedUsageList; ++i )
    {
      if ( (unsigned int)++v1 >= 0x100 )
        return 0;
    }
  }
  else
  {
    RtlGetDeviceFamilyInfoEnum(0LL, &ModifierState, 0LL);
    if ( ModifierState.0 == 3 )
    {
      LODWORD(v15) = 0;
      HidP_TranslateUsagesToI8042ScanCodes(
        &ChangedUsageList,
        1u,
        HidP_Keyboard_Make,
        (PHIDP_KEYBOARD_MODIFIER_STATE)&v15,
        (PHIDP_INSERT_SCANCODES)HidUsageConverter::HidUsageToScanCode,
        &InsertCodesContext);
      KeyboardLayout = GetKeyboardLayout(0);
      v8 = (unsigned __int8)InsertCodesContext;
      return MapVirtualKeyExW(v8, 1u, KeyboardLayout);
    }
    for ( j = (unsigned __int8 *)&unk_18021EBB0; *j != ChangedUsageList; ++j )
    {
      if ( (unsigned int)++v1 >= 0x100 )
        return 0;
    }
  }
  return v1;
}
