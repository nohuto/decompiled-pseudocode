/*
 * XREFs of ??_GCGlobalTimeTrackVisual@@MEAAPEAXI@Z @ 0x1801000B0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CGlobalTimeTrackVisual@@MEAA@XZ @ 0x18010006C (--1CGlobalTimeTrackVisual@@MEAA@XZ.c)
 */

CGlobalTimeTrackVisual *__fastcall CGlobalTimeTrackVisual::`scalar deleting destructor'(
        CGlobalTimeTrackVisual *this,
        char a2)
{
  CGlobalTimeTrackVisual::~CGlobalTimeTrackVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CGlobalTimeTrackVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
