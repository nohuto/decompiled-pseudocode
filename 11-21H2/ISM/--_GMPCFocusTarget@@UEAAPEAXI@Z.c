/*
 * XREFs of ??_GMPCFocusTarget@@UEAAPEAXI@Z @ 0x1800F295C
 * Callers:
 *     ??_EMPCFocusTarget@@W7EAAPEAXI@Z @ 0x18004FEC0 (--_EMPCFocusTarget@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1MPCFocusTarget@@UEAA@XZ @ 0x1800F292C (--1MPCFocusTarget@@UEAA@XZ.c)
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
