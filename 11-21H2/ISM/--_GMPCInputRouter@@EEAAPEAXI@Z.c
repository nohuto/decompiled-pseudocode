/*
 * XREFs of ??_GMPCInputRouter@@EEAAPEAXI@Z @ 0x1800EF910
 * Callers:
 *     ??_EMPCInputRouter@@GEI@EAAPEAXI@Z @ 0x18004FA80 (--_EMPCInputRouter@@GEI@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x1800EF6B4 (--1MPCInputRouter@@EEAA@XZ.c)
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
