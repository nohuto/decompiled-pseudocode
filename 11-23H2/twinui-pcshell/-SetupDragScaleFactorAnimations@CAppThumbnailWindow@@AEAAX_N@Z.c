/*
 * XREFs of ?SetupDragScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x18055AC40
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1802106D0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180060E5C (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x180466940 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ?CreateScaleFactorAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@HAEBUhstring@6@@Z @ 0x180556FB4 (-CreateScaleFactorAnimation@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Composition@UI@Windo.c)
 *     ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x18055B680 (-StartAnimation@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CAppThumbnailWindow::SetupDragScaleFactorAnimations(CAppThumbnailWindow *this, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 *v4; // rax
  struct winrt::impl::shared_hstring_header **v5; // rax
  unsigned int v6; // ebx
  __int64 *v7; // rax
  struct winrt::impl::shared_hstring_header **v8; // rax
  struct winrt::impl::shared_hstring_header *v9; // rbx
  struct winrt::impl::shared_hstring_header *v10; // rbx
  volatile signed __int32 *v11; // [rsp+20h] [rbp-40h] BYREF
  struct winrt::impl::shared_hstring_header *v12; // [rsp+28h] [rbp-38h] BYREF
  struct winrt::impl::shared_hstring_header *v13; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int32 *v14; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-20h] BYREF
  struct winrt::impl::shared_hstring_header *v16; // [rsp+80h] [rbp+20h] BYREF
  void (__fastcall ***v17)(_QWORD, void *, struct winrt::impl::shared_hstring_header **); // [rsp+90h] [rbp+30h] BYREF
  void (__fastcall ***v18)(_QWORD, void *, struct winrt::impl::shared_hstring_header **); // [rsp+98h] [rbp+38h] BYREF

  v2 = a2;
  winrt::hstring::hstring(
    (winrt::hstring *)&v11,
    L"(polarity * ((operation.Position.X - m_compPropertySet.touchPosAtDirectionChangeThreshold) * growthRate))");
  v4 = (__int64 *)winrt::operator+(
                    (__int64)&v12,
                    (__int64)L"Clamp(m_compPropertySet.scaleFactorAtDirectionChangeThresholdSecondApp + ",
                    (__int64)&v11);
  v5 = winrt::operator+(&v16, v4, (__int64)L", 1.0f, maxScale)");
  v6 = 2 * v2 - 1;
  CAppThumbnailWindow::CreateScaleFactorAnimation((__int64)this, &v18, v6, v5);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v16);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v12);
  v7 = (__int64 *)winrt::operator+(
                    (__int64)&v14,
                    (__int64)L"Clamp(m_compPropertySet.scaleFactorAtDirectionChangeThresholdFirstApp - ",
                    (__int64)&v11);
  v8 = winrt::operator+(&v13, v7, (__int64)L", 1.0f, maxScale)");
  CAppThumbnailWindow::CreateScaleFactorAnimation((__int64)this, &v17, v6, v8);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
  if ( v18 )
  {
    v12 = 0LL;
    (**v18)(v18, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v12);
    v9 = v12;
    v16 = v12;
  }
  else
  {
    v16 = 0LL;
    v9 = 0LL;
  }
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v15, L"scaleFactorSecondApp", 20);
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
    (char *)this + 392,
    v15,
    &v16);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  if ( v17 )
  {
    v12 = 0LL;
    (**v17)(v17, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v12);
    v10 = v12;
    v16 = v12;
  }
  else
  {
    v16 = 0LL;
    v10 = 0LL;
  }
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v15, L"scaleFactorFirstApp", 19);
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
    (char *)this + 392,
    v15,
    &v16);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  if ( v17 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
}
