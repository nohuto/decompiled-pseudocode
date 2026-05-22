/*
 * XREFs of ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x180174070
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180081C60 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801242C8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_________lambda_9df4cfb49f9aeda31819750223cddec6___ @ 0x180171044 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_.c)
 *     ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180173114 (-ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@.c)
 */

__int64 __fastcall ControllerNavigationOverrideProxy::OnDisconnected(ControllerNavigationOverrideProxy *this)
{
  ControllerNavigationOverrideProxy **ControllerNavigationManager; // rax
  ControllerNavigationOverrideProxy **v3; // rdi
  const char *v4; // r9
  __int64 *v5; // rdx
  __int64 *v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v9; // [rsp+30h] [rbp+8h] BYREF

  ControllerNavigationManager = (ControllerNavigationOverrideProxy **)ISMStatics::GetControllerNavigationManager();
  v3 = ControllerNavigationManager;
  if ( ControllerNavigationManager[24] == this )
    ControllerNavigationManager::ResumeNavigation((ControllerNavigationManager *)ControllerNavigationManager, 0LL);
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_________lambda_9df4cfb49f9aeda31819750223cddec6___(
    &v9,
    (__int64 *)v3[25],
    (__int64 *)v3[26],
    this);
  v5 = (__int64 *)v3[26];
  v6 = v9;
  if ( v9 == v5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      423LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v4);
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(v9, v5);
  v3[26] = (ControllerNavigationOverrideProxy *)v6;
  return 0LL;
}
