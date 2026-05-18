/*
 * XREFs of ?CloneInternal@ColorTransform@Engine@Spectre@@UEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18008F840
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$vector@IV?$allocator@I@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001F178 (--4-$vector@IV-$allocator@I@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$dynamic_pointer_cast@VColorTransform@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VColorTransform@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x180063070 (--$dynamic_pointer_cast@VColorTransform@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VC.c)
 *     ?CloneInternal@Component@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x1800812C0 (-CloneInternal@Component@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEB.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ColorTransform::CloneInternal(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v7,
         a2);
  Spectre::Engine::Component::CloneInternal(a1, v4);
  std::dynamic_pointer_cast<Spectre::Engine::ColorTransform,Spectre::Engine::Component>(&v7, a2);
  v5 = v7;
  *(_BYTE *)(v7 + 88) = *(_BYTE *)(a1 + 88);
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(v5 + 96), (_QWORD *)(a1 + 96));
  std::vector<unsigned int>::operator=((_QWORD *)(v5 + 112), a1 + 112);
  *(_QWORD *)(v5 + 136) = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(v5 + 144) = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(v5 + 152) = *(_QWORD *)(a1 + 152);
  *(_DWORD *)(v5 + 160) = *(_DWORD *)(a1 + 160);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v6 = (std::_Ref_count_base *)a2[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
