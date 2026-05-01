/*
 * XREFs of ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x1805555C8
 * Callers:
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019A7C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_5609f70bbd1d7f57313a33137ea4cdfa___ @ 0x180554390 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspecta_ea_180554390.c)
 *     ?Completed@?$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UCompositionBatchCompletedEventArgs@Composition@UI@34@@Foundation@Windows@3@@Z @ 0x18055584C (-Completed@-$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Com.c)
 *     ?CreateScopedBatch@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4CompositionBatchTypes@Composition@UI@Windows@3@@Z @ 0x18055715C (-CreateScopedBatch@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Wind.c)
 *     ?End@?$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180558B44 (-End@-$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Compositi.c)
 *     ?PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ @ 0x180559FEC (-PlayThreeFingerUpKeyframeAnimation@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompThumbnailAnimation@@_N@Z @ 0x18055A948 (-SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompTh.c)
 *     ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x18055CE5C (-Uninitialize@CAppThumbnailWindow@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppThumbnailWindow::Close(
        CAppThumbnailWindow *this,
        const enum CAppThumbnailWindow::AnimationType *a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // r15
  bool v6; // r12
  unsigned int v7; // r14d
  _BYTE *v8; // rdi
  __m128i v9; // xmm2
  __int64 v10; // rcx
  unsigned __int64 v11; // xmm1_8
  std::_Ref_count_base *v12; // rdi
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  bool v17; // [rsp+20h] [rbp-39h]
  __int64 v18; // [rsp+30h] [rbp-29h] BYREF
  __int64 v19; // [rsp+38h] [rbp-21h] BYREF
  __m128i v20; // [rsp+40h] [rbp-19h] BYREF
  __m128i v21; // [rsp+50h] [rbp-9h] BYREF
  CAppThumbnailWindow *v22; // [rsp+60h] [rbp+7h]
  char v23; // [rsp+68h] [rbp+Fh]
  _BYTE v24[8]; // [rsp+70h] [rbp+17h] BYREF
  _DWORD v25[4]; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v22 = this;
  v5 = 1;
  v23 = 1;
  v25[0] = 0;
  v25[1] = 0;
  v25[2] = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  v25[3] = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  v6 = *(_DWORD *)a2 == 3;
  v7 = (*(_DWORD *)a2 != 1) + 29;
  if ( !*(_DWORD *)a2 || (v8 = (char *)this + 169, *((_BYTE *)this + 168)) && !*v8 )
  {
    CAppThumbnailWindow::Uninitialize(this);
LABEL_24:
    v5 = 0;
    v14 = 0;
    goto LABEL_25;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  if ( !*v8 || *((_BYTE *)this + 184) )
  {
LABEL_21:
    v17 = v6;
    v15 = CAppThumbnailWindow::SetRectAndCallback(this, v25, *((_QWORD *)this + 8), v7, v17);
    v14 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v7 = 0;
  LODWORD(v19) = 1;
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScopedBatch(
    (char *)this + 384,
    &v18,
    &v19);
  v9 = 0LL;
  v21 = 0LL;
  v10 = *((_QWORD *)this + 1);
  if ( v10 )
  {
    v21.m128i_i64[0] = *(_QWORD *)this;
    v21.m128i_i64[1] = v10;
    _InterlockedAdd((volatile signed __int32 *)(v10 + 12), 1u);
    v5 = v23;
    v9 = _mm_load_si128(&v21);
  }
  v20 = 0LL;
  v11 = _mm_srli_si128(v9, 8).m128i_u64[0];
  v12 = (std::_Ref_count_base *)v11;
  if ( v11 )
  {
    v20 = v9;
    _InterlockedAdd((volatile signed __int32 *)(v11 + 12), 1u);
    v5 = v23;
    v12 = (std::_Ref_count_base *)v21.m128i_i64[1];
  }
  winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_5609f70bbd1d7f57313a33137ea4cdfa___(
    &v19,
    &v20);
  winrt::impl::consume_Windows_UI_Composition_ICompositionScopedBatch<winrt::Windows::UI::Composition::ICompositionScopedBatch>::Completed(
    &v18,
    v24,
    &v19);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  v13 = CAppThumbnailWindow::PlayThreeFingerUpKeyframeAnimation(this);
  v14 = v13;
  if ( v13 >= 0 )
  {
    winrt::impl::consume_Windows_UI_Composition_ICompositionScopedBatch<winrt::Windows::UI::Composition::ICompositionScopedBatch>::End(&v18);
    if ( v12 )
      std::_Ref_count_base::_Decwref(v12);
    if ( v18 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x87,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
    (const char *)(unsigned int)v13);
  if ( v12 )
    std::_Ref_count_base::_Decwref(v12);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
LABEL_25:
  if ( v5 )
    CAppThumbnailWindow::Uninitialize(this);
  return v14;
}
