/*
 * XREFs of ??_GDWMFocusedInputTarget@@MEAAPEAXI@Z @ 0x180026C0C
 * Callers:
 *     ??_EDWMFocusedInputTarget@@OCI@EAAPEAXI@Z @ 0x18006A470 (--_EDWMFocusedInputTarget@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1DWMFocusedInputTarget@@MEAA@XZ @ 0x180026B94 (--1DWMFocusedInputTarget@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DWMFocusedInputTarget *__fastcall DWMFocusedInputTarget::`scalar deleting destructor'(
        DWMFocusedInputTarget *this,
        char a2)
{
  DWMFocusedInputTarget::~DWMFocusedInputTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x58uLL);
    else
      free(this);
  }
  return this;
}
