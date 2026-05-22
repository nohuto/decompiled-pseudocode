/*
 * XREFs of ??_EDragNDropProcessor@@UEAAPEAXI@Z @ 0x18013DBF0
 * Callers:
 *     ??_EDragNDropProcessor@@W7EAAPEAXI@Z @ 0x180050E60 (--_EDragNDropProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DragNDropProcessor@@UEAA@XZ @ 0x18013D654 (--1DragNDropProcessor@@UEAA@XZ.c)
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
