/*
 * XREFs of ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038
 * Callers:
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800A6994 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ @ 0x1800A9610 (-EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ.c)
 *     ?RegisterForKGLOneSettingsUpdates@BroadcastDVRComponent@@AEAAJXZ @ 0x1800A9D6C (-RegisterForKGLOneSettingsUpdates@BroadcastDVRComponent@@AEAAJXZ.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800C5230 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x1800E0B0C (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x1800E0B68 (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180133668 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregist_ea_180133668.c)
 *     ??R?$__func@V_lambda_42d7dced1872ed24a4c1197da8e68253_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x180178E90 (--R-$__func@V_lambda_42d7dced1872ed24a4c1197da8e68253_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UE.c)
 *     ?EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180196470 (-EnumValues@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$vector@V-$basic_string@GU-$char_trai.c)
 *     ?ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z @ 0x180196520 (-ReadData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEAPEAXPEA_K@Z.c)
 *     ?ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z @ 0x1801B12EC (-ReadUInt32@RegistryDataHelper@@QEBAJPEBGIPEAI@Z.c)
 *     _lambda_7ce5adc85e5a19fc59ac7a9da48d7a58_::operator() @ 0x1801DA2A4 (_lambda_7ce5adc85e5a19fc59ac7a9da48d7a58_--operator().c)
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1801E9FAC (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z @ 0x1801EB018 (-EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z.c)
 *     ?SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z @ 0x1801EF130 (-SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z.c)
 *     ?SetWebSearchProviderInstalledDate@SearchSettingsHelper@SearchSettings@@SAJQEBGV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@@Z @ 0x1801EF3F8 (-SetWebSearchProviderInstalledDate@SearchSettingsHelper@SearchSettings@@SAJQEBGV-$time_point@Ucl.c)
 *     ?TryGetHKCU@SearchSettingsHelper@SearchSettings@@CAJPEAPEAUHKEY__@@@Z @ 0x1801EFC24 (-TryGetHKCU@SearchSettingsHelper@SearchSettings@@CAJPEAPEAUHKEY__@@@Z.c)
 *     ?enumerate_current_index@?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x1801F0AAC (-enumerate_current_index@-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?XboxLiveRegKeyWatcherThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1802D3418 (-XboxLiveRegKeyWatcherThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z @ 0x1802E7110 (-WriteData@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1KPEBX_K@Z.c)
 *     ?QueryKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEAEPEAK3@Z @ 0x180405474 (-QueryKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEAEPEAK3@Z.c)
 *     ?WriteKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEBEKK@Z @ 0x18040960C (-WriteKey@GamingOverlayExperienceManager@@AEAAJ_KPEAUHSTRING__@@1PEBEKK@Z.c)
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YAJPEA_N@Z @ 0x18045BD04 (-IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YAJPEA_N@Z.c)
 *     ?AddKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z @ 0x1805FB510 (-AddKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z.c)
 *     ?EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1805FB5A0 (-EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$vector@V-$basic_string@GU-$char_traits.c)
 *     ??R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ @ 0x18079A5B8 (--R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ.c)
 *     ??R?$__func@V_lambda_0e39b4e02d07fc3330b16054b36d48cc_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x18079A730 (--R-$__func@V_lambda_0e39b4e02d07fc3330b16054b36d48cc_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UE.c)
 * Callees:
 *     ??$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z @ 0x180392874 (--$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  return wil::details::ReportFailure_Win32<1>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6);
}
