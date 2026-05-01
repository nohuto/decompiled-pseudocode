/*
 * XREFs of ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D3FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1800D43DC (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PrivilegedOperationsService::SubscribeToServices(
        PrivilegedOperationsService *this,
        struct IServiceProvider *a2)
{
  char *v4; // rdi
  unsigned __int8 (*v5)(void); // rax
  CCriticalFailureHandler *v6; // rcx
  int v7; // ebx
  unsigned __int64 *v9; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v10; // [rsp+28h] [rbp-D8h]
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[93]; // [rsp+50h] [rbp-B0h] BYREF
  char v15; // [rsp+338h] [rbp+238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+368h] [rbp+268h]

  v14[0] = &GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa;
  v14[1] = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v14[2] = 0LL;
  v14[3] = &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1;
  v14[4] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v14[5] = 0LL;
  v14[6] = &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1;
  v14[7] = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v14[8] = 0LL;
  v14[9] = &SID_FullScreenManager;
  v14[10] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v14[11] = 0LL;
  v14[12] = &SID_ViewEventDispatcher;
  v14[13] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v14[14] = 0LL;
  v14[15] = &SID_ViewEventDispatcher;
  v14[16] = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v14[17] = 0LL;
  v14[18] = &SID_ViewEventDispatcher;
  v14[19] = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v14[20] = 0LL;
  v14[21] = &SID_ViewEventDispatcher;
  v14[22] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[23] = 0LL;
  v14[24] = &GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v14[25] = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v14[26] = 0LL;
  v14[27] = &GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v14[28] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[29] = 0LL;
  v14[30] = &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v14[31] = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v14[32] = 0LL;
  v14[33] = &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v14[34] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[35] = 0LL;
  v14[36] = &IID_ILockScreenViewManager;
  v14[37] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[38] = 0LL;
  v14[39] = &IID_IAboveLockViewManager;
  v14[40] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[41] = 0LL;
  v14[42] = &CLSID_HolographicForegroundAssistant;
  v14[43] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[44] = 0LL;
  v14[45] = &GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f;
  v14[46] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[47] = 0LL;
  v14[48] = &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v14[49] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v14[50] = 0LL;
  v14[51] = &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v14[52] = &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9;
  v14[53] = 0LL;
  v14[54] = &CLSID_VirtualMonitorSlateHostFactory;
  v14[55] = &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9;
  v14[56] = IsHolographicWin32SlatesFeatureEnabled;
  v14[57] = &CLSID_HolographicSlatePositionGuardian;
  v14[58] = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v14[59] = IsHolographicWin32SlatesFeatureEnabled;
  v14[60] = &GUID_7ca26eb3_f3a6_4d4e_9885_c7d2b7b34ac8;
  v14[61] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v14[62] = 0LL;
  v14[63] = &SID_AccessibilityExperienceManager;
  v14[64] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[65] = 0LL;
  v14[66] = &GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55;
  v14[67] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[68] = 0LL;
  v14[69] = &GUID_3da63696_768a_4297_9ca1_ba5ebb8c2651;
  v14[70] = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v14[71] = 0LL;
  v14[72] = &GUID_1dec43b5_da90_42ad_8c2a_904640ed2091;
  v14[73] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[74] = 0LL;
  v14[75] = &SID_ImmersiveLauncher;
  v14[76] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v14[77] = wil::ExpiredFeatureBase<wil::details::FeatureTraitsBase,enum wil::details::EmptyVariant,0>::IsEnabled;
  v14[78] = &GUID_bdd61328_14f8_4dff_8b7b_92be622ae360;
  v14[79] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v14[80] = 0LL;
  v14[81] = &GUID_749f2714_937d_445e_9d22_666f49e7ff32;
  v14[82] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[83] = wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::IsEnabled;
  v14[84] = &GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986;
  v14[85] = &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9;
  v14[86] = 0LL;
  v14[87] = &GUID_e3900af7_62d2_42e3_a4c8_70a72baad63f;
  v14[88] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[89] = wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::IsEnabled;
  v14[90] = &GUID_ae76144d_7798_45b0_8065_d2af280de3d9;
  v14[91] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v14[92] = 0LL;
  v4 = (char *)v14;
  while ( 1 )
  {
    v5 = (unsigned __int8 (*)(void))*((_QWORD *)v4 + 2);
    if ( v5 && !v5() )
      goto LABEL_7;
    v12 = 0LL;
    if ( ((int (__fastcall *)(struct IServiceProvider *, _QWORD, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           *(_QWORD *)v4,
           &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db,
           &v12) >= 0 )
      break;
LABEL_6:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
LABEL_7:
    v4 += 24;
    if ( v4 == &v15 )
      return 0LL;
  }
  v7 = PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
         (char *)this + 120,
         v12,
         *((_QWORD *)v4 + 1));
  v11 = v7;
  if ( CRVPrivate::cfhImmersiveShellStartup )
    goto LABEL_5;
  if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v13) >= 0 )
  {
    switch ( v13[0] )
    {
      case 2u:
        v7 = -2023406815;
        goto LABEL_20;
      case 3u:
        v7 = -2023406814;
        goto LABEL_20;
      case 4u:
        v7 = -2147418094;
        goto LABEL_20;
      case 5u:
        v7 = -2147022986;
LABEL_20:
        v11 = v7;
        break;
    }
  }
  CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_5:
  if ( v7 >= 0 )
    goto LABEL_6;
  if ( v7 != -2147024882 && v7 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v6,
      &v11,
      L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      0x318u,
      v9,
      v10);
    v7 = v11;
  }
  if ( v7 >= 0 )
    goto LABEL_6;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x318,
    (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v7,
    (int)v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return (unsigned int)v7;
}
