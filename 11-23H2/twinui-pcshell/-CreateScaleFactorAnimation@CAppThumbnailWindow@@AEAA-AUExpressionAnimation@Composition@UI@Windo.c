/*
 * XREFs of ?CreateScaleFactorAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@HAEBUhstring@6@@Z @ 0x180556FB4
 * Callers:
 *     ?SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x18055AC40 (-SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180556B14 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x18055A85C (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 *     ?SetReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionObject@Composition@UI@Windows@3@@Z @ 0x18055AAD8 (-SetReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNatur.c)
 *     ?SetScalarParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@M@Z @ 0x18055AB8C (-SetScalarParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@UExpressionAnimation@.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CAppThumbnailWindow::CreateScaleFactorAnimation(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rcx
  __int64 v7; // rbx
  _QWORD v9[5]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v11; // [rsp+78h] [rbp+28h]
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v11 = a2;
  v9[0] = *a4;
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    (__int64 *)(a1 + 384),
    a2,
    v9);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"operation", 9);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
    a2,
    v9,
    a1 + 464);
  v6 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  if ( v6 )
  {
    v12 = 0LL;
    (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v12);
    v7 = v12;
    v10 = v12;
  }
  else
  {
    v10 = 0LL;
    v7 = 0LL;
  }
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"m_compPropertySet", 17);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    a2,
    v9,
    &v10);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"polarity", 8);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::ExpressionAnimation>::SetScalarParameter(
    a2,
    v9);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"growthRate", 10);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::ExpressionAnimation>::SetScalarParameter(
    a2,
    v9);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"maxScale", 8);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::ExpressionAnimation>::SetScalarParameter(
    a2,
    v9);
  return a2;
}
