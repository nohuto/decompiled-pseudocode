/*
 * XREFs of ??1ShaderInfo@ShaderManager@Engine@Spectre@@QEAA@XZ @ 0x18004EB70
 * Callers:
 *     ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@QEAA@XZ @ 0x18004EAC8 (--1-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UShaderInfo@ShaderMa.c)
 *     ?AddShaderProgram@ShaderManager@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EShaderType@23@VShaderProgram@23@@Z @ 0x18004F42C (-AddShaderProgram@ShaderManager@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     _Spectre::Engine::ShaderManager::AddShaderProgram_::_1_::dtor$10 @ 0x1800E72DA (_Spectre--Engine--ShaderManager--AddShaderProgram_--_1_--dtor$10.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ShaderManager::ShaderInfo::~ShaderInfo(
        Spectre::Engine::ShaderManager::ShaderInfo *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 4);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
