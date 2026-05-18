/*
 * XREFs of ?GetScene@Engine@1Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@H@Z @ 0x18003477C
 * Callers:
 *     ?OnConfigurationLoaded@ViewerEngine@Engine@Spectre@@MEAAXH@Z @ 0x180066DA0 (-OnConfigurationLoaded@ViewerEngine@Engine@Spectre@@MEAAXH@Z.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::Engine::GetScene(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r9
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  v3 = a2;
  v4 = a3;
  v5 = *(_QWORD *)(a1 + 704);
  if ( (*(_QWORD *)(a1 + 712) - v5) >> 4 <= v4 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    v3,
    (_QWORD *)(v5 + 16 * v4));
  return v6;
}
