/*
 * XREFs of ?PlayThreeFingerDownKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x180559A70
 * Callers:
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x18055992C (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18054FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180556B14 (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 *     ?CreatePropertySet@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180556DE8 (-CreatePropertySet@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Wind.c)
 *     ?CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MAEBUhstring@6@@Z @ 0x18055726C (-CreateThreeFingerScaleAnimation@CAppThumbnailWindow@@IEAA-AUScalarKeyFrameAnimation@Composition.c)
 *     ?HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ @ 0x180558C98 (-HasSwitchAnimationVisuals@CAppThumbnailWindow@@QEAA_NXZ.c)
 *     ?InsertScalar@?$consume_Windows_UI_Composition_ICompositionPropertySet@UICompositionPropertySet@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@M@Z @ 0x18055954C (-InsertScalar@-$consume_Windows_UI_Composition_ICompositionPropertySet@UICompositionPropertySet@.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x18055A85C (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 *     ?StartAnimation@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionAnimation@Composition@UI@Windows@3@@Z @ 0x18055B680 (-StartAnimation@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppThumbnailWindow::PlayThreeFingerDownKeyframeAnimation(CAppThumbnailWindow *this)
{
  __int64 v2; // r8
  winrt::Windows::Foundation::IUnknown *v3; // rax
  char *v4; // rsi
  __int64 v5; // rdi
  winrt::Windows::Foundation::IUnknown *v6; // rax
  char *v7; // rdi
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // rcx
  __int64 v9; // rsi
  void (__fastcall ***v10)(_QWORD, void *, __int64 *); // rcx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  const char *v14; // r9
  void (__fastcall ***v15)(_QWORD, void *, __int64 *); // rcx
  __int64 v16; // rsi
  void (__fastcall ***v17)(_QWORD, void *, __int64 *); // rcx
  __int64 v18; // rsi
  char *v19; // rsi
  void (__fastcall ***v20)(_QWORD, void *, __int64 *); // rcx
  __int64 v21; // rbx
  __int64 result; // rax
  volatile signed __int32 *v23; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v24[10]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v26; // [rsp+88h] [rbp+10h] BYREF
  void (__fastcall ***v27)(_QWORD, void *, __int64 *); // [rsp+90h] [rbp+18h] BYREF
  __int64 v28; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    winrt::hstring::hstring((winrt::hstring *)&v23, L"Scale");
    CAppThumbnailWindow::CreateThreeFingerScaleAnimation((__int64)this, &v27, v2);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
    v3 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreatePropertySet(
                                                   (__int64 *)this + 48,
                                                   &v26);
    v4 = (char *)this + 400;
    winrt::Windows::Foundation::IUnknown::operator=((CAppThumbnailWindow *)((char *)this + 400), v3);
    if ( v26 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v24, L"ThumbnailScale", 14);
    winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::InsertScalar(
      (_QWORD *)this + 50,
      v24);
    if ( v27 )
    {
      v28 = 0LL;
      (**v27)(v27, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v28);
      v5 = v28;
      v26 = v28;
    }
    else
    {
      v26 = 0LL;
      v5 = 0LL;
    }
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v24, L"ThumbnailScale", 14);
    winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
      (char *)this + 400,
      v24,
      &v26);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
    winrt::param::hstring::create_string_reference(
      (winrt::param::hstring *)v24,
      L"Matrix4x4.CreateFromScale(Vector3(m_dragScalePropertySet.ThumbnailScale, m_dragScalePropertySet.ThumbnailScale, 0.0f))",
      118);
    v6 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
                                                   (__int64 *)this + 48,
                                                   &v26,
                                                   v24);
    v7 = (char *)this + 536;
    winrt::Windows::Foundation::IUnknown::operator=((CAppThumbnailWindow *)((char *)this + 536), v6);
    if ( v26 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
    v8 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v4;
    if ( *(_QWORD *)v4 )
    {
      v28 = 0LL;
      (**v8)(v8, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IAnimationObject>, &v28);
      v9 = v28;
      v26 = v28;
    }
    else
    {
      v26 = 0LL;
      v9 = 0LL;
    }
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v24, L"m_dragScalePropertySet", 22);
    winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
      (char *)this + 536,
      v24,
      &v26);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
    v10 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v7;
    if ( *(_QWORD *)v7 )
    {
      v28 = 0LL;
      (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v28);
      v11 = v28;
      v26 = v28;
    }
    else
    {
      v26 = 0LL;
      v11 = 0LL;
    }
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v24, L"TransformMatrix", 15);
    winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
      (char *)this + 408,
      v24,
      &v26);
    if ( v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
      1u,
      v12,
      v13);
    if ( CAppThumbnailWindow::HasSwitchAnimationVisuals(this) )
    {
      v15 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v7;
      if ( *(_QWORD *)v7 )
      {
        v28 = 0LL;
        (**v15)(v15, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v28);
        v16 = v28;
        v26 = v28;
      }
      else
      {
        v26 = 0LL;
        v16 = 0LL;
      }
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v24, L"TransformMatrix", 15);
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 424,
        v24,
        &v26);
      if ( v16 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
      v17 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v7;
      if ( *(_QWORD *)v7 )
      {
        v28 = 0LL;
        (**v17)(v17, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v28);
        v18 = v28;
        v26 = v28;
      }
      else
      {
        v26 = 0LL;
        v18 = 0LL;
      }
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v24, L"TransformMatrix", 15);
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        (char *)this + 440,
        v24,
        &v26);
      if ( v18 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
      v19 = (char *)this + 456;
      v20 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))v7;
      if ( *(_QWORD *)v7 )
      {
        v28 = 0LL;
        (**v20)(v20, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v28);
        v21 = v28;
        v26 = v28;
      }
      else
      {
        v26 = 0LL;
        v21 = 0LL;
      }
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v24, L"TransformMatrix", 15);
      winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::StartAnimation(
        v19,
        v24,
        &v26);
      if ( v21 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
    }
    if ( v27 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v26) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x2D6,
                     (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
                     v14);
    return (unsigned int)v26;
  }
  return result;
}
