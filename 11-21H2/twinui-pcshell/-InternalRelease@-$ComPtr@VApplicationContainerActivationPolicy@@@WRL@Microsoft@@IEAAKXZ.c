/*
 * XREFs of ?InternalRelease@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x180572FD0
 * Callers:
 *     ??$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationContainerActivationPolicy@@$$QEAPEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Z @ 0x18056FC34 (--$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivati.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@wil@@YA?AV?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@$$QEAPEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Z @ 0x18056FDB0 (--$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActi.c)
 *     ??1?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAA@XZ @ 0x1805714E4 (--1-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4ActivationKind@Activation@ApplicationModel@Windows@@EURect@Foundation@7@H@Z @ 0x180571950 (-ActivateApplicationInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@1W4A.c)
 *     ?ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EURect@Foundation@Windows@@HPEA_J@Z @ 0x180572460 (-ActivateRemotePathInContainer@ApplicationContainerActivation@@UEAAJU_GUID@@PEAUHSTRING__@@11EUR.c)
 *     ??$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivationComponent@@AEA_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationContainerActivationPolicy@@$$QEAPEAUIApplicationContainerActivationComponent@@AEA_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180575B94 (--$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationCont_ea_180575B94.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActivationComponent@@AEA_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@$$QEAPEAUIApplicationContainerActivationComponent@@AEA_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180575C4C (--$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplication_ea_180575C4C.c)
 *     ?Launch@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG1_N2@Z @ 0x180575FE8 (-Launch@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG1_N2@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@UIServiceProvider@@UICreatingProcess@@UICreatedProcess@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180573FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_180573FF0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,IServiceProvider,ICreatingProcess,ICreatedProcess,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
