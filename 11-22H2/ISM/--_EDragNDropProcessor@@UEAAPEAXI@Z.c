/*
 * XREFs of ??_EDragNDropProcessor@@UEAAPEAXI@Z @ 0x18016AFD0
 * Callers:
 *     ??_EDragNDropProcessor@@W7EAAPEAXI@Z @ 0x18007BB10 (--_EDragNDropProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DragNDropProcessor@@UEAA@XZ @ 0x18016AA44 (--1DragNDropProcessor@@UEAA@XZ.c)
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
