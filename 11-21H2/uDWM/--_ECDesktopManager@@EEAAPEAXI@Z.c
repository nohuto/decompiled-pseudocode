/*
 * XREFs of ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x1800AFA60
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AF75C (--1CDesktopManager@@EEAA@XZ.c)
 */

CDesktopManager *__fastcall CDesktopManager::`vector deleting destructor'(CDesktopManager *this, __int64 a2)
{
  char v2; // di

  v2 = a2;
  CDesktopManager::~CDesktopManager(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDesktopManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
