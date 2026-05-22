/*
 * XREFs of ??_GCYCbCrBitmapInfo@DirectComposition@@MEAAPEAXI@Z @ 0x1800FEC30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CYCbCrBitmapInfo@DirectComposition@@MEAA@XZ @ 0x1800FEB28 (--1CYCbCrBitmapInfo@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CYCbCrBitmapInfo *__fastcall DirectComposition::CYCbCrBitmapInfo::`scalar deleting destructor'(
        DirectComposition::CYCbCrBitmapInfo *this,
        char a2)
{
  DirectComposition::CYCbCrBitmapInfo::~CYCbCrBitmapInfo(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
