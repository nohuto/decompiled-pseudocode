/*
 * XREFs of ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x1802A4180
 * Callers:
 *     ??_ECHolographicManager@@G7EAAPEAXI@Z @ 0x1801213B0 (--_ECHolographicManager@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1802A4074 (--1CHolographicManager@@EEAA@XZ.c)
 */

CHolographicManager *__fastcall CHolographicManager::`vector deleting destructor'(CHolographicManager *this, char a2)
{
  CHolographicManager::~CHolographicManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
