/*
 * XREFs of ?InitializeCustomPropertiesForSwitch@CAppThumbnailWindow@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@@Z @ 0x18055914C
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1802106D0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?Position@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18054F630 (-Position@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Inp.c)
 *     ?InsertBoolean@?$consume_Windows_UI_Composition_ICompositionPropertySet2@UCompositionPropertySet@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@_N@Z @ 0x1805593A8 (-InsertBoolean@-$consume_Windows_UI_Composition_ICompositionPropertySet2@UCompositionPropertySet.c)
 *     ?InsertScalar@?$consume_Windows_UI_Composition_ICompositionPropertySet@UICompositionPropertySet@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@M@Z @ 0x18055954C (-InsertScalar@-$consume_Windows_UI_Composition_ICompositionPropertySet@UICompositionPropertySet@.c)
 */

void __fastcall CAppThumbnailWindow::InitializeCustomPropertiesForSwitch(
        CAppThumbnailWindow *this,
        const struct winrt::Windows::UI::Internal::Input::InputGestureOperation *a2)
{
  char v2; // bl
  CAppThumbnailWindow *v4; // rdi
  __int64 v5; // r8
  _BYTE v6[32]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+70h] [rbp+10h] BYREF

  v2 = *((_BYTE *)this + 170);
  v4 = this;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v6, L"isDraggingRight", 15);
  v4 = (CAppThumbnailWindow *)((char *)v4 + 392);
  LOBYTE(v5) = v2;
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet2<winrt::Windows::UI::Composition::CompositionPropertySet>::InsertBoolean(
    v4,
    v6,
    v5);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v6, L"opacityState", 12);
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::InsertScalar(
    v4,
    v6);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v6, L"scaleFactorSecondApp", 20);
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::InsertScalar(
    v4,
    v6);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v6, L"scaleFactorFirstApp", 19);
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::InsertScalar(
    v4,
    v6);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v6, L"flickScaleFactorSecondApp", 25);
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::InsertScalar(
    v4,
    v6);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v6, L"flickScaleFactorFirstApp", 24);
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::InsertScalar(
    v4,
    v6);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v6, L"flickScaleFactorRemainingApps", 29);
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::InsertScalar(
    v4,
    v6);
  winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::Position(
    a2,
    &v7);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v6, L"touchPosAtDirectionChange", 25);
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::InsertScalar(
    v4,
    v6);
  winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::Position(
    a2,
    &v7);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v6, L"touchPosAtDirectionChangeThreshold", 34);
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::InsertScalar(
    v4,
    v6);
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v6,
    L"scaleFactorAtDirectionChangeThresholdSecondApp",
    46);
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::InsertScalar(
    v4,
    v6);
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v6,
    L"scaleFactorAtDirectionChangeThresholdFirstApp",
    45);
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::InsertScalar(
    v4,
    v6);
}
