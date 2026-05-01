/*
 * XREFs of ?Attach@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAAXPEAVApplicationContainerActivationPolicy@@@Z @ 0x1806305B8
 * Callers:
 *     ??$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationContainerActivationPolicy@@$$QEAPEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Z @ 0x18062DD04 (--$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivati.c)
 *     ??$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivationComponent@@AEA_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationContainerActivationPolicy@@$$QEAPEAUIApplicationContainerActivationComponent@@AEA_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180633940 (--$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationCont_ea_180633940.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@UIServiceProvider@@UICreatingProcess@@UICreatedProcess@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180631F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_180631F50.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,IServiceProvider,ICreatingProcess,ICreatedProcess,Microsoft::WRL::FtmBase>::Release(v4);
  *a1 = a2;
  return result;
}
