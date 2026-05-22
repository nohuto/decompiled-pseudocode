/*
 * XREFs of ??_GComboButtonProcessor@@UEAAPEAXI@Z @ 0x1801D1EEC
 * Callers:
 *     ??_EComboButtonProcessor@@W7EAAPEAXI@Z @ 0x18007E4F0 (--_EComboButtonProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ComboButtonProcessor@@UEAA@XZ @ 0x1801D1E74 (--1ComboButtonProcessor@@UEAA@XZ.c)
 */

ComboButtonProcessor *__fastcall ComboButtonProcessor::`scalar deleting destructor'(
        ComboButtonProcessor *this,
        char a2)
{
  ComboButtonProcessor::~ComboButtonProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
