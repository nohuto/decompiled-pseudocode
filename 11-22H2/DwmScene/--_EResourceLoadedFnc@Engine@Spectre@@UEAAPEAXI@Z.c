/*
 * XREFs of ??_EResourceLoadedFnc@Engine@Spectre@@UEAAPEAXI@Z @ 0x180043E40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

Spectre::Engine::ResourceLoadedFnc *__fastcall Spectre::Engine::ResourceLoadedFnc::`vector deleting destructor'(
        Spectre::Engine::ResourceLoadedFnc *this,
        char a2)
{
  *(_QWORD *)this = &Spectre::Engine::ResourceLoadedFnc::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
