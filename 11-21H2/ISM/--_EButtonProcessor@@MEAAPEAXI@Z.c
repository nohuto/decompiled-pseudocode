/*
 * XREFs of ??_EButtonProcessor@@MEAAPEAXI@Z @ 0x1801B9DA8
 * Callers:
 *     ??_EButtonProcessor@@O7EAAPEAXI@Z @ 0x180053BE0 (--_EButtonProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ButtonProcessor@@MEAA@XZ @ 0x1801B9CE8 (--1ButtonProcessor@@MEAA@XZ.c)
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
