/*
 * XREFs of ?CloneInternal@Light@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x1800430C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$dynamic_pointer_cast@VLight@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VLight@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x180012288 (--$dynamic_pointer_cast@VLight@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VLight@Engi.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CloneInternal@Component@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x1800812C0 (-CloneInternal@Component@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEB.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Light::CloneInternal(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v7,
         a2);
  Spectre::Engine::Component::CloneInternal(a1, v4);
  std::dynamic_pointer_cast<Spectre::Engine::Light,Spectre::Engine::Component>(&v7, a2);
  v5 = v7;
  *(_DWORD *)(v7 + 128) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(v5 + 120) = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(v5 + 124) = *(_BYTE *)(a1 + 124);
  *(_DWORD *)(v5 + 88) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(v5 + 92) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v5 + 96) = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 100) = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(v5 + 104) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(v5 + 112) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(v5 + 108) = *(_DWORD *)(a1 + 108);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v6 = (std::_Ref_count_base *)a2[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
