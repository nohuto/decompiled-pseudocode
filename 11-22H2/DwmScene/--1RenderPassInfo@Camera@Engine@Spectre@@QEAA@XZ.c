/*
 * XREFs of ??1RenderPassInfo@Camera@Engine@Spectre@@QEAA@XZ @ 0x180059A00
 * Callers:
 *     _Spectre::Engine::Camera::AddRenderPass_::_1_::dtor$1 @ 0x1800E7921 (_Spectre--Engine--Camera--AddRenderPass_--_1_--dtor$1.c)
 *     _Spectre::Engine::Camera::RenderPassInfo::Clone_::_1_::dtor$0 @ 0x1800E7957 (_Spectre--Engine--Camera--RenderPassInfo--Clone_--_1_--dtor$0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::Camera::RenderPassInfo::~RenderPassInfo(Spectre::Engine::Camera::RenderPassInfo *this)
{
  std::_Ref_count_base *v1; // rcx

  v1 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
