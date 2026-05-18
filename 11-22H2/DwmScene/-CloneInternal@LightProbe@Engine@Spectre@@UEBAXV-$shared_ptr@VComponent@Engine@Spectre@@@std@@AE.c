/*
 * XREFs of ?CloneInternal@LightProbe@Engine@Spectre@@UEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x180051790
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$dynamic_pointer_cast@VLightProbe@Engine@Spectre@@VComponent@23@@std@@YA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@0@AEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x18001717C (--$dynamic_pointer_cast@VLightProbe@Engine@Spectre@@VComponent@23@@std@@YA-AV-$shared_ptr@VLight.c)
 *     ??4SphericalHarmonics@Engine@Spectre@@QEAAAEAV012@AEBV012@@Z @ 0x180051340 (--4SphericalHarmonics@Engine@Spectre@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4SphericalPolynomial@Engine@Spectre@@QEAAAEAV012@AEBV012@@Z @ 0x180051448 (--4SphericalPolynomial@Engine@Spectre@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?UpdateCachedState@LightProbe@Engine@Spectre@@AEAAXXZ @ 0x180051CA0 (-UpdateCachedState@LightProbe@Engine@Spectre@@AEAAXXZ.c)
 *     ?CloneInternal@Component@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x1800812C0 (-CloneInternal@Component@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEB.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::LightProbe::CloneInternal(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  Spectre::Engine::LightProbe *v5; // rbx
  std::_Ref_count_base *v6; // rcx
  Spectre::Engine::LightProbe *v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  v4 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v7,
         a2);
  Spectre::Engine::Component::CloneInternal(a1, v4);
  std::dynamic_pointer_cast<Spectre::Engine::LightProbe,Spectre::Engine::Component>((__int64 *)&v7, a2);
  v5 = v7;
  *((_DWORD *)v7 + 23) = *(_DWORD *)(a1 + 92);
  *((_DWORD *)v5 + 24) = *(_DWORD *)(a1 + 96);
  *((_DWORD *)v5 + 25) = *(_DWORD *)(a1 + 100);
  *((_DWORD *)v5 + 26) = *(_DWORD *)(a1 + 104);
  Spectre::Engine::SphericalHarmonics::operator=((_DWORD *)v5 + 27, (_DWORD *)(a1 + 108));
  Spectre::Engine::SphericalPolynomial::operator=((_DWORD *)v5 + 64, (_DWORD *)(a1 + 256));
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)v5 + 54, (_QWORD *)(a1 + 432));
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)v5 + 56, (_QWORD *)(a1 + 448));
  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)v5 + 64, (_QWORD *)(a1 + 512));
  *((_DWORD *)v5 + 132) = *(_DWORD *)(a1 + 528);
  Spectre::Engine::LightProbe::UpdateCachedState(v5);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v6 = (std::_Ref_count_base *)a2[1];
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
