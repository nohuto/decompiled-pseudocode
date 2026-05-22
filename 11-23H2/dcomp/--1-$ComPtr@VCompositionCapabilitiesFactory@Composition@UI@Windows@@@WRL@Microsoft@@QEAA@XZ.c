/*
 * XREFs of ??1?$ComPtr@VCompositionCapabilitiesFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180101DE0
 * Callers:
 *     ??$CreateActivationFactory@VCompositionCapabilitiesFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016EF0 (--$CreateActivationFactory@VCompositionCapabilitiesFactory@Composition@UI@Windows@@@Details@WRL@.c)
 * Callees:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18007F390 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@U-$RuntimeClass.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionCapabilitiesFactory>::~ComPtr<Windows::UI::Composition::CompositionCapabilitiesFactory>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Windows::UI::Composition::ICompositionCapabilitiesStatics,Microsoft::WRL::CloakedIid<Windows::UI::Composition::Desktop::ICompositionCapabilitiesInteropFactory>>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
             result,
             a2);
  }
  return result;
}
