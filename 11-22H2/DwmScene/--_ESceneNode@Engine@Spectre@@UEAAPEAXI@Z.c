/*
 * XREFs of ??_ESceneNode@Engine@Spectre@@UEAAPEAXI@Z @ 0x18003B620
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SceneNode@Engine@Spectre@@UEAA@XZ @ 0x18003B364 (--1SceneNode@Engine@Spectre@@UEAA@XZ.c)
 */

void **__fastcall Spectre::Engine::SceneNode::`vector deleting destructor'(void **this, char a2)
{
  Spectre::Engine::SceneNode::~SceneNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
