/*
 * XREFs of ?CloneInternal@Bounds@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18004A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$dynamic_pointer_cast@VBounds@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VBounds@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x180013FC4 (--$dynamic_pointer_cast@VBounds@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VBounds@En.c)
 *     ?CloneInternal@Component@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x1800812C0 (-CloneInternal@Component@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEB.c)
 */

void __fastcall Spectre::Engine::Bounds::CloneInternal(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // xmm0_8
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-10h]

  v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v8,
         a2);
  Spectre::Engine::Component::CloneInternal(a1, v4);
  std::dynamic_pointer_cast<Spectre::Engine::Bounds,Spectre::Engine::Component>(&v8, a2);
  v5 = *(_QWORD *)(a1 + 104);
  v6 = v8;
  *(_OWORD *)(v8 + 88) = *(_OWORD *)(a1 + 88);
  *(_QWORD *)(v6 + 104) = v5;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v7 = (std::_Ref_count_base *)a2[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
