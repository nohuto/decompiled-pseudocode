/*
 * XREFs of ??_ECDCompDesktopThumbnail@@UEAAPEAXI@Z @ 0x180107E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x1800033D0 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
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
