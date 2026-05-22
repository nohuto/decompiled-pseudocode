/*
 * XREFs of ??_GKeyboardProcessor@@MEAAPEAXI@Z @ 0x1801BF1E0
 * Callers:
 *     ??_EKeyboardProcessor@@O7EAAPEAXI@Z @ 0x18007D990 (--_EKeyboardProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1KeyboardProcessor@@MEAA@XZ @ 0x1801BEF10 (--1KeyboardProcessor@@MEAA@XZ.c)
 */

KeyboardProcessor *__fastcall KeyboardProcessor::`scalar deleting destructor'(KeyboardProcessor *this, char a2)
{
  KeyboardProcessor::~KeyboardProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
