/*
 * XREFs of ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18000FD6C
 * Callers:
 *     ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x18000FD10 (--_GCTopLevelWindow3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FDF0 (--1-$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@.c)
 *     ?_Tidy@?$_Func_class@J$$V@std@@IEAAXXZ @ 0x180010A40 (-_Tidy@-$_Func_class@J$$V@std@@IEAAXXZ.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180027768 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash@@@details@wil@@QEAA_NXZ @ 0x180063230 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3.c)
 */

void __fastcall CTopLevelWindow3D::~CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CTopLevelWindow3D::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CTopLevelWindow3D::ReleaseSceneObjects(this);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::GetImpl'::`2'::impl)
    || *((_QWORD *)this + 42) )
  {
    CTopLevelWindow3D::StopAnimation(this);
  }
  std::_Func_class<long,>::_Tidy((char *)this + 552);
  v2 = (CBaseObject *)*((_QWORD *)this + 68);
  if ( v2 )
    CBaseObject::Release(v2);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>((char *)this + 376);
  CRenderDataVisual::~CRenderDataVisual(this);
}
