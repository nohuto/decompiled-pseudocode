/*
 * XREFs of ??1CScreenRotation@@MEAA@XZ @ 0x1800D6C90
 * Callers:
 *     ??_ECScreenRotation@@MEAAPEAXI@Z @ 0x1800D6D60 (--_ECScreenRotation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180017C7C (--1-$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009E730 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D80E4 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 */

void __fastcall CScreenRotation::~CScreenRotation(CScreenRotation *this)
{
  *(_QWORD *)this = &CScreenRotation::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CScreenRotation::`vftable'{for `IAnimationListener'};
  CScreenRotation::Stop(this, 0, 0);
  if ( *((_QWORD *)this + 50) )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)this + 50);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>((__int64 *)this + 49);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
