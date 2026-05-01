/*
 * XREFs of ??1?$ComPtr@VPeoplePaneViewManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1803D514C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_PeoplePaneViewManager_IUnknown__::_1_::dtor$2 @ 0x180222DA3 (_Microsoft--WRL--Details--MakeAndInitialize_PeoplePaneViewManager_IUnknown__--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPeoplePaneViewManager@@UIPeopleExperienceHostManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141800 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180141800.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PeoplePaneViewManager>::~ComPtr<PeoplePaneViewManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPeoplePaneViewManager,IPeopleExperienceHostManager,IApplicationViewChangeListener,ITabletModeChangeListener>::Release(result);
  }
  return result;
}
