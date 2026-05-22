/*
 * XREFs of ??_EDWMInputRouter@@MEAAPEAXI@Z @ 0x1801B84BC
 * Callers:
 *     ??_EDWMInputRouter@@OEI@EAAPEAXI@Z @ 0x18006A110 (--_EDWMInputRouter@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1801B7FD4 (--1DWMInputRouter@@MEAA@XZ.c)
 */

DWMInputRouter *__fastcall DWMInputRouter::`vector deleting destructor'(DWMInputRouter *this, char a2)
{
  DWMInputRouter::~DWMInputRouter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
