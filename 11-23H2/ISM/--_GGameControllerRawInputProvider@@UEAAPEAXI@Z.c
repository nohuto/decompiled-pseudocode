/*
 * XREFs of ??_GGameControllerRawInputProvider@@UEAAPEAXI@Z @ 0x1800CC998
 * Callers:
 *     ??_EGameControllerRawInputProvider@@WBI@EAAPEAXI@Z @ 0x180066290 (--_EGameControllerRawInputProvider@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CC844 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 */

GameControllerRawInputProvider *__fastcall GameControllerRawInputProvider::`scalar deleting destructor'(
        GameControllerRawInputProvider *this,
        char a2)
{
  GameControllerRawInputProvider::~GameControllerRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
