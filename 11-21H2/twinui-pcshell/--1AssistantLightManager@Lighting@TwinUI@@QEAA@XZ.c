/*
 * XREFs of ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1800E2738
 * Callers:
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1800E35DC (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a12361c1c09cf3691f034514473a1778___::Run @ 0x180116BE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a12361c1c09cf3691f034514473a1778___--Run.c)
 *     ??1SearchAppDesktopExperienceView@@UEAA@XZ @ 0x1803983F4 (--1SearchAppDesktopExperienceView@@UEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1803A543C (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803AC03C (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PE_ea_1803AC03C.c)
 *     ??1?$unique_ptr@VAssistantLightManager@Lighting@TwinUI@@U?$default_delete@VAssistantLightManager@Lighting@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x18055E09C (--1-$unique_ptr@VAssistantLightManager@Lighting@TwinUI@@U-$default_delete@VAssistantLightManager.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180062538 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E5674 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011783C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAA.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@1@@Z @ 0x180180F64 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(
        TwinUI::Lighting::AssistantLightManager *this,
        void *a2)
{
  __int64 v3; // rdx
  wil *v4; // rcx
  struct wil::details::IFunctorHost *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v12[2]; // [rsp+20h] [rbp-60h] BYREF
  struct DiagnosticsInfo v13; // [rsp+30h] [rbp-50h] BYREF
  const char *v14; // [rsp+38h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-40h]
  __int16 v16; // [rsp+48h] [rbp-38h]
  _BYTE v17[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h]
  int v19; // [rsp+64h] [rbp-1Ch]
  struct DiagnosticsInfo retaddr; // [rsp+88h] [rbp+8h]
  TwinUI::Lighting::AssistantLightManager *v21; // [rsp+90h] [rbp+10h] BYREF

  wil::details::SetEvent(*((wil::details **)this + 8), a2);
  v4 = (wil *)*((_QWORD *)this + 7);
  if ( v4 )
    wil::handle_wait(v4, (void *)0xFFFFFFFFLL);
  v21 = this;
  v13 = retaddr;
  v14 = "pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp";
  v15 = 0LL;
  v16 = 53;
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightingWhenLidClosed>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_LightingWhenLidClosed>::GetImpl'::`2'::impl,
    v3);
  v12[0] = off_1806662C0;
  v12[1] = &v21;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v17, 0xFB92B3u, &v13);
  wil::details::RunFunctor((wil::details *)v12, (struct wil::details::IFunctor *)v17, v5);
  if ( v18 )
    *(_DWORD *)(v18 + 16) = v19;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    (char *)this + 64,
    v6,
    v7,
    v8);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    (char *)this + 56,
    v9,
    v10,
    v11);
  std::_Tree_val<std::_Tree_simple_types<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *>>>(
    (char *)this + 40,
    (char *)this + 40,
    *(_QWORD *)(*((_QWORD *)this + 5) + 8LL));
  std::_Deallocate<16,0>(*((_QWORD *)this + 5), 56LL);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
