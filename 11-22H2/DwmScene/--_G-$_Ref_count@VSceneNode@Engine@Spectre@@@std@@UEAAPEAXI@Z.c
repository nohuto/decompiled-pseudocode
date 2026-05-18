/*
 * XREFs of ??_G?$_Ref_count@VSceneNode@Engine@Spectre@@@std@@UEAAPEAXI@Z @ 0x180017EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::_Ref_count<Spectre::Engine::SceneNode>::`scalar deleting destructor'(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
