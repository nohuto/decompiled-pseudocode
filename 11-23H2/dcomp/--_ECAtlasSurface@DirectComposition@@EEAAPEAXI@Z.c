/*
 * XREFs of ??_ECAtlasSurface@DirectComposition@@EEAAPEAXI@Z @ 0x1800217B0
 * Callers:
 *     ??_ECAtlasSurface@DirectComposition@@GBA@EAAPEAXI@Z @ 0x1800A81D0 (--_ECAtlasSurface@DirectComposition@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ @ 0x18001FAA0 (-Dispose@CAtlasSurface@DirectComposition@@UEAAXXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 */

DirectComposition::CAtlasSurface *__fastcall DirectComposition::CAtlasSurface::`vector deleting destructor'(
        DirectComposition::CAtlasSurface *this,
        char a2)
{
  bool v2; // zf
  HANDLE ProcessHeap; // rax

  v2 = *((_DWORD *)this + 6) == 5;
  *(_QWORD *)this = &DirectComposition::CAtlasSurface::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &DirectComposition::CAtlasSurface::`vftable'{for `DirectComposition::CCompositorSynchronizedObject'};
  if ( !v2 )
    DirectComposition::CAtlasSurface::Dispose(this);
  *((_QWORD *)this + 2) = &DirectComposition::CCompositorSynchronizedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x70uLL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
