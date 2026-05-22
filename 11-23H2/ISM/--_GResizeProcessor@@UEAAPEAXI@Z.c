/*
 * XREFs of ??_GResizeProcessor@@UEAAPEAXI@Z @ 0x18016398C
 * Callers:
 *     ??_EResizeProcessor@@W7EAAPEAXI@Z @ 0x180068050 (--_EResizeProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ResizeProcessor@@UEAA@XZ @ 0x1801636F4 (--1ResizeProcessor@@UEAA@XZ.c)
 */

ResizeProcessor *__fastcall ResizeProcessor::`scalar deleting destructor'(ResizeProcessor *this, char a2)
{
  ResizeProcessor::~ResizeProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
