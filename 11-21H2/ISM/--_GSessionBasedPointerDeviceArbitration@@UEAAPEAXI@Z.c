/*
 * XREFs of ??_GSessionBasedPointerDeviceArbitration@@UEAAPEAXI@Z @ 0x1801CD860
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 */

SessionBasedPointerDeviceArbitration *__fastcall SessionBasedPointerDeviceArbitration::`scalar deleting destructor'(
        SessionBasedPointerDeviceArbitration *this,
        char a2)
{
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
