/*
 * XREFs of ??_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z @ 0x1800BA600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800BA514 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800BA6B0 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CGlobalCompositionSurfaceInfo *__fastcall CGlobalCompositionSurfaceInfo::`vector deleting destructor'(
        CGlobalCompositionSurfaceInfo *this,
        char a2)
{
  CGlobalCompositionSurfaceInfo::CBindInfo::~CBindInfo((CGlobalCompositionSurfaceInfo *)((char *)this + 104));
  CCompositionSurfaceInfo::~CCompositionSurfaceInfo(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x1A8uLL);
    else
      operator delete(this);
  }
  return this;
}
