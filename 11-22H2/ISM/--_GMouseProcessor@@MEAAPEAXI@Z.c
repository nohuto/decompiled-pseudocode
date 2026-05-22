/*
 * XREFs of ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x1801BFD90
 * Callers:
 *     ??_EMouseProcessor@@OCA@EAAPEAXI@Z @ 0x18007D9D0 (--_EMouseProcessor@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x1801BFCBC (--1MouseProcessor@@MEAA@XZ.c)
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
