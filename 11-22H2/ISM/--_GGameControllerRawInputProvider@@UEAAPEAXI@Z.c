/*
 * XREFs of ??_GGameControllerRawInputProvider@@UEAAPEAXI@Z @ 0x1800DBCA8
 * Callers:
 *     ??_EGameControllerRawInputProvider@@WCA@EAAPEAXI@Z @ 0x180079D10 (--_EGameControllerRawInputProvider@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800DBB24 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
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
