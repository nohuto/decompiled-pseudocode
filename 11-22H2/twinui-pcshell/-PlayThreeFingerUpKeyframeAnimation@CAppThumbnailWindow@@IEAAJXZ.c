/*
 * XREFs of ?PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x180559FEC
 * Callers:
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x1805555C8 (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18054FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180556B14 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MAEBUhstring@6@@Z @ 0x18055726C (-CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA-AUScalarKeyFrameAnimation@Composition.c)
 *     ?HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ @ 0x180558C98 (-HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x18055A85C (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 *     ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x18055B680 (-StartAnimation@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppThumbnailWindow::PlayThreeFingerUpKeyframeAnimation(CAppThumbnailWindow *this)
{
  __int64 v2; // r8
  char *v3; // rsi
  __int64 v4; // rbx
  winrt::Windows::Foundation::IUnknown *v5; // rax
  char *v6; // rbx
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rcx
  __int64 v8; // rsi
  void (__fastcall ***v9)(_QWORD, void *, __int64 *); // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v13; // r9
  void (__fastcall ***v14)(_QWORD, void *, __int64 *); // rcx
  __int64 v15; // rsi
  void (__fastcall ***v16)(_QWORD, void *, __int64 *); // rcx
  __int64 v17; // rsi
  void (__fastcall ***v18)(_QWORD, void *, __int64 *); // rcx
  __int64 v19; // rbx
  __int64 result; // rax
  volatile signed __int32 *v21; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v22[10]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  void (__fastcall ***v25)(_QWORD, void *, __int64 *); // [rsp+90h] [rbp+18h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    winrt::hstring::hstring((winrt::hstring *)&v21, L"Scale");
    CAppThumbnailWindow::CreateThreeFingerScaleAnimation((__int64)this, &v25, v2);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
    v3 = (char *)this + 400;
    if ( v25 )
    {
      v26 = 0LL;
      (**v25)(v25, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v26);
      v4 = v26;
      v24 = v26;
    }
    else
    {
      v24 = 0LL;
      v4 = 0LL;
    }
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v22, L"ThumbnailScale", 14);
    winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
      (char *)this + 400,
      v22,
      &v24);
    if ( v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    winrt::param::hstring::create_string_reference(
      (winrt::param::hstring *)v22,
      L"Matrix4x4.CreateFromScale(Vector3(m_dragScalePropertySet.ThumbnailScale, m_dragScalePropertySet.ThumbnailScale, 0.0f))",
      118);
    v5 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
                                                   (__int64 *)this + 48,
                                                   &v24,
                                                   v22);
    v6 = (char *)this + 536;
    winrt::Windows::Foundation::IUnknown::operator=((CAppThumbnailWindow *)((char *)this + 536), v5);
    if ( v24 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    v7 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v3;
    if ( *(_QWORD *)v3 )
    {
      v26 = 0LL;
      (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IAnimationObject>, &v26);
      v8 = v26;
      v24 = v26;
    }
    else
    {
      v24 = 0LL;
      v8 = 0LL;
    }
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v22, L"m_dragScalePropertySet", 22);
    winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
      (char *)this + 536,
      v22,
      &v24);
    if ( v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    v9 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v6;
    if ( *(_QWORD *)v6 )
    {
      v26 = 0LL;
      (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v26);
      v10 = v26;
      v24 = v26;
    }
    else
    {
      v24 = 0LL;
      v10 = 0LL;
    }
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v22, L"TransformMatrix", 15);
    winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
      (char *)this + 408,
      v22,
      &v24);
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
      1u,
      v11,
      v12);
    if ( CAppThumbnailWindow::HasSwitchAnimationVisuals(this) )
    {
      v14 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v6;
      if ( *(_QWORD *)v6 )
      {
        v26 = 0LL;
        (**v14)(v14, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v26);
        v15 = v26;
        v24 = v26;
      }
      else
      {
        v24 = 0LL;
        v15 = 0LL;
      }
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v22, L"TransformMatrix", 15);
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 424,
        v22,
        &v24);
      if ( v15 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
      v16 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v6;
      if ( *(_QWORD *)v6 )
      {
        v26 = 0LL;
        (**v16)(v16, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v26);
        v17 = v26;
        v24 = v26;
      }
      else
      {
        v24 = 0LL;
        v17 = 0LL;
      }
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v22, L"TransformMatrix", 15);
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 440,
        v22,
        &v24);
      if ( v17 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
      v18 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v6;
      if ( *(_QWORD *)v6 )
      {
        v26 = 0LL;
        (**v18)(v18, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v26);
        v19 = v26;
        v24 = v26;
      }
      else
      {
        v24 = 0LL;
        v19 = 0LL;
      }
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v22, L"TransformMatrix", 15);
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 456,
        v22,
        &v24);
      if ( v19 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    }
    if ( v25 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v24) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x2EC,
                     (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                     v13);
    return (unsigned int)v24;
  }
  return result;
}
