/*
 * XREFs of ?QueryInterface@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012F30
 * Callers:
 *     ?QueryInterface@CompositorControllerFactory@Core@Composition@UI@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AB070 (-QueryInterface@CompositorControllerFactory@Core@Composition@UI@Windows@@W7EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@CompositorControllerFactory@Core@Composition@UI@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AB090 (-QueryInterface@CompositorControllerFactory@Core@Composition@UI@Windows@@WCI@EAAJAEBU_GUID@@PEAP.c)
 *     ?QueryInterface@CompositorControllerFactory@Core@Composition@UI@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AB0B0 (-QueryInterface@CompositorControllerFactory@Core@Composition@UI@Windows@@WDI@EAAJAEBU_GUID@@PEAP.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@23@UICompositorControllerStaticsPrivate@Private@Core@Composition@UI@Windows@@VNil@Details@23@VNil@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180017028 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180017028.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Core::CompositorControllerFactory::QueryInterface(
        Windows::UI::Composition::Core::CompositorControllerFactory *this,
        const struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int CanCastTo; // ebx
  _QWORD *v8; // r8

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Windows::UI::Composition::Core::Private::ICompositorControllerStaticsPrivate,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                  v5,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return (unsigned int)CanCastTo;
}
