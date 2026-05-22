/*
 * XREFs of ??_GTouchProcessor@@MEAAPEAXI@Z @ 0x1801F7ECC
 * Callers:
 *     ??_ETouchProcessor@@OBA@EAAPEAXI@Z @ 0x18007EFB0 (--_ETouchProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1TouchProcessor@@MEAA@XZ @ 0x1801F7E68 (--1TouchProcessor@@MEAA@XZ.c)
 */

TouchProcessor *__fastcall TouchProcessor::`scalar deleting destructor'(TouchProcessor *this, char a2)
{
  TouchProcessor::~TouchProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
