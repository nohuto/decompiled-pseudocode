/*
 * XREFs of ??_EDefaultSceneNodeTraversal@Engine@Spectre@@UEAAPEAXI@Z @ 0x180070D80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DefaultSceneNodeTraversal@Engine@Spectre@@UEAA@XZ @ 0x180070D0C (--1DefaultSceneNodeTraversal@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DefaultSceneNodeTraversal *__fastcall Spectre::Engine::DefaultSceneNodeTraversal::`vector deleting destructor'(
        Spectre::Engine::DefaultSceneNodeTraversal *this,
        char a2)
{
  Spectre::Engine::DefaultSceneNodeTraversal::~DefaultSceneNodeTraversal(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
