/*
 * XREFs of ??_GInputStateManager@@MEAAPEAXI@Z @ 0x1800B29D0
 * Callers:
 *     ??_EInputStateManager@@OBI@EAAPEAXI@Z @ 0x18004F160 (--_EInputStateManager@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InputStateManager@@MEAA@XZ @ 0x1800B27E8 (--1InputStateManager@@MEAA@XZ.c)
 */

InputStateManager *__fastcall InputStateManager::`scalar deleting destructor'(
        InputStateManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di

  v4 = a2;
  InputStateManager::~InputStateManager(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
