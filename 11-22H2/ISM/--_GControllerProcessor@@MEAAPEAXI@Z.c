/*
 * XREFs of ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x1801A2F74
 * Callers:
 *     ??_EControllerProcessor@@OBA@EAAPEAXI@Z @ 0x18007D5B0 (--_EControllerProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x1801A2C48 (--1ControllerProcessor@@MEAA@XZ.c)
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
