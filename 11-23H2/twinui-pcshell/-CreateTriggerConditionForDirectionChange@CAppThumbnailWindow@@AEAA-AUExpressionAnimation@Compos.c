/*
 * XREFs of ?CreateTriggerConditionForDirectionChange@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@XZ @ 0x180557C8C
 * Callers:
 *     ?DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x1805587E0 (-DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationT.c)
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x18055B380 (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180556B14 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x18055A85C (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CAppThumbnailWindow::CreateTriggerConditionForDirectionChange(__int64 a1, _QWORD *a2)
{
  const unsigned __int16 *v4; // rdx
  __int64 v5; // r8
  _QWORD v7[4]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-30h] BYREF

  v4 = L"operation.Velocity.X < 0";
  if ( !*(_BYTE *)(a1 + 170) )
    v4 = L"operation.Velocity.X > 0";
  v5 = -1LL;
  do
    ++v5;
  while ( v4[v5] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v7, v4, v5);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    (__int64 *)(a1 + 384),
    a2,
    v7);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v8, L"operation", 9);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
    a2,
    v8,
    a1 + 464);
  return a2;
}
