/*
 * XREFs of ??_GCDDisplayManager@@EEAAPEAXI@Z @ 0x1800AED00
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDDisplayManager@@EEAA@XZ @ 0x1800AECBC (--1CDDisplayManager@@EEAA@XZ.c)
 */

CDDisplayManager *__fastcall CDDisplayManager::`scalar deleting destructor'(CDDisplayManager *this, char a2)
{
  CDDisplayManager::~CDDisplayManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDDisplayManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
