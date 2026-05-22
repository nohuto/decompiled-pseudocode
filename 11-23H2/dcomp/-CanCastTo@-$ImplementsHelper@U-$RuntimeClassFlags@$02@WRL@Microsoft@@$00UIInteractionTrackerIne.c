/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs2@5678@UIInteractionTrackerInertiaStateEnteredArgs3@5678@UIInspectable@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013729C
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@UIInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs2@89UI@Windows@@UIInteractionTrackerInertiaStateEnteredArgs3@89UI@Windows@@U4@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013746C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBas.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIInspectable@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180137264 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIInspectable@@@Details.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2,Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3,IInspectable>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  const struct _GUID *v10; // r10

  if ( InlineIsEqualGUID(a2, &GUID_87108cf2_e7ff_4f7d_9ffd_d72f1e409b63) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_b1eb32f6_c26c_41f6_a189_fabc22b323cc)
      || InlineIsEqualGUID(v6, &GUID_48ac1c2f_47bd_59af_a58c_79bd2eb9ef71) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>::CanCastTo(
                             v9 + 8,
                             v10);
    }
    return v8;
  }
}
