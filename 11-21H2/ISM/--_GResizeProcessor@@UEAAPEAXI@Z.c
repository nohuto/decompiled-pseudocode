/*
 * XREFs of ??_GResizeProcessor@@UEAAPEAXI@Z @ 0x180144C54
 * Callers:
 *     ??_EResizeProcessor@@W7EAAPEAXI@Z @ 0x180050F00 (--_EResizeProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ResizeProcessor@@UEAA@XZ @ 0x1801449BC (--1ResizeProcessor@@UEAA@XZ.c)
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
