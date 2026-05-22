/*
 * XREFs of ??_GMPCInputRouter@@EEAAPEAXI@Z @ 0x1801170E4
 * Callers:
 *     ??_EMPCInputRouter@@GEI@EAAPEAXI@Z @ 0x18007A5D0 (--_EMPCInputRouter@@GEI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x180116E88 (--1MPCInputRouter@@EEAA@XZ.c)
 */

MPCInputRouter *__fastcall MPCInputRouter::`scalar deleting destructor'(MPCInputRouter *this, char a2)
{
  MPCInputRouter::~MPCInputRouter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
