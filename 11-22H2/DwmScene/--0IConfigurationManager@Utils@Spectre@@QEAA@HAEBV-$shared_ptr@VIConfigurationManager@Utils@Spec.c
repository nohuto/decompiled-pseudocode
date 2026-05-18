/*
 * XREFs of ??0IConfigurationManager@Utils@Spectre@@QEAA@HAEBV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@@Z @ 0x1800DBC24
 * Callers:
 *     ??0JsonConfigurationManager@Utils@Spectre@@QEAA@HV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@@Z @ 0x1800DDF40 (--0JsonConfigurationManager@Utils@Spectre@@QEAA@HV-$shared_ptr@VIConfigurationManager@Utils@Spec.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Utils::IConfigurationManager::IConfigurationManager(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // r9
  _QWORD *v5; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  *(_DWORD *)(a1 + 24) = a2;
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    (_QWORD *)(a1 + 32),
    a3);
  *(_QWORD *)(a1 + 48) = v4;
  *(_QWORD *)(a1 + 56) = v4;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>((unsigned int)(v4 + 32));
  *v5 = v5;
  v5[1] = v5;
  *(_QWORD *)(a1 + 48) = v5;
  return a1;
}
