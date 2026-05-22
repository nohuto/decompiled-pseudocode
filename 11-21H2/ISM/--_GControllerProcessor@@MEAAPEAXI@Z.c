/*
 * XREFs of ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x180175DA0
 * Callers:
 *     ??_EControllerProcessor@@OBA@EAAPEAXI@Z @ 0x180052840 (--_EControllerProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180175A74 (--1ControllerProcessor@@MEAA@XZ.c)
 */

ControllerProcessor *__fastcall ControllerProcessor::`scalar deleting destructor'(ControllerProcessor *this, char a2)
{
  ControllerProcessor::~ControllerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
