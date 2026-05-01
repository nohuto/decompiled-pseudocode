/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@6789@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CB994
 * Callers:
 *     ?QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CAD30 (-QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@6789@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIActionCenterExperienceManager@6789@UIEdgeUiInvocation@@UIEdgeUiTouchInvocation@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputHostLayoutChanges@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800DC458 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNot.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputHostLayoutChanges>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  __int64 v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // r10

  if ( (unsigned int)InlineIsEqualGUID(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v2, &GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861)
      || (unsigned int)InlineIsEqualGUID(v5, &GUID_df65db57_d504_456e_8bd7_004ce308d8d9)
      || (unsigned int)InlineIsEqualGUID(v9, &GUID_dec04b18_357e_41d8_9b71_b991243bea34)
      || (unsigned int)InlineIsEqualGUID(v10, &GUID_7e567aed_92f2_4ad4_be89_4be989ec6cef)
      || (unsigned int)InlineIsEqualGUID(v11, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2)
      || (unsigned int)InlineIsEqualGUID(v12, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0)
      || (unsigned int)InlineIsEqualGUID(v13, &GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270)
      || (v8 += 8LL, *v14 == 819308585)
      && v14[1] == *(_DWORD *)&GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data2
      && v14[2] == *(_DWORD *)GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data4
      && v14[3] == *(_DWORD *)&GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e.Data4[4]
      || (v8 += 8LL, *v14 == 1337586361)
      && v14[1] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data2
      && v14[2] == *(_DWORD *)GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4
      && v14[3] == *(_DWORD *)&GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e.Data4[4] )
    {
      *v6 = v8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v7;
  }
}
