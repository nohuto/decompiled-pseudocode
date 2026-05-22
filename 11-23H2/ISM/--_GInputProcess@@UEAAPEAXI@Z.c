/*
 * XREFs of ??_GInputProcess@@UEAAPEAXI@Z @ 0x1800CAA78
 * Callers:
 *     ??_EInputProcess@@W7EAAPEAXI@Z @ 0x180066090 (--_EInputProcess@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1InputProcess@@UEAA@XZ @ 0x1800CA9D0 (--1InputProcess@@UEAA@XZ.c)
 */

Microsoft::Bamo::BaseBamoConnection **__fastcall InputProcess::`scalar deleting destructor'(
        Microsoft::Bamo::BaseBamoConnection **this,
        char a2)
{
  InputProcess::~InputProcess(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      free(this);
  }
  return this;
}
