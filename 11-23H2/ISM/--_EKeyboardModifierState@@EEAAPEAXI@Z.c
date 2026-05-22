/*
 * XREFs of ??_EKeyboardModifierState@@EEAAPEAXI@Z @ 0x1801B2EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1KeyboardModifierState@@EEAA@XZ @ 0x1801B2E24 (--1KeyboardModifierState@@EEAA@XZ.c)
 */

void **__fastcall KeyboardModifierState::`vector deleting destructor'(void **this, char a2)
{
  KeyboardModifierState::~KeyboardModifierState(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
