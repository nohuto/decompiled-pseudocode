/*
 * XREFs of ??_GMPCFocusTarget@@UEAAPEAXI@Z @ 0x18011A2B4
 * Callers:
 *     ??_EMPCFocusTarget@@W7EAAPEAXI@Z @ 0x18007AA10 (--_EMPCFocusTarget@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002BAE4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1MPCFocusTarget@@UEAA@XZ @ 0x18011A274 (--1MPCFocusTarget@@UEAA@XZ.c)
 */

MPCFocusTarget *__fastcall MPCFocusTarget::`scalar deleting destructor'(MPCFocusTarget *this, char a2)
{
  MPCFocusTarget::~MPCFocusTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
