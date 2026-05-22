/*
 * XREFs of ??_EViewMenuChordedKeyHandler@@MEAAPEAXI@Z @ 0x18019A370
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ViewMenuChordedKeyHandler@@MEAA@XZ @ 0x18019A2D4 (--1ViewMenuChordedKeyHandler@@MEAA@XZ.c)
 */

ViewMenuChordedKeyHandler *__fastcall ViewMenuChordedKeyHandler::`vector deleting destructor'(
        ViewMenuChordedKeyHandler *this,
        char a2)
{
  ViewMenuChordedKeyHandler::~ViewMenuChordedKeyHandler(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
