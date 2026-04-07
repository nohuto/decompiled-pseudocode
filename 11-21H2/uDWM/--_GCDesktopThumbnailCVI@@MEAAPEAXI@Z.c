/*
 * XREFs of ??_GCDesktopThumbnailCVI@@MEAAPEAXI@Z @ 0x1800B1E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x1800B1C70 (--1CDesktopThumbnailCVI@@MEAA@XZ.c)
 */

CDesktopThumbnailCVI *__fastcall CDesktopThumbnailCVI::`scalar deleting destructor'(
        CDesktopThumbnailCVI *this,
        char a2)
{
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDesktopThumbnailCVI *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
