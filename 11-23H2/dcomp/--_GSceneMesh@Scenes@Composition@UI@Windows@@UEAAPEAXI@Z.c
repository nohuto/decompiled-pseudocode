/*
 * XREFs of ??_GSceneMesh@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180132200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1SceneMesh@Scenes@Composition@UI@Windows@@UEAA@XZ @ 0x1801320B0 (--1SceneMesh@Scenes@Composition@UI@Windows@@UEAA@XZ.c)
 */

Windows::UI::Composition::Scenes::SceneMesh *__fastcall Windows::UI::Composition::Scenes::SceneMesh::`scalar deleting destructor'(
        Windows::UI::Composition::Scenes::SceneMesh *this,
        char a2)
{
  Windows::UI::Composition::Scenes::SceneMesh::~SceneMesh(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
