/*
 * XREFs of ??1?$ComPtr@VCompositorFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180105A84
 * Callers:
 *     ??$CreateActivationFactory@VCompositorFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180017390 (--$CreateActivationFactory@VCompositorFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YA.c)
 * Callees:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18007F470 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPar.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositorFactory>::~ComPtr<Windows::UI::Composition::CompositorFactory>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IInteropCompositorFactoryPartner>,Windows::UI::Composition::ICompositorStatics,Windows::UI::Composition::IInteropCompositorFactoryRestricted,0>::Release(
             result,
             a2);
  }
  return result;
}
