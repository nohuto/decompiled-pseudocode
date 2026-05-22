/*
 * XREFs of ??_EButtonProcessor@@MEAAPEAXI@Z @ 0x1801D8118
 * Callers:
 *     ??_EButtonProcessor@@O7EAAPEAXI@Z @ 0x18006AE70 (--_EButtonProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ButtonProcessor@@MEAA@XZ @ 0x1801D8058 (--1ButtonProcessor@@MEAA@XZ.c)
 */

ButtonProcessor *__fastcall ButtonProcessor::`vector deleting destructor'(ButtonProcessor *this, char a2)
{
  ButtonProcessor::~ButtonProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
