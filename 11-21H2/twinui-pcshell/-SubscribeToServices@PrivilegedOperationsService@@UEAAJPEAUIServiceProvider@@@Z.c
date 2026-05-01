/*
 * XREFs of ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x18006F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1800700D4 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PrivilegedOperationsService::SubscribeToServices(
        PrivilegedOperationsService *this,
        struct IServiceProvider *a2)
{
  __int64 *v4; // rdi
  unsigned __int8 (*v5)(void); // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  GUID *v16; // rdx
  int v17; // eax
  unsigned int v18; // ebx
  CCriticalFailureHandler *v19; // rcx
  __int64 v20; // rcx
  int DWORD; // eax
  unsigned int v23; // eax
  unsigned __int64 *v24; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v25; // [rsp+28h] [rbp-D8h]
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v27; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v28[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v29[96]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+350h] [rbp+250h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+388h] [rbp+288h]

  v29[0] = &GUID_7850b06b_666e_44c2_8783_bd8f3526bcfa;
  v29[1] = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v29[2] = 0LL;
  v29[3] = &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1;
  v29[4] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v29[5] = 0LL;
  v29[6] = &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1;
  v29[7] = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v29[8] = 0LL;
  v29[9] = &SID_FullScreenManager;
  v29[10] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v29[11] = 0LL;
  v29[12] = &SID_ViewEventDispatcher;
  v29[13] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v29[14] = 0LL;
  v29[15] = &SID_ViewEventDispatcher;
  v29[16] = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v29[17] = 0LL;
  v29[18] = &SID_ViewEventDispatcher;
  v29[19] = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v29[20] = 0LL;
  v29[21] = &SID_ViewEventDispatcher;
  v29[22] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[23] = 0LL;
  v29[24] = &GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v29[25] = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v29[26] = 0LL;
  v29[27] = &GUID_faacf24c_7de0_4ea3_9d2a_0dcc7475e219;
  v29[28] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[29] = 0LL;
  v29[30] = &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v29[31] = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v29[32] = 0LL;
  v29[33] = &GUID_267942a2_c5d7_429f_9c5b_8bf295b37db5;
  v29[34] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[35] = 0LL;
  v29[36] = &IID_ILockScreenViewManager;
  v29[37] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[38] = 0LL;
  v29[39] = &IID_IAboveLockViewManager;
  v29[40] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[41] = 0LL;
  v29[42] = &CLSID_HolographicForegroundAssistant;
  v29[43] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[44] = 0LL;
  v29[45] = &GUID_c83ec4e0_068f_4a90_a1c7_20841a08f99f;
  v29[46] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[47] = 0LL;
  v29[48] = &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v29[49] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v29[50] = 0LL;
  v29[51] = &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261;
  v29[52] = &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9;
  v29[53] = 0LL;
  v29[54] = &CLSID_VirtualMonitorSlateHostFactory;
  v29[55] = &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9;
  v29[56] = IsHolographicWin32SlatesFeatureEnabled;
  v29[57] = &CLSID_HolographicSlatePositionGuardian;
  v29[58] = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v29[59] = IsHolographicWin32SlatesFeatureEnabled;
  v29[60] = &GUID_7ca26eb3_f3a6_4d4e_9885_c7d2b7b34ac8;
  v29[61] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v29[62] = 0LL;
  v29[63] = &SID_AccessibilityExperienceManager;
  v29[64] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[65] = wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::IsEnabled;
  v29[66] = &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c;
  v29[67] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v29[68] = wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::IsEnabled;
  v29[69] = &GUID_5ac9e22f_8a57_43c0_bf9a_1e1f5f366e55;
  v29[70] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[71] = 0LL;
  v29[72] = &GUID_3da63696_768a_4297_9ca1_ba5ebb8c2651;
  v29[73] = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
  v29[74] = 0LL;
  v29[75] = &GUID_1dec43b5_da90_42ad_8c2a_904640ed2091;
  v29[76] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[77] = 0LL;
  v29[78] = &SID_ImmersiveLauncher;
  v29[79] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v29[80] = wil::Feature<__WilFeatureTraits_Feature_StartInWin32Host>::IsEnabled;
  v29[81] = &GUID_bdd61328_14f8_4dff_8b7b_92be622ae360;
  v29[82] = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v29[83] = 0LL;
  v29[84] = &GUID_749f2714_937d_445e_9d22_666f49e7ff32;
  v29[85] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[86] = wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::IsEnabled;
  v29[87] = &GUID_4318ccd5_092f_4ad4_9bc2_6962f0b2d986;
  v29[88] = &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9;
  v29[89] = 0LL;
  v29[90] = &GUID_e3900af7_62d2_42e3_a4c8_70a72baad63f;
  v29[91] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[92] = wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::IsEnabled;
  v29[93] = &GUID_ae76144d_7798_45b0_8065_d2af280de3d9;
  v29[94] = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v29[95] = 0LL;
  v4 = v29;
  while ( 1 )
  {
    v5 = (unsigned __int8 (*)(void))v4[2];
    if ( v5 && !v5() )
      goto LABEL_28;
    v27 = 0LL;
    if ( ((int (__fastcall *)(struct IServiceProvider *, __int64, GUID *, __int64 **))a2->lpVtbl->QueryService)(
           a2,
           *v4,
           &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db,
           &v27) >= 0 )
      break;
LABEL_26:
    v20 = (__int64)v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
LABEL_28:
    v4 += 3;
    if ( v4 == &v30 )
      return 0LL;
  }
  v7 = (_QWORD *)v4[1];
  v8 = *v7 - *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1;
  if ( *v7 == *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1 )
    v8 = v7[1] - *(_QWORD *)GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data4;
  if ( v8 )
  {
    v9 = *v7 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
    if ( *v7 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
      v9 = v7[1] - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
    if ( v9 )
    {
      v10 = *v7 - *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1;
      if ( *v7 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1 )
        v10 = v7[1] - *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4;
      if ( v10 )
      {
        v11 = *v7 - *(_QWORD *)&GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9.Data1;
        if ( *v7 == *(_QWORD *)&GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9.Data1 )
          v11 = v7[1] - *(_QWORD *)GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9.Data4;
        if ( v11 )
        {
          v12 = *v7 - *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1;
          if ( *v7 == *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1 )
            v12 = v7[1] - *(_QWORD *)GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4;
          if ( v12 )
          {
            v18 = PrivilegedOperationsServiceBase<CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
                    (char *)this + 120,
                    v27,
                    v7,
                    v6);
            goto LABEL_23;
          }
          v13 = (__int64)v27;
          v14 = *v27;
          v15 = *((_QWORD *)this + 21);
          v16 = &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
        }
        else
        {
          v13 = (__int64)v27;
          v14 = *v27;
          v15 = *((_QWORD *)this + 22);
          v16 = &GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9;
        }
      }
      else
      {
        v13 = (__int64)v27;
        v14 = *v27;
        v15 = *((_QWORD *)this + 23);
        v16 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
      }
    }
    else
    {
      v13 = (__int64)v27;
      v14 = *v27;
      v15 = *((_QWORD *)this + 24);
      v16 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(v14 + 24))(v13, v16, v15);
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD))(*v27 + 24))(
            v27,
            &GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8,
            *((_QWORD *)this + 25));
  }
  v18 = v17;
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x256,
      (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v17,
      (int)v24);
  else
    v18 = 0;
LABEL_23:
  v26 = v18;
  v19 = (CCriticalFailureHandler *)v18;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v28);
    v19 = (CCriticalFailureHandler *)v18;
    if ( DWORD >= 0 )
    {
      switch ( v28[0] )
      {
        case 2u:
          v23 = -2023406815;
          goto LABEL_47;
        case 3u:
          v23 = -2023406814;
          goto LABEL_47;
        case 4u:
          v23 = -2147418094;
          goto LABEL_47;
        case 5u:
          v23 = -2147022986;
LABEL_47:
          v19 = (CCriticalFailureHandler *)v23;
          v26 = v23;
          v18 = v23;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
  }
  if ( (int)v19 < 0 && (_DWORD)v19 != -2147024882 && (_DWORD)v19 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v19,
      &v26,
      L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      0x313u,
      v24,
      v25);
    v18 = v26;
  }
  if ( (v18 & 0x80000000) == 0 )
    goto LABEL_26;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x313,
    (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)v18,
    (int)v24);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
  return v18;
}
