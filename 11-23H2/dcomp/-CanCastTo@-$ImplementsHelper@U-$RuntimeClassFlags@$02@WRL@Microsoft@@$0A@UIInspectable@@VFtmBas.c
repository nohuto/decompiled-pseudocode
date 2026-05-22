/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@UIInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs2@89UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs3@89UI@Windows@@U4@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013746C
 * Callers:
 *     ?QueryInterface@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013A4C0 (-QueryInterface@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@U.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BE44 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs2@5678@UIInteractionTrackerInertiaStateEnteredArgs3@5678@UIInspectable@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013729C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIInteractionTrackerIne.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::FtmBase,IWeakReferenceSource,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3,IInspectable>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  void **v3; // r8
  __int64 v4; // r9
  __int64 result; // rax

  if ( InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    goto LABEL_4;
  result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v4 + 8), a2, v3);
  if ( (_DWORD)result != -2147467262 )
    return result;
  if ( !InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3,IInspectable>::CanCastTo(
             v4 + 8,
             a2);
LABEL_4:
  *v3 = (void *)v4;
  return 0LL;
}
