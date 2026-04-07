/*
 * XREFs of ??_GCImmersiveIconicBitmapRegistry@@UEAAPEAXI@Z @ 0x1800B4190
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B3C8C (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ @ 0x1800C3E2C (--1CImmersiveIconicBitmapRegistry@@UEAA@XZ.c)
 */

CImmersiveIconicBitmapRegistry *__fastcall CImmersiveIconicBitmapRegistry::`scalar deleting destructor'(
        CImmersiveIconicBitmapRegistry *this,
        char a2)
{
  CImmersiveIconicBitmapRegistry::~CImmersiveIconicBitmapRegistry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CImmersiveIconicBitmapRegistry *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
