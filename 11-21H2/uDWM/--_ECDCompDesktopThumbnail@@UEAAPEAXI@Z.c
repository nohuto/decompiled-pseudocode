/*
 * XREFs of ??_ECDCompDesktopThumbnail@@UEAAPEAXI@Z @ 0x180101BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x1800B1BD8 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 */

CDCompDesktopThumbnail *__fastcall CDCompDesktopThumbnail::`vector deleting destructor'(
        CDCompDesktopThumbnail *this,
        char a2)
{
  CDesktopThumbnailBase::~CDesktopThumbnailBase(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDCompDesktopThumbnail *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
