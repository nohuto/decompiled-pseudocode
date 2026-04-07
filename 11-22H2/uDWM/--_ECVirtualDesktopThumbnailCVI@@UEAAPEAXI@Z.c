/*
 * XREFs of ??_ECVirtualDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x1800164C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x18001651C (--1CDesktopThumbnailCVI@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CVirtualDesktopThumbnailCVI *__fastcall CVirtualDesktopThumbnailCVI::`vector deleting destructor'(
        CVirtualDesktopThumbnailCVI *this,
        char a2)
{
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x50uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CVirtualDesktopThumbnailCVI *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
