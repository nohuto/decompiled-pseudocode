/*
 * XREFs of ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x18019DB48
 * Callers:
 *     ??_EVirtualTouchpadContextProvider@@W7EAAPEAXI@Z @ 0x180053600 (--_EVirtualTouchpadContextProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1VirtualTouchpadContextProvider@@UEAA@XZ @ 0x18019DB10 (--1VirtualTouchpadContextProvider@@UEAA@XZ.c)
 */

VirtualTouchpadContextProvider *__fastcall VirtualTouchpadContextProvider::`scalar deleting destructor'(
        VirtualTouchpadContextProvider *this,
        char a2)
{
  VirtualTouchpadContextProvider::~VirtualTouchpadContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
