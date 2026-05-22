/*
 * XREFs of ??_GKeyboardProcessor@@MEAAPEAXI@Z @ 0x1801B1200
 * Callers:
 *     ??_EKeyboardProcessor@@O7EAAPEAXI@Z @ 0x180069E30 (--_EKeyboardProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1KeyboardProcessor@@MEAA@XZ @ 0x1801B0F30 (--1KeyboardProcessor@@MEAA@XZ.c)
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
