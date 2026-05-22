/*
 * XREFs of ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x1801B1DB0
 * Callers:
 *     ??_EMouseProcessor@@OCA@EAAPEAXI@Z @ 0x180069E70 (--_EMouseProcessor@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x1801B1CDC (--1MouseProcessor@@MEAA@XZ.c)
 */

MouseProcessor *__fastcall MouseProcessor::`scalar deleting destructor'(MouseProcessor *this, char a2)
{
  MouseProcessor::~MouseProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
