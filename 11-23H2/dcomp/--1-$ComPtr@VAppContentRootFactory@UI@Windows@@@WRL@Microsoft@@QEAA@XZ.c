/*
 * XREFs of ??1?$ComPtr@VAppContentRootFactory@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180101DBC
 * Callers:
 *     ??$CreateActivationFactory@VCompositionObjectFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180003140 (--$CreateActivationFactory@VCompositionObjectFactory@Composition@UI@Windows@@@Details@WRL@Micros.c)
 *     ??$CreateActivationFactory@VAppContentRootFactory@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016830 (--$CreateActivationFactory@VAppContentRootFactory@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEB.c)
 *     ??$CreateActivationFactory@VCompositionIslandStatics@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016AF0 (--$CreateActivationFactory@VCompositionIslandStatics@Composition@UI@Windows@@@Details@WRL@Micros.c)
 *     ??$CreateActivationFactory@VCompositorControllerFactory@Core@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016CD0 (--$CreateActivationFactory@VCompositorControllerFactory@Core@Composition@UI@Windows@@@Details@WR.c)
 *     ??$CreateActivationFactory@VUIContextFactory@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016D70 (--$CreateActivationFactory@VUIContextFactory@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCrea.c)
 *     ??$CreateActivationFactory@VCompositionIslandEnvironmentStatics@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016F90 (--$CreateActivationFactory@VCompositionIslandEnvironmentStatics@Composition@UI@Windows@@@Details.c)
 * Callees:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionIslandEnvironmentStatics@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1800080D0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UICompositionIslandEnvironmen.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::AppContentRootFactory>::~ComPtr<Windows::UI::AppContentRootFactory>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionIslandEnvironmentStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
             result,
             a2);
  }
  return result;
}
