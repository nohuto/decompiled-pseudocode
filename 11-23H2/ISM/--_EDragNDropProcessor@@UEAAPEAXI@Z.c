/*
 * XREFs of ??_EDragNDropProcessor@@UEAAPEAXI@Z @ 0x18015CD50
 * Callers:
 *     ??_EDragNDropProcessor@@W7EAAPEAXI@Z @ 0x180067FB0 (--_EDragNDropProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DragNDropProcessor@@UEAA@XZ @ 0x18015C7C4 (--1DragNDropProcessor@@UEAA@XZ.c)
 */

DragNDropProcessor *__fastcall DragNDropProcessor::`vector deleting destructor'(DragNDropProcessor *this, char a2)
{
  DragNDropProcessor::~DragNDropProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
