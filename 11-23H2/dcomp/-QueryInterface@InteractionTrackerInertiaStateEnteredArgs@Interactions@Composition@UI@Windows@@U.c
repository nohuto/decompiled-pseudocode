/*
 * XREFs of ?QueryInterface@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013A4C0
 * Callers:
 *     ?QueryInterface@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD20 (-QueryInterface@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@W.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs2@6789@UIInteractionTrackerInertiaStateEnteredArgs3@6789@UIInspectable@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800AFD40.c)
 *     ?QueryInterface@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD60 (-QueryInterface@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@_ea_1800AFD60.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs2@6789@UIInteractionTrackerInertiaStateEnteredArgs3@6789@UIInspectable@@@Details@WRL@Microsoft@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFD80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800AFD80.c)
 *     ?QueryInterface@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFDA0 (-QueryInterface@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@_ea_1800AFDA0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs2@6789@UIInteractionTrackerInertiaStateEnteredArgs3@6789@UIInspectable@@@Details@WRL@Microsoft@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFDC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800AFDC0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@UIInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs2@89UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs3@89UI@Windows@@U4@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013746C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBas.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs::QueryInterface(
        Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *this,
        const struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // r10
  int CanCastTo; // ebx
  _QWORD *v8; // r8

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::FtmBase,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3,IInspectable>::CanCastTo(
                  v5,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return (unsigned int)CanCastTo;
}
