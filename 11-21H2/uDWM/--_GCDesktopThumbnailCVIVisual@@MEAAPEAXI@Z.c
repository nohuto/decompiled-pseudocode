/*
 * XREFs of ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x1800B1EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x1800B1CB8 (--1CDesktopThumbnailCVIVisual@@MEAA@XZ.c)
 */

CDesktopThumbnailCVIVisual *__fastcall CDesktopThumbnailCVIVisual::`scalar deleting destructor'(
        CDesktopThumbnailCVIVisual *this,
        char a2)
{
  CDesktopThumbnailCVIVisual::~CDesktopThumbnailCVIVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDesktopThumbnailCVIVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
