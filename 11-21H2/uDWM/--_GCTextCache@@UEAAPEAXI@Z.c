/*
 * XREFs of ??_GCTextCache@@UEAAPEAXI@Z @ 0x1800AFBB0
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AF75C (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CTextCache@@UEAA@XZ @ 0x1800E2CD0 (--1CTextCache@@UEAA@XZ.c)
 */

CTextCache *__fastcall CTextCache::`scalar deleting destructor'(CTextCache *this, char a2)
{
  CTextCache::~CTextCache(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CTextCache *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
