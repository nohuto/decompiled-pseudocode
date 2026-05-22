/*
 * XREFs of ??_EGameInputProcessor@@UEAAPEAXI@Z @ 0x1801DA520
 * Callers:
 *     ??_EGameInputProcessor@@W7EAAPEAXI@Z @ 0x18007E670 (--_EGameInputProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1GameInputProcessor@@UEAA@XZ @ 0x1801DA3CC (--1GameInputProcessor@@UEAA@XZ.c)
 */

GameInputProcessor *__fastcall GameInputProcessor::`vector deleting destructor'(GameInputProcessor *this, char a2)
{
  GameInputProcessor::~GameInputProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
