/*
 * XREFs of ?NotifyNodeTransformChanged@Camera@Engine@Spectre@@QEAAXXZ @ 0x18005BE28
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 *     ?Update@Camera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18005D880 (-Update@Camera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006B21C (-UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engin.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ @ 0x18003C848 (-GetWorldTransformUpdateID@SceneNode@Engine@Spectre@@QEBA_KXZ.c)
 *     ?SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z @ 0x18005D24C (-SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Camera::NotifyNodeTransformChanged(Spectre::Engine::Camera *this)
{
  unsigned __int64 WorldTransformUpdateID; // rdi
  Spectre::Engine::SceneNode *v3; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v4; // [rsp+28h] [rbp-10h]

  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 56, &v3);
  WorldTransformUpdateID = Spectre::Engine::SceneNode::GetWorldTransformUpdateID(v3);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  if ( WorldTransformUpdateID != *((_QWORD *)this + 12) )
  {
    Spectre::Engine::Camera::SetMatrixStagesChanged(this, 1u);
    *((_QWORD *)this + 12) = WorldTransformUpdateID;
  }
}
