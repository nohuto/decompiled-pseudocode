/*
 * XREFs of ??_EMPCTarget@@UEAAPEAXI@Z @ 0x18011B168
 * Callers:
 *     ??_EMPCTarget@@W7EAAPEAXI@Z @ 0x18007AB70 (--_EMPCTarget@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1MPCTarget@@UEAA@XZ @ 0x18011B104 (--1MPCTarget@@UEAA@XZ.c)
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
