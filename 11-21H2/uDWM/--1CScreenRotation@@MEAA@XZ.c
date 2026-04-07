/*
 * XREFs of ??1CScreenRotation@@MEAA@XZ @ 0x1800D2060
 * Callers:
 *     ??_ECScreenRotation@@MEAAPEAXI@Z @ 0x1800D2140 (--_ECScreenRotation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??1?$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FDF0 (--1-$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D3484 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 */

void __fastcall CScreenRotation::~CScreenRotation(CScreenRotation *this)
{
  *(_QWORD *)this = &CScreenRotation::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CScreenRotation::`vftable'{for `IAnimationListener'};
  CScreenRotation::Stop(this, 0, 0);
  if ( *((_QWORD *)this + 50) )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)this + 50);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>((__int64 *)this + 49);
  CRenderDataVisual::~CRenderDataVisual(this);
}
