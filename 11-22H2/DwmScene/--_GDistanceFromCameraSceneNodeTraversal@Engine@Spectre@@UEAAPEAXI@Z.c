/*
 * XREFs of ??_GDistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEAAPEAXI@Z @ 0x180095790
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEAA@XZ @ 0x1800956D4 (--1DistanceFromCameraSceneNodeTraversal@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DistanceFromCameraSceneNodeTraversal *__fastcall Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`scalar deleting destructor'(
        Spectre::Engine::DistanceFromCameraSceneNodeTraversal *this,
        char a2)
{
  Spectre::Engine::DistanceFromCameraSceneNodeTraversal::~DistanceFromCameraSceneNodeTraversal(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
