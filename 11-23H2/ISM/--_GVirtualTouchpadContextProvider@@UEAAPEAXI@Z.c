/*
 * XREFs of ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x1801BBDB4
 * Callers:
 *     ??_EVirtualTouchpadContextProvider@@W7EAAPEAXI@Z @ 0x18006A850 (--_EVirtualTouchpadContextProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1VirtualTouchpadContextProvider@@UEAA@XZ @ 0x1801BBD7C (--1VirtualTouchpadContextProvider@@UEAA@XZ.c)
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
