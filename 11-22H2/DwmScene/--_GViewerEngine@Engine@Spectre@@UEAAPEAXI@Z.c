/*
 * XREFs of ??_GViewerEngine@Engine@Spectre@@UEAAPEAXI@Z @ 0x180064A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ViewerEngine@Engine@Spectre@@UEAA@XZ @ 0x1800640C8 (--1ViewerEngine@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ViewerEngine *__fastcall Spectre::Engine::ViewerEngine::`scalar deleting destructor'(
        Spectre::Engine::ViewerEngine *this,
        char a2)
{
  Spectre::Engine::ViewerEngine::~ViewerEngine(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
