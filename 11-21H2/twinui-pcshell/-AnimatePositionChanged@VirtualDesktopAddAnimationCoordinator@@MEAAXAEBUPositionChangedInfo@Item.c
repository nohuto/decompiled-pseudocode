/*
 * XREFs of ?AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x1804DE490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsHighContrast@@YAHXZ @ 0x1800A6384 (-IsHighContrast@@YAHXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIVirtualDesktopBarElement@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopBarElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804AF648 (--$As@UIVirtualDesktopBarElement@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804B3858 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivitiesInShell@@@details@wil@@QEAAX_NW.c)
 *     ??$As@UIAnimatableScrollViewer@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimatableScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804D2D98 (--$As@UIAnimatableScrollViewer@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@Q.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x1804DE0EC (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall VirtualDesktopAddAnimationCoordinator::AnimatePositionChanged(
        VirtualDesktopAddAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a2)
{
  int v4; // eax
  int v5; // eax
  char *v6; // r14
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  int AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73; // eax
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  __m128i v18; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( *((_DWORD *)a2 + 2) == 8 )
  {
    (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**(_QWORD **)a2 + 512LL))(
      *(_QWORD *)a2,
      (char *)a2 + 12,
      0LL,
      0LL);
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a2 + 512LL))(*(_QWORD *)a2, (char *)a2 + 28, 25LL);
  }
  else if ( *((_DWORD *)a2 + 2) == 3 )
  {
    v13 = 0LL;
    v4 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IAnimatableScrollViewer>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
           &v13);
    if ( v4 >= 0 )
      (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v13 + 112LL))(v13, (char *)a2 + 28, 25LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x42,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
        (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  }
  else if ( *((_DWORD *)a2 + 2) == 7 && *((_QWORD *)this + 12) )
  {
    v14 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IVirtualDesktopBarElement>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2,
           &v14);
    if ( v5 >= 0 )
    {
      v6 = (char *)a2 + 28;
      v18 = *(__m128i *)((char *)a2 + 28);
      v7 = *((_DWORD *)this + 62);
      v18.m128i_i32[3] = v7 + _mm_srli_si128(v18, 8).m128i_i32[1];
      v18.m128i_i32[1] += v7;
      (*(void (__fastcall **)(__int64, _QWORD, __m128i *, _QWORD, _QWORD))(*(_QWORD *)v14 + 32LL))(
        v14,
        0LL,
        &v18,
        0LL,
        0LL);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 56LL))(v14, &v13);
      v15 = 0LL;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActivitiesInShell>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_ActivitiesInShell>::GetImpl'::`2'::impl,
        0,
        v8,
        v9);
      if ( v13 && !(unsigned int)IsHighContrast() )
      {
        v10 = v13;
        v17 = v13;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
        v16 = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73___(
                                                                      &v16,
                                                                      v11,
                                                                      &v15);
        if ( AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73 >= 0 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 32LL))(v13, 0LL);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x72,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
            (const char *)(unsigned int)AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
      }
      (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, __int64))(*(_QWORD *)v14 + 32LL))(
        v14,
        0LL,
        v6,
        23LL,
        v15);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4C,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
        (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
}
