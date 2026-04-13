/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@123@PEAKPEAPEAU_GUID@@@Z @ 0x1800472A0
 * Callers:
 *     ?GetIids@ContentManagementService@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180049C60 (-GetIids@ContentManagementService@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>>(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  GUID *v5; // rax

  *a3 = 0LL;
  *a2 = 0;
  v5 = (GUID *)CoTaskMemAlloc(0x90uLL);
  if ( !v5 )
    return 2147942414LL;
  *v5 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
  v5[1] = GUID_00000038_0000_0000_c000_000000000046;
  v5[2] = GUID_a0a3180b_3c8a_4906_ae66_be3daac93eac;
  v5[3] = GUID_30edbf80_0d30_4f30_a533_63ab65344500;
  v5[4] = GUID_c133af56_71bc_4a53_8020_2af3cc1ba2f5;
  v5[5] = GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4;
  v5[6] = GUID_7388c211_2265_4968_9ad8_ac1df1d7a3a1;
  v5[7] = GUID_666aed77_8284_49e0_bbe2_7f593622c839;
  v5[8] = GUID_e4af46cf_a6b0_441e_b0bb_ef482455534d;
  *a2 = 9;
  *a3 = v5;
  return 0LL;
}
