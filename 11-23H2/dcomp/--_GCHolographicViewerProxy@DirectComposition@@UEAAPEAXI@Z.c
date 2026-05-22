/*
 * XREFs of ??_GCHolographicViewerProxy@DirectComposition@@UEAAPEAXI@Z @ 0x1800E7BD0
 * Callers:
 *     ?Release@CHolographicViewerProxy@DirectComposition@@UEAAKXZ @ 0x1800E82E0 (-Release@CHolographicViewerProxy@DirectComposition@@UEAAKXZ.c)
 * Callees:
 *     ?RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024510 (-RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CHolographicViewerProxy@DirectComposition@@UEAA@XZ @ 0x1800E7B84 (--1CHolographicViewerProxy@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CHolographicViewerProxy *__fastcall DirectComposition::CHolographicViewerProxy::`scalar deleting destructor'(
        DirectComposition::CHolographicViewerProxy *this,
        char a2)
{
  DirectComposition::CHolographicViewerProxy::~CHolographicViewerProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DirectComposition::CDevice::RemoveProxy(this);
  }
  return this;
}
