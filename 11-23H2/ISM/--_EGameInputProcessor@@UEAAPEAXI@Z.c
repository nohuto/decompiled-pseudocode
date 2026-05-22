/*
 * XREFs of ??_EGameInputProcessor@@UEAAPEAXI@Z @ 0x1801CCCB0
 * Callers:
 *     ??_EGameInputProcessor@@W7EAAPEAXI@Z @ 0x18006AB90 (--_EGameInputProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1GameInputProcessor@@UEAA@XZ @ 0x1801CCB5C (--1GameInputProcessor@@UEAA@XZ.c)
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
