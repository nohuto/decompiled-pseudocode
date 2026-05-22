/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@23@UICompositorControllerStaticsPrivate@Private@Core@Composition@UI@Windows@@VNil@Details@23@VNil@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180017028
 * Callers:
 *     ?QueryInterface@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012F30 (-QueryInterface@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX.c)
 *     ??$CreateActivationFactory@VCompositorControllerFactory@Core@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016CD0 (--$CreateActivationFactory@VCompositorControllerFactory@Core@Composition@UI@Windows@@@Details@WR.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@UICompositorControllerStaticsPrivate@Private@Core@Composition@UI@Windows@@VNil@Details@23@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180107D20 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInspect_ea_180107D20.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10

  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000035_0000_0000_c000_000000000046) )
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
             v3 + 8,
             v4);
  *v2 = v3;
  return 0LL;
}
