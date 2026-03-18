/*
 * XREFs of ??_ECGlobalInputManager@@UEAAPEAXI@Z @ 0x180282E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CGlobalInputManager@@UEAA@XZ @ 0x180282E1C (--1CGlobalInputManager@@UEAA@XZ.c)
 */

CGlobalInputManager *__fastcall CGlobalInputManager::`vector deleting destructor'(CGlobalInputManager *this, char a2)
{
  CGlobalInputManager::~CGlobalInputManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
