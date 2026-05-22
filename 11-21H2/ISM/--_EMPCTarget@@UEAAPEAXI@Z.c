/*
 * XREFs of ??_EMPCTarget@@UEAAPEAXI@Z @ 0x1800F3344
 * Callers:
 *     ??_EMPCTarget@@W7EAAPEAXI@Z @ 0x180050020 (--_EMPCTarget@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1MPCTarget@@UEAA@XZ @ 0x1800F32F4 (--1MPCTarget@@UEAA@XZ.c)
 */

MPCTarget *__fastcall MPCTarget::`vector deleting destructor'(MPCTarget *this, char a2)
{
  MPCTarget::~MPCTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
