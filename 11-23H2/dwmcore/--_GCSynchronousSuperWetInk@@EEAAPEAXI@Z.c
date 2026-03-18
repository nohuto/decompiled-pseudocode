/*
 * XREFs of ??_GCSynchronousSuperWetInk@@EEAAPEAXI@Z @ 0x180252FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x180252D98 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 */

CSynchronousSuperWetInk *__fastcall CSynchronousSuperWetInk::`scalar deleting destructor'(
        CSynchronousSuperWetInk *this,
        char a2)
{
  CSynchronousSuperWetInk::~CSynchronousSuperWetInk(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
