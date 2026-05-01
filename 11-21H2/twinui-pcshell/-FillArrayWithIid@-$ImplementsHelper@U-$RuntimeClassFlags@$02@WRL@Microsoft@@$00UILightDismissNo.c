/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIWeakReferenceSource@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@789Windows@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@UIInputSwitchHost@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180195078
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@UIInputSwitchHost@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180195170 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_180195170.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = _uuidof__AUIWeakReferenceSource_Details_Platform__;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_fd8022e5_1099_53f9_b49a_b39bf3f15861;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 8)) = GUID_65102f3a_20a8_4047_a936_05aa4c3965bf;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 9)) = GUID_4fb9f2b9_bdd6_47b9_9ebe_703eacdc1c8e;
  result = (unsigned int)(v3 + 10);
  *a2 = result;
  return result;
}
