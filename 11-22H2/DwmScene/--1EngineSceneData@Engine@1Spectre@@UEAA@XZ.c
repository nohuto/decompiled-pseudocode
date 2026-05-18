/*
 * XREFs of ??1EngineSceneData@Engine@1Spectre@@UEAA@XZ @ 0x180031EE4
 * Callers:
 *     ??_GEngineSceneData@Engine@1Spectre@@UEAAPEAXI@Z @ 0x180032640 (--_GEngineSceneData@Engine@1Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::Engine::EngineSceneData::~EngineSceneData(
        Spectre::Engine::Engine::EngineSceneData *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 4);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  Spectre::Engine::SceneCustomData::~SceneCustomData(this);
}
