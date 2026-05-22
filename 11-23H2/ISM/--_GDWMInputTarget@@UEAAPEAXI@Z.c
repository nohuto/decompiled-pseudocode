/*
 * XREFs of ??_GDWMInputTarget@@UEAAPEAXI@Z @ 0x18001AFD4
 * Callers:
 *     ??_EDWMInputTarget@@WDI@EAAPEAXI@Z @ 0x180066670 (--_EDWMInputTarget@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1DWMInputTarget@@UEAA@XZ @ 0x18001B1C0 (--1DWMInputTarget@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DWMInputTarget *__fastcall DWMInputTarget::`scalar deleting destructor'(DWMInputTarget *this, char a2)
{
  DWMInputTarget::~DWMInputTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x88uLL);
    else
      free(this);
  }
  return this;
}
