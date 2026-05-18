/*
 * XREFs of ??_GEngineSceneData@Engine@1Spectre@@UEAAPEAXI@Z @ 0x180032640
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UEngineSceneData@Engine@2Spectre@@@std@@EEAAXXZ @ 0x1800380A0 (-_Destroy@-$_Ref_count_obj2@UEngineSceneData@Engine@2Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1EngineSceneData@Engine@1Spectre@@UEAA@XZ @ 0x180031EE4 (--1EngineSceneData@Engine@1Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::Engine::EngineSceneData *__fastcall Spectre::Engine::Engine::EngineSceneData::`scalar deleting destructor'(
        Spectre::Engine::Engine::EngineSceneData *this,
        char a2)
{
  Spectre::Engine::Engine::EngineSceneData::~EngineSceneData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
