/*
 * XREFs of ?CloneInternal@Aimer@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x180096770
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003B558 (--4-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$dynamic_pointer_cast@VAimer@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VAimer@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x180063008 (--$dynamic_pointer_cast@VAimer@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VAimer@Engi.c)
 *     ?CloneInternal@Component@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x1800812C0 (-CloneInternal@Component@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEB.c)
 */

void __fastcall Spectre::Engine::Aimer::CloneInternal(__int64 a1, _QWORD *a2)
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
  std::dynamic_pointer_cast<Spectre::Engine::Aimer,Spectre::Engine::Component>(&v7, a2);
  v5 = v7;
  *(_DWORD *)(v7 + 112) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(v5 + 120) = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(v5 + 124) = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(v5 + 132) = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(v5 + 88) = *(_DWORD *)(a1 + 88);
  std::shared_ptr<Spectre::Engine::SceneNode const>::operator=((_QWORD *)(v5 + 96), (_QWORD *)(a1 + 96));
  *(_DWORD *)(v5 + 140) = *(_DWORD *)(a1 + 140);
  *(_DWORD *)(v5 + 144) = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(v5 + 148) = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(v5 + 136) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(v5 + 152) = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(v5 + 156) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(v5 + 160) = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(v5 + 164) = *(_DWORD *)(a1 + 164);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v6 = (std::_Ref_count_base *)a2[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
