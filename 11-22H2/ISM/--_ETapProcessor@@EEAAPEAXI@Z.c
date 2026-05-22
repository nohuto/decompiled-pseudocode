/*
 * XREFs of ??_ETapProcessor@@EEAAPEAXI@Z @ 0x1801DF878
 * Callers:
 *     ??_ETapProcessor@@GBA@EAAPEAXI@Z @ 0x18007E7F0 (--_ETapProcessor@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1TapProcessor@@EEAA@XZ @ 0x1801DF7DC (--1TapProcessor@@EEAA@XZ.c)
 */

TapProcessor *__fastcall TapProcessor::`vector deleting destructor'(TapProcessor *this, char a2)
{
  TapProcessor::~TapProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
