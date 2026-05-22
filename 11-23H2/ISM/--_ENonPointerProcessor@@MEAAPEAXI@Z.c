/*
 * XREFs of ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x1801B29F4
 * Callers:
 *     ??_ENonPointerProcessor@@OBA@EAAPEAXI@Z @ 0x18006A010 (--_ENonPointerProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x1801B2994 (--1NonPointerProcessor@@MEAA@XZ.c)
 */

NonPointerProcessor *__fastcall NonPointerProcessor::`vector deleting destructor'(NonPointerProcessor *this, char a2)
{
  NonPointerProcessor::~NonPointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
