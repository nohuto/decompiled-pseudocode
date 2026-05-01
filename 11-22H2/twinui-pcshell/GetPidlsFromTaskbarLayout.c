/*
 * XREFs of GetPidlsFromTaskbarLayout @ 0x18017BD4C
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z @ 0x18017BB30 (-ApplyInPlaceTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@@Z.c)
 *     ?ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x1807520F0 (-ApplyAppendDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180752350 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x180752670 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x18003B970 (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0$00@guid@winrt@@QEAA@AEBU_GUID@@@Z @ 0x18008857C (--$-0$00@guid@winrt@@QEAA@AEBU_GUID@@@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800ECCDC (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAA_NXZ @ 0x1801D95AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wi.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802114B8 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18028733C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@P.c)
 *     ??$try_com_query@UITaskbarLayoutItem2@@AEAV?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@wil@@YA?AV?$com_ptr_t@UITaskbarLayoutItem2@@Uerr_exception_policy@wil@@@0@AEAV?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@Z @ 0x1802873B4 (--$try_com_query@UITaskbarLayoutItem2@@AEAV-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@wil@@Y.c)
 *     ??$try_create_instance@UIApplicationResolver@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1802873F8 (--$try_create_instance@UIApplicationResolver@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??$try_create_instance@UIPinnedList@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180287464 (--$try_create_instance@UIPinnedList@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     ??1?$com_ptr@UIPinnedList@@@winrt@@QEAA@XZ @ 0x1802875EC (--1-$com_ptr@UIPinnedList@@@winrt@@QEAA@XZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x180287684 (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802876BC (--1-$test_watcher@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802876EC (--1-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 *     ??4?$com_ptr@UIPinnedList@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180287728 (--4-$com_ptr@UIPinnedList@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??4?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAAAEAV01@AEBV?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@1@@Z @ 0x180287768 (--4-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 *     ??4JsonArray@Json@Data@Windows@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1802877A4 (--4JsonArray@Json@Data@Windows@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@1@XZ @ 0x1802877C4 (--C-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 *     GetEnterprisePinDataFromRegistry @ 0x180287B1C (GetEnterprisePinDataFromRegistry.c)
 *     PersistEnterprisePinDataToRegistry @ 0x180287EFC (PersistEnterprisePinDataToRegistry.c)
 *     PersistEnterprisePinDataToRegistry_Old @ 0x180288158 (PersistEnterprisePinDataToRegistry_Old.c)
 *     ShouldAddEnterprisePinToOutput @ 0x1802883A8 (ShouldAddEnterprisePinToOutput.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix@@@details@wil@@QEAA_NXZ @ 0x180288A14 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix@@@.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAAXXZ @ 0x180288A50 (-complete@-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vte.c)
 *     ?set_flag@?$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBD@Z @ 0x1802893DC (-set_flag@-$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180391844 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAPEAPEAUIObjectArray@@XZ @ 0x18039EE20 (-ReleaseAndGetAddressOf@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAPEAPEAUIObjectArray@@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1803E2C70 (--0JsonArray@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x18048EFD0 (--$-9V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHSTRING__@@XZ @ 0x180490534 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIShellItem@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIShellItem@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180493438 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIShellItem@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1804B1200 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1804B68D8 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1806A2560 (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x180750DD0 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4PinningEventType@1@AEAI$$QEAPEBG@Z @ 0x180750E40 (--$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTel.c)
 *     ??0?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180751620 (--0-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@.c)
 *     ??0?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1807516A0 (--0-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180751844 (--0Iterator@-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Mi.c)
 *     ??6?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@G@Z @ 0x180751BF4 (--6-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@G@Z.c)
 *     ??_D?$basic_ostringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180751E50 (--_D-$basic_ostringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Add@?$CTSimpleArray@PEFAU_ITEMIDLIST@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEFAU_ITEMIDLIST@@@@V?$CSimpleArrayStandardCompareHelper@PEFAU_ITEMIDLIST@@@@V?$CSimpleArrayStandardMergeHelper@PEFAU_ITEMIDLIST@@@@@@QEAAJAEBQEFAU_ITEMIDLIST@@PEA_K@Z @ 0x180751F08 (-Add@-$CTSimpleArray@PEFAU_ITEMIDLIST@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEFAU_ITEMIDLIST@@@@V-$CS.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180755968 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UITaskbarLayoutItem@@V-$ComPtr@UITaskbarLayo.c)
 *     ?GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo@2@@Z @ 0x180755A10 (-GetInstalledBrowserChannelInfo@@YA_NW4ChannelId@BrowserChannels@@W4InstallationLevel@2@PEAUInfo.c)
 *     ?IsPackagedBrowserReplacementFeaturePresent@@YA_NXZ @ 0x180758730 (-IsPackagedBrowserReplacementFeaturePresent@@YA_NXZ.c)
 *     ?LegacyBrowserUpgrade@TaskbarFlexibleLayoutTelemetry@@SAXXZ @ 0x180758DA4 (-LegacyBrowserUpgrade@TaskbarFlexibleLayoutTelemetry@@SAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18075AA44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BrowserReplacement@@@details@wil@@QEAAX_N.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BrowserReplacement_SpartanDeprecation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18075ACC4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_BrowserReplacement_SpartanDepre.c)
 *     ?SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z @ 0x18075B8E0 (-SetPinSourceForPinnedItem@@YAJPEFAU_ITEMIDLIST@@PEAPEFAU1@W4TaskbarPinningSource@@@Z.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall GetPidlsFromTaskbarLayout(unsigned int a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  HRESULT v8; // eax
  unsigned int v9; // ebx
  __int64 result; // rax
  int v11; // eax
  unsigned int v12; // ebx
  const char *v13; // r9
  int v14; // eax
  LPVOID v15; // rbx
  __int64 (__fastcall *v16)(LPVOID, _QWORD, __int64); // rdi
  __int64 AddressOf; // r8
  int v18; // eax
  unsigned int v19; // ebx
  IUnknown *v20; // rdi
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 EnterprisePinDataFromRegistry; // rax
  const char *v25; // rdx
  const char *v26; // rax
  __int64 v27; // r9
  bool v28; // al
  char v29; // dl
  const char *v30; // rdx
  const char *v31; // rax
  __int64 v32; // r9
  _QWORD *v33; // rax
  __int64 v34; // rbx
  int (__fastcall *v35)(__int64, __int64); // rdi
  __int64 v36; // rdx
  wchar_t *v37; // rax
  const WCHAR *v38; // rdi
  int v39; // eax
  __int64 v40; // rdx
  wil::details::in1diag3 *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rdx
  void **v44; // rax
  HRESULT v45; // eax
  void **v46; // rax
  _QWORD *v47; // rax
  const unsigned __int16 *v48; // rax
  int (__fastcall *v49)(__int64, __int64); // rdi
  __int64 v50; // rax
  const WCHAR *StringRawBuffer; // rdi
  _QWORD *v52; // rax
  const unsigned __int16 *v53; // rax
  void **v54; // rax
  HRESULT v55; // eax
  struct IShellItem *v56; // rax
  struct IShellItem **v57; // r8
  __int64 *v58; // rdi
  __int64 v59; // rcx
  __int64 (__fastcall *v60)(__int64, __int64); // rdi
  __int64 v61; // rax
  int v62; // eax
  _QWORD *v63; // rax
  const unsigned __int16 *v64; // rax
  int v65; // eax
  const char *v66; // r9
  void **v67; // rax
  HRESULT v68; // eax
  const char *v69; // rdx
  const char *v70; // rax
  __int64 v71; // r9
  int v72; // eax
  int v73; // eax
  __int64 v74; // [rsp+40h] [rbp-448h] BYREF
  __int64 v75; // [rsp+48h] [rbp-440h] BYREF
  _BYTE v76[8]; // [rsp+50h] [rbp-438h] BYREF
  _QWORD v77[7]; // [rsp+58h] [rbp-430h] BYREF
  LPITEMIDLIST ppidl; // [rsp+90h] [rbp-3F8h] BYREF
  _QWORD *v79; // [rsp+98h] [rbp-3F0h] BYREF
  unsigned int v80; // [rsp+A0h] [rbp-3E8h] BYREF
  int v81; // [rsp+A4h] [rbp-3E4h]
  __int64 v82; // [rsp+A8h] [rbp-3E0h] BYREF
  IUnknown *punk; // [rsp+B0h] [rbp-3D8h] BYREF
  LPVOID ppv; // [rsp+B8h] [rbp-3D0h] BYREF
  IUnknown *v85; // [rsp+C0h] [rbp-3C8h] BYREF
  HSTRING string; // [rsp+C8h] [rbp-3C0h] BYREF
  unsigned int v87; // [rsp+D0h] [rbp-3B8h] BYREF
  int v88; // [rsp+D4h] [rbp-3B4h]
  __int64 v89; // [rsp+D8h] [rbp-3B0h] BYREF
  _BYTE v90[8]; // [rsp+E0h] [rbp-3A8h] BYREF
  HSTRING v91; // [rsp+E8h] [rbp-3A0h] BYREF
  _BYTE v92[8]; // [rsp+F0h] [rbp-398h] BYREF
  __int64 v93; // [rsp+F8h] [rbp-390h] BYREF
  unsigned int v94; // [rsp+100h] [rbp-388h]
  __int128 v95; // [rsp+108h] [rbp-380h] BYREF
  __int64 v96; // [rsp+118h] [rbp-370h]
  HSTRING v97; // [rsp+120h] [rbp-368h]
  __int128 v98; // [rsp+128h] [rbp-360h] BYREF
  __int64 v99; // [rsp+138h] [rbp-350h]
  _BYTE v100[8]; // [rsp+140h] [rbp-348h] BYREF
  _BYTE v101[232]; // [rsp+148h] [rbp-340h] BYREF
  WCHAR pszPath[264]; // [rsp+230h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+488h] [rbp+0h]

  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  v88 = 0;
  v81 = 0;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  v8 = CoCreateInstance(&CLSID_TaskbarLayoutPolicyManager, 0LL, 1u, &GUID_99846e14_d914_4eb8_97e0_5432c32b2f40, &ppv);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&ppv);
    return v9;
  }
  try
  {
    v11 = (*(__int64 (**)(void))(*(_QWORD *)ppv + 24LL))();
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x194,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&ppv);
      return v12;
    }
    v14 = v88;
    if ( !v88 )
      goto LABEL_38;
    v89 = 0LL;
    v15 = ppv;
    v16 = *(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 32LL);
    AddressOf = Microsoft::WRL::ComPtr<IObjectArray>::ReleaseAndGetAddressOf(&v89);
    v18 = v16(v15, a1, AddressOf);
    v19 = v18;
    v20 = 0LL;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x199,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v89);
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&ppv);
      return v19;
    }
    memset_0(v100, 0, 0xE8uLL);
    std::basic_ostringstream<unsigned short>::basic_ostringstream<unsigned short>(v100);
    v87 = 0;
    if ( a1 == 3 )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v89 + 24LL))(v89, &v87);
    winrt::Windows::Data::Json::JsonArray::JsonArray((winrt::Windows::Data::Json::JsonArray *)v92);
    winrt::Windows::Data::Json::JsonArray::JsonArray((winrt::Windows::Data::Json::JsonArray *)v90);
    v74 = 0LL;
    v75 = 0LL;
    v82 = 0LL;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl)
      && a1 == 2 )
    {
      v21 = tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>>((struct wil::details::IFailureCallback *)v77);
      tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator=(
        &v82,
        v21);
      tip2::test_watcher<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_watcher<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(v77);
      winrt::guid::guid((winrt::guid *)&v93, &CLSID_StartMenuCacheAndAppResolver);
      v22 = (__int64 *)winrt::try_create_instance<IApplicationResolver>(&v79, &v93);
      winrt::com_ptr<ITouchSwipe>::operator=(&v74, v22);
      winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v79);
      winrt::guid::guid((winrt::guid *)&v93, &CLSID_TaskbandPin);
      v23 = winrt::try_create_instance<IPinnedList>(&v79, &v93);
      winrt::com_ptr<IPinnedList>::operator=(&v75, v23);
      winrt::com_ptr<IPinnedList>::~com_ptr<IPinnedList>(&v79);
      if ( wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v74)
        && wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v75) )
      {
        EnterprisePinDataFromRegistry = GetEnterprisePinDataFromRegistry(&v79, &v82);
        winrt::Windows::Data::Json::JsonArray::operator=(v92, EnterprisePinDataFromRegistry);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v79);
      }
      else
      {
        tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
          &v82,
          &v79);
        v26 = tip::details::reason_string(
                (tip::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::helper_instances_unavailable",
                v25);
        tip2::details::shared_data<0,0,1>::set_flag(v27 + 8, 8LL, v26);
        tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v79);
      }
    }
    details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>(
      &v93,
      v89);
    v95 = 0LL;
    v96 = 0LL;
    details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::Iterator(
      &v95,
      &v93,
      0LL);
    v98 = 0LL;
    v99 = 0LL;
    details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::Iterator(
      &v98,
      &v93,
      v94);
    while ( 1 )
    {
      if ( (_DWORD)v95 == (_DWORD)v98 && v96 == v99 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v98 + 1);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v95 + 1);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v93);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl)
          && a1 == 2 )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix>::GetImpl'::`2'::impl);
          if ( wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v75) )
          {
            v28 = wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v74);
            if ( v29 )
            {
              if ( v28 )
                PersistEnterprisePinDataToRegistry(v90, &v82);
            }
            else if ( v28 && (unsigned __int8)PersistEnterprisePinDataToRegistry_Old(v90) )
            {
              tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
                &v82,
                &v79);
              v31 = tip::details::reason_string(
                      (tip::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::enterprise_pin_data_persisted",
                      v30);
              tip2::details::shared_data<0,0,1>::set_flag(v32 + 8, 5LL, v31);
              tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v79);
            }
          }
          tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::complete(&v82);
          goto LABEL_37;
        }
        if ( a1 != 3 )
          goto LABEL_37;
        if ( *(_QWORD *)(a2 + 8) > (unsigned __int64)v87 )
        {
          v80 = 4;
          ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::FailureEvent<enum ProgrammableTaskbarTelemetry::FailureCases>(&v80);
          tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v82);
          winrt::com_ptr<IPinnedList>::~com_ptr<IPinnedList>(&v75);
          winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v74);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v90);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v92);
          std::basic_ostringstream<unsigned short>::`vbase destructor'(v100);
          Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v89);
          Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&ppv);
          return 2147943568LL;
        }
        std::basic_stringbuf<unsigned short>::str(v101, v77);
        v33 = v77;
        if ( v77[3] >= 8uLL )
          v33 = (_QWORD *)v77[0];
        v79 = v33;
        v80 = 1;
        ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::PinningEvent<enum ProgrammableTaskbarTelemetry::PinningEventType,unsigned int &,unsigned short const *>(
          &v80,
          &v87,
          &v79);
        std::wstring::_Tidy_deallocate((__int64)v77);
LABEL_37:
        tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(&v82);
        winrt::com_ptr<IPinnedList>::~com_ptr<IPinnedList>(&v75);
        winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v74);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v90);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v92);
        std::basic_ostringstream<unsigned short>::`vbase destructor'(v100);
        Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v89);
        v14 = v88;
LABEL_38:
        *a3 = v14;
        if ( a4 )
          *a4 = v81;
        Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&ppv);
        return 0LL;
      }
      v34 = *((_QWORD *)&v95 + 1);
      v79 = (_QWORD *)*((_QWORD *)&v95 + 1);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v79);
      punk = v20;
      string = (HSTRING)v20;
      v91 = (HSTRING)v20;
      v35 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 24LL);
      v36 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::operator&(&string);
      if ( v35(v34, v36) >= 0 )
      {
        if ( (unsigned __int8)wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&string) )
          break;
      }
      v49 = *(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 56LL);
      v50 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::operator&(&string);
      if ( v49(v34, v50) >= 0
        && (unsigned __int8)wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&string) )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        if ( a1 == 3 )
        {
          v52 = (_QWORD *)std::basic_ostream<unsigned short>::tellp(v100, v77);
          if ( *v52 + v52[1] )
            std::basic_ostream<unsigned short>::operator<<(v100);
          v53 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(StringRawBuffer);
          std::operator<<<unsigned short,std::char_traits<unsigned short>>(v100, v53);
        }
        v54 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IShellItem>>(&punk);
        v55 = SHCreateItemInKnownFolder(
                &FOLDERID_AppsFolder,
                0x4000u,
                StringRawBuffer,
                &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                v54);
        v20 = 0LL;
        if ( v55 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1F7,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)v55);
        if ( !punk )
        {
LABEL_88:
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix>::GetImpl'::`2'::impl)
            && a1 == 2 )
          {
            tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
              &v82,
              v76);
            v70 = tip::details::reason_string(
                    (tip::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::shell_item_not_found",
                    v69);
            tip2::details::shared_data<0,0,1>::set_flag(v71 + 8, 9LL, v70);
            tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(v76);
          }
          goto LABEL_107;
        }
        v85 = 0LL;
        v56 = (struct IShellItem *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IShellItem>>(&v85);
        if ( TaskbarPinHelper::GetTaskbarPinnableItem((TaskbarPinHelper *)punk, v56, v57) >= 0 )
        {
          v58 = (__int64 *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IShellItem>>(&punk);
          v59 = (__int64)v85;
          if ( v85 )
          {
            ((void (__fastcall *)(IUnknown *))v85->lpVtbl->AddRef)(v85);
            v59 = (__int64)v85;
          }
          *v58 = v59;
          v20 = 0LL;
        }
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v85);
      }
      else
      {
        v60 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 32LL);
        v61 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::operator&(&v91);
        v62 = v60(v34, v61);
        v20 = 0LL;
        if ( v62 >= 0
          && (unsigned __int8)wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&v91) )
        {
          v20 = (IUnknown *)WindowsGetStringRawBuffer(v91, 0LL);
          if ( a1 == 3 )
          {
            v63 = (_QWORD *)std::basic_ostream<unsigned short>::tellp(v100, v77);
            if ( *v63 + v63[1] )
              std::basic_ostream<unsigned short>::operator<<(v100);
            v64 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath((LPCWSTR)v20);
            std::operator<<<unsigned short,std::char_traits<unsigned short>>(v100, v64);
          }
          if ( v20 )
          {
            v65 = SHExpandEnvironmentStringsW(v20, pszPath, 260LL);
            v20 = 0LL;
            if ( v65 )
            {
              v67 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IShellItem>>(&punk);
              v68 = SHCreateItemFromParsingName(pszPath, 0LL, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, v67);
              if ( v68 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x210,
                  (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                  (const char *)(unsigned int)v68);
            }
            else
            {
              wil::details::in1diag3::_Log_GetLastError(
                retaddr,
                (void *)0x20E,
                (unsigned int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                v66);
            }
          }
        }
      }
LABEL_87:
      if ( !punk )
        goto LABEL_88;
      if ( SHGetIDListFromObject(punk, &ppidl) < 0
        || (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 40LL))(v34, &v80) < 0
        || (int)SetPinSourceForPinnedItem(ppidl, &ppidl, v80) < 0 )
      {
        ILFree(ppidl);
      }
      else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl) )
      {
        v85 = v20;
        wil::try_com_query<ITaskbarLayoutItem2,Microsoft::WRL::ComPtr<ITaskbarLayoutItem> &>(&v85, &v79);
        if ( v80 == 3
          && wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v85)
          && wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v74)
          && wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v75)
          && !(unsigned __int8)ShouldAddEnterprisePinToOutput(v85, &ppidl, v74, v75, v92, v90, &v82) )
        {
          ILFree(ppidl);
        }
        else
        {
          v72 = CTSimpleArray<_ITEMIDLIST __unaligned *,4294967294,CTPolicyCoTaskMem<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardCompareHelper<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardMergeHelper<_ITEMIDLIST __unaligned *>>::Add(
                  a2,
                  &ppidl);
          if ( v72 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x236,
              (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
              (const char *)(unsigned int)v72);
        }
        wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>(&v85);
      }
      else
      {
        v73 = CTSimpleArray<_ITEMIDLIST __unaligned *,4294967294,CTPolicyCoTaskMem<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardCompareHelper<_ITEMIDLIST __unaligned *>,CSimpleArrayStandardMergeHelper<_ITEMIDLIST __unaligned *>>::Add(
                a2,
                &ppidl);
        if ( v73 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x23F,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)v73);
      }
LABEL_107:
      if ( v91 )
        WindowsDeleteString(v91);
      if ( string )
        WindowsDeleteString(string);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&punk);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v79);
      LODWORD(v95) = v95 + 1;
      details::ObjectArrayAdapterImpl<ITaskbarLayoutItem,Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>::Iterator::GetCurrentObject(&v95);
    }
    v37 = (wchar_t *)WindowsGetStringRawBuffer(string, 0LL);
    v38 = v37;
    v97 = 0LL;
    if ( v37 )
    {
      v39 = ParseAppUserModelId(v37, 0LL, 0LL);
      v41 = retaddr;
      if ( v39 < 0 )
      {
        v42 = 463LL;
LABEL_55:
        wil::details::in1diag3::_Log_Hr(
          v41,
          (void *)v42,
          (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
          (const char *)(unsigned int)v39);
        goto LABEL_56;
      }
      LOBYTE(v40) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_BrowserReplacement_SpartanDeprecation>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_Servicing_BrowserReplacement_SpartanDeprecation>::GetImpl'::`2'::impl,
        v40);
      LOBYTE(v43) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_BrowserReplacement>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::GetImpl'::`2'::impl,
        v43,
        0LL);
      if ( ((unsigned __int8)GetInstalledBrowserChannelInfo()
         || IsPackagedBrowserReplacementFeaturePresent()
         || IsPackagedBrowserReplacementFeaturePresent())
        && CompareStringOrdinal(v38, -1, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge", -1, 1) == 2 )
      {
        TaskbarFlexibleLayoutTelemetry::LegacyBrowserUpgrade();
        v44 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IShellItem>>(&punk);
        v45 = SHCreateItemInKnownFolder(
                &FOLDERID_CommonPrograms,
                0x4000u,
                L"Microsoft Edge.lnk",
                &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                v44);
        if ( v45 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1D8,
            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)v45);
        v38 = L"Microsoft Edge.lnk";
        goto LABEL_56;
      }
      v46 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IShellItem>>(&punk);
      v39 = SHCreateItemInKnownFolder(
              &FOLDERID_AppsFolder,
              0x4000u,
              v38,
              &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
              v46);
      v41 = retaddr;
      if ( v39 < 0 )
      {
        v42 = 477LL;
        goto LABEL_55;
      }
    }
LABEL_56:
    if ( a1 == 3 )
    {
      v47 = (_QWORD *)std::basic_ostream<unsigned short>::tellp(v100, v77);
      if ( *v47 + v47[1] )
        std::basic_ostream<unsigned short>::operator<<(v100);
      v48 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(v38);
      std::operator<<<unsigned short,std::char_traits<unsigned short>>(v100, v48);
    }
    v20 = 0LL;
    if ( v97 )
      WindowsDeleteString(v97);
    goto LABEL_87;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x27E,
                           (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                           v13);
  }
  return result;
}
