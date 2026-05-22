/*
 * XREFs of ??_GComboButtonProcessor@@UEAAPEAXI@Z @ 0x1801A62DC
 * Callers:
 *     ??_EComboButtonProcessor@@W7EAAPEAXI@Z @ 0x1800537C0 (--_EComboButtonProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1ComboButtonProcessor@@UEAA@XZ @ 0x1801A6264 (--1ComboButtonProcessor@@UEAA@XZ.c)
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
