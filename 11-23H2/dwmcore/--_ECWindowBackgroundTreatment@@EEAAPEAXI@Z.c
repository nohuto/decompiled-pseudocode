/*
 * XREFs of ??_ECWindowBackgroundTreatment@@EEAAPEAXI@Z @ 0x180024720
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowBackgroundTreatment@@EEAA@XZ @ 0x180024764 (--1CWindowBackgroundTreatment@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180105114 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CWindowBackgroundTreatment *__fastcall CWindowBackgroundTreatment::`vector deleting destructor'(
        CWindowBackgroundTreatment *this,
        char a2)
{
  CWindowBackgroundTreatment::~CWindowBackgroundTreatment(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x160uLL);
    else
      operator delete(this);
  }
  return this;
}
