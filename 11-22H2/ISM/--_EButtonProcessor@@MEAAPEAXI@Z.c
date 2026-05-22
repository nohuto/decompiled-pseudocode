/*
 * XREFs of ??_EButtonProcessor@@MEAAPEAXI@Z @ 0x1801E5988
 * Callers:
 *     ??_EButtonProcessor@@O7EAAPEAXI@Z @ 0x18007E950 (--_EButtonProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ButtonProcessor@@MEAA@XZ @ 0x1801E58C8 (--1ButtonProcessor@@MEAA@XZ.c)
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
