/*
 * XREFs of ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800CEBBC
 * Callers:
 *     ?Invoke@LaunchCortanaService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800CEBB0 (-Invoke@LaunchCortanaService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800AEF3C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800AF020 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x1800B531C (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 *     ??$ActivateInstance@UILockScreenRegistrySettingProvider@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UILockScreenRegistrySettingProvider@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800CE7C0 (--$ActivateInstance@UILockScreenRegistrySettingProvider@ContentManagement@@@wil@@YA-AV-$com_ptr_.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800CE8BC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaAp.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800CEA30 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=35
void __fastcall CreativeFramework::Actions::LaunchCortanaService::LaunchCortana(
        CreativeFramework::Actions::LaunchCortanaService *this)
{
  __int64 v1; // rdx
  unsigned int v2; // r8d
  int v3; // eax
  int ValueW; // eax
  bool v5; // sf
  __int16 v6; // cx
  __int64 v7; // rax
  const char *v8; // r9
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  int LockAppHost; // eax
  struct ILockAppHost *v12; // rbx
  __int64 (__fastcall *v13)(struct ILockAppHost *, GUID *, __int64 *); // rsi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, GUID *, GUID *, int *); // rsi
  __int64 v18; // rcx
  int v19; // eax
  void **v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct ILockAppHost *v24; // rcx
  int pdwType; // [rsp+20h] [rbp-2C8h]
  int pdwTypea; // [rsp+20h] [rbp-2C8h]
  char v27; // [rsp+40h] [rbp-2A8h] BYREF
  _BYTE v28[7]; // [rsp+41h] [rbp-2A7h] BYREF
  struct ILockAppHost *v29; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-298h] BYREF
  int v31[2]; // [rsp+58h] [rbp-290h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp-288h] BYREF
  signed __int32 v33; // [rsp+68h] [rbp-280h] BYREF
  signed __int32 v34; // [rsp+70h] [rbp-278h] BYREF
  void *v35[3]; // [rsp+78h] [rbp-270h] BYREF
  unsigned __int64 v36; // [rsp+90h] [rbp-258h]
  void *v37[3]; // [rsp+98h] [rbp-250h] BYREF
  unsigned __int64 v38; // [rsp+B0h] [rbp-238h]
  _WORD pvData[264]; // [rsp+C0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+0h]

  v36 = 7LL;
  v35[2] = 0LL;
  LOWORD(v35[0]) = 0;
  std::wstring::assign((unsigned __int64 *)v35, (char *)L"StartMode=Reactive&QuerySource=LockScreen", 0x29uLL);
  try
  {
    v38 = 7LL;
    v37[2] = 0LL;
    LOWORD(v37[0]) = 0;
    std::wstring::assign((unsigned __int64 *)v37, (char *)L"&QuerySourceSecondaryId=", 0x18uLL);
    wil::ActivateInstance<ContentManagement::ILockScreenRegistrySettingProvider>(&v29, v1, v2);
    v27 = 0;
    v28[0] = 0;
    v3 = (*(__int64 (__fastcall **)(struct ILockAppHost *, char *, _BYTE *))(*(_QWORD *)v29 + 48LL))(v29, &v27, v28);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        46LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
        (const char *)(unsigned int)v3,
        pdwType);
    if ( v27 )
    {
      std::wstring::append((char *)v37, (char *)L"LaunchFromSpotlight", 0x13uLL);
LABEL_15:
      std::wstring::append(v35, v37, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v29 )
        (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v29 + 16LL))(v29);
      if ( v38 >= 8 )
        operator delete(v37[0]);
      goto LABEL_51;
    }
    memset_0(pvData, 0, 0x208uLL);
    pcbData = 520;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Speech_OneCore\\Preferences",
               L"Id",
               2u,
               0LL,
               pvData,
               &pcbData);
    v5 = ValueW < 0;
    if ( ValueW )
    {
      v6 = 0;
      pvData[0] = 0;
      if ( ValueW <= 0 )
      {
LABEL_10:
        if ( !v5 )
        {
          v7 = -1LL;
          do
            ++v7;
          while ( pvData[v7] );
          if ( v7 )
            std::wstring::append((char *)v37, (char *)pvData, v7 & -(__int64)(v6 != 0));
        }
        goto LABEL_15;
      }
      ValueW = (unsigned __int16)ValueW | 0x80070000;
    }
    else
    {
      v6 = pvData[0];
    }
    v5 = ValueW < 0;
    goto LABEL_10;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x41,
      (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      v8);
  }
LABEL_51:
  v9 = `wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v29 = *(struct ILockAppHost **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetCachedFeatureEnabledState(
                                     &`wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl,
                                     &v33);
    v9 = (unsigned int)v29;
  }
  LODWORD(v30) = 0;
  BYTE4(v30) = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AF560,
    0x125F087u,
    (v9 >> 8) & 1,
    (v9 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v30,
    1,
    3);
  v10 = `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v29 = *(struct ILockAppHost **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetCachedFeatureEnabledState(
                                     &`wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
                                     &v34);
    v10 = (unsigned int)v29;
  }
  v31[0] = 0;
  LOBYTE(v31[1]) = 3;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AF550,
    0x1389317u,
    (v10 >> 8) & 1,
    (v10 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)v31,
    1,
    3);
  v29 = 0LL;
  v30 = 0LL;
  *(_QWORD *)v31 = 0LL;
  LockAppHost = GetLockAppHost(&v29);
  if ( LockAppHost < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      77LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)LockAppHost,
      pdwTypea);
  v12 = v29;
  v13 = **(__int64 (__fastcall ***)(struct ILockAppHost *, GUID *, __int64 *))v29;
  v14 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v13(v12, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v30);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      78LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v15,
      pdwTypea);
  v16 = v30;
  v17 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, int *))(*(_QWORD *)v30 + 24LL);
  v18 = *(_QWORD *)v31;
  if ( *(_QWORD *)v31 )
  {
    *(_QWORD *)v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v17(v16, &IID_IAboveLockActivationManager, &GUID_f50a27f7_82b6_4711_be12_9becff694462, v31);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      79LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v19,
      pdwTypea);
  pcbData = 0;
  v20 = v35;
  if ( v36 >= 8 )
    v20 = (void **)v35[0];
  v21 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, void **, DWORD *))(**(_QWORD **)v31 + 24LL))(
          *(_QWORD *)v31,
          L"Microsoft.549981C3F5F10_8wekyb3d8bbwe!App",
          v20,
          &pcbData);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      86LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v21,
      pdwTypea);
  v22 = *(_QWORD *)v31;
  if ( *(_QWORD *)v31 )
  {
    *(_QWORD *)v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(struct ILockAppHost *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v36 >= 8 )
    operator delete(v35[0]);
}
