/*
 * XREFs of ?CreateOpacityAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@_N@Z @ 0x180556B6C
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1802106D0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180556B14 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?SetReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionObject@Composition@UI@Windows@3@@Z @ 0x18055AAD8 (-SetReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNatur.c)
 *     ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x18055B680 (-StartAnimation@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CAppThumbnailWindow::CreateOpacityAnimation(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *v5; // r15
  const unsigned __int16 *v6; // rdx
  __int64 v7; // r8
  void (__fastcall ****v8)(_QWORD, void *, __int64 *); // r14
  void (__fastcall ***v9)(_QWORD, void *, __int64 *); // rcx
  __int64 v10; // rbx
  void (__fastcall ***v11)(_QWORD, void *, _QWORD *); // rbx
  __int64 v12; // rdi
  void (__fastcall ***v13)(_QWORD, void *, __int64 *); // rcx
  __int64 v14; // rdi
  __int64 v16; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v17[4]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+40h] BYREF
  _QWORD *v20; // [rsp+B8h] [rbp+48h]
  void (__fastcall ***v21)(_QWORD, void *, __int64 *); // [rsp+C8h] [rbp+58h] BYREF

  v20 = a2;
  v5 = (__int64 *)(a1 + 384);
  v6 = L"m_compPropertySet.isDraggingRight ? 0.0f : 1.0f";
  if ( !a3 )
    v6 = L"m_compPropertySet.isDraggingRight ? 1.0f : 0.0f";
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v17, v6, v7);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    v5,
    &v21,
    v17);
  v8 = (void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  v9 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  if ( v9 )
  {
    v16 = 0LL;
    (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v16);
    v10 = v16;
    v19 = v16;
  }
  else
  {
    v19 = 0LL;
    v10 = 0LL;
  }
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v18, L"m_compPropertySet", 17);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    &v21,
    v18,
    &v19);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  v11 = v21;
  if ( v21 )
  {
    v16 = 0LL;
    (**v21)(v21, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v16);
    v12 = v16;
    v19 = v16;
  }
  else
  {
    v19 = 0LL;
    v12 = 0LL;
  }
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v18, L"opacityState", 12);
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
    v8,
    v18,
    &v19);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v18, L"m_compPropertySet.opacityState", 30);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    v5,
    a2,
    v18);
  v13 = *v8;
  if ( *v8 )
  {
    v16 = 0LL;
    (**v13)(v13, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v16);
    v14 = v16;
    v19 = v16;
  }
  else
  {
    v19 = 0LL;
    v14 = 0LL;
  }
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v18, L"m_compPropertySet", 17);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    a2,
    v18,
    &v19);
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
  return a2;
}
