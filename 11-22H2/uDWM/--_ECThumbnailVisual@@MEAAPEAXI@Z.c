/*
 * XREFs of ??_ECThumbnailVisual@@MEAAPEAXI@Z @ 0x180008660
 * Callers:
 *     <none>
 * Callees:
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x1800089C0 (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CThumbnailVisual *__fastcall CThumbnailVisual::`vector deleting destructor'(CThumbnailVisual *this, char a2)
{
  CThumbnailVisual::~CThumbnailVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x240uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CThumbnailVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
