/*
 * XREFs of ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z @ 0x1800552C8
 * Callers:
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18004C7B0 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ @ 0x18009A134 (-EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ.c)
 *     ?ValidateVisual@CAcrylicSheet@@EEAAJXZ @ 0x18009BA00 (-ValidateVisual@CAcrylicSheet@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000EC34 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800554E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TUC@@@details@wil@@QEAAX_NW4ReportingKind.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x180055574 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z.c)
 *     ?GetLuminosityOpacity@TaskbarAcrylic@@YANK@Z @ 0x180055824 (-GetLuminosityOpacity@TaskbarAcrylic@@YANK@Z.c)
 *     ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180055888 (-ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
        CAccentAcrylicBlurBehind *this,
        const struct ACCENT_POLICY *a2,
        char a3,
        const double *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // esi
  int v15; // r14d
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v19; // [rsp+20h] [rbp-20h]
  unsigned int v20; // [rsp+20h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  double LuminosityOpacity; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v21 = 0LL;
  v8 = CAccentAcrylicBlurBehind::ValidateGraphicsDevice(this);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x6D4u);
    goto LABEL_17;
  }
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TUC>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TUC>::GetImpl'::`2'::impl,
    v9,
    0LL);
  v11 = *((_DWORD *)a2 + 2);
  if ( (*((_BYTE *)a2 + 4) & 2) != 0 )
  {
    LuminosityOpacity = TaskbarAcrylic::GetLuminosityOpacity((TaskbarAcrylic *)v11, v11);
    v13 = CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(this, v12, &LuminosityOpacity);
    v10 = v13;
    if ( v13 >= 0 )
      goto LABEL_4;
    v20 = 1755;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, v20);
    goto LABEL_17;
  }
  v13 = CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(this, v11, a4);
  v10 = v13;
  if ( v13 < 0 )
  {
    v20 = 1759;
    goto LABEL_20;
  }
LABEL_4:
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 43) + 56LL))(
          *((_QWORD *)this + 43),
          *((_QWORD *)this + 41));
  v10 = v13;
  if ( v13 < 0 )
  {
    v20 = 1768;
    goto LABEL_20;
  }
  v14 = 0;
  if ( *((_DWORD *)this + 90) - *((_DWORD *)this + 88) >= 0 )
    v14 = *((_DWORD *)this + 90) - *((_DWORD *)this + 88);
  v15 = 0;
  if ( *((_DWORD *)this + 91) - *((_DWORD *)this + 89) >= 0 )
    v15 = *((_DWORD *)this + 91) - *((_DWORD *)this + 89);
  v13 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 43,
          &v21);
  v10 = v13;
  if ( v13 < 0 )
  {
    v20 = 1774;
    goto LABEL_20;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 288LL))(
          v21,
          _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v14), (__m128)COERCE_UNSIGNED_INT((float)v15)).m128_u64[0]);
  v10 = v13;
  if ( v13 < 0 )
  {
    v20 = 1775;
    goto LABEL_20;
  }
  v16 = *((_QWORD *)this + 36);
  *(_QWORD *)&LuminosityOpacity = __PAIR64__(v15, v14);
  v13 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v16 + 96LL))(v16, &LuminosityOpacity);
  v10 = v13;
  if ( v13 < 0 )
  {
    v20 = 1777;
    goto LABEL_20;
  }
  *(_QWORD *)&LuminosityOpacity = __PAIR64__(v15, v14);
  v13 = (*(__int64 (__fastcall **)(CAccentAcrylicBlurBehind *, double *))(*(_QWORD *)this + 96LL))(
          this,
          &LuminosityOpacity);
  v10 = v13;
  if ( v13 < 0 )
  {
    v20 = 1778;
    goto LABEL_20;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 24LL))(*((_QWORD *)this + 37));
  v10 = v13;
  if ( v13 < 0 )
  {
    v20 = 1780;
    goto LABEL_20;
  }
  if ( a3 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 32LL))(*((_QWORD *)this + 37));
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6FD,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v17,
        v19);
  }
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  return v10;
}
