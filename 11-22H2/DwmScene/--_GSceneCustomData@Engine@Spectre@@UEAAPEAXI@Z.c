/*
 * XREFs of ??_GSceneCustomData@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800326B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SceneCustomData@Engine@Spectre@@UEAA@XZ @ 0x18004003C (--1SceneCustomData@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::SceneCustomData *__fastcall Spectre::Engine::SceneCustomData::`scalar deleting destructor'(
        Spectre::Engine::SceneCustomData *this,
        char a2)
{
  Spectre::Engine::SceneCustomData::~SceneCustomData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
