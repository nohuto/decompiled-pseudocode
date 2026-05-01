/*
 * XREFs of ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x180177594
 * Callers:
 *     ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x180176F20 (--1CortanaStoreAppExperienceManager@@EEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x180480968 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801166F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAA.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180177DC8 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@1@@Z @ 0x180177E00 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall TwinUI::Lighting::AssistantLightManager::~AssistantLightManager(
        TwinUI::Lighting::AssistantLightManager *this,
        void *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  wil *v5; // rcx
  struct wil::details::IFunctorHost *v6; // r8
  void *v7; // rdx
  wil::details *v8; // rcx
  wil::details *v9; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-60h] BYREF
  struct DiagnosticsInfo v11; // [rsp+30h] [rbp-50h] BYREF
  const char *v12; // [rsp+38h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-40h]
  __int16 v14; // [rsp+48h] [rbp-38h]
  _BYTE v15[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+64h] [rbp-1Ch]
  struct DiagnosticsInfo retaddr; // [rsp+88h] [rbp+8h]
  TwinUI::Lighting::AssistantLightManager *v19; // [rsp+90h] [rbp+10h] BYREF

  wil::details::SetEvent(*((wil::details **)this + 8), a2);
  v5 = (wil *)*((_QWORD *)this + 7);
  if ( v5 )
    wil::handle_wait(v5, (void *)0xFFFFFFFFLL, v3, v4);
  v19 = this;
  v11 = retaddr;
  v12 = "pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp";
  v13 = 0LL;
  v14 = 54;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightingWhenLidClosed>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_LightingWhenLidClosed>::GetImpl'::`2'::impl,
    1u,
    v3,
    v4);
  v10[0] = &off_1807C8068;
  v10[1] = &v19;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v15, 16487091, &v11);
  wil::details::RunFunctor((wil::details *)v10, (struct wil::details::IFunctor *)v15, v6);
  if ( v16 )
    *(_DWORD *)(v16 + 16) = v17;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  v8 = (wil::details *)*((_QWORD *)this + 8);
  if ( v8 )
    wil::details::CloseHandle(v8, v7);
  v9 = (wil::details *)*((_QWORD *)this + 7);
  if ( v9 )
    wil::details::CloseHandle(v9, v7);
  std::_Tree_val<std::_Tree_simple_types<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *>>>(
    (char *)this + 40,
    (char *)this + 40,
    *(_QWORD *)(*((_QWORD *)this + 5) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 5), 0x38uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}
