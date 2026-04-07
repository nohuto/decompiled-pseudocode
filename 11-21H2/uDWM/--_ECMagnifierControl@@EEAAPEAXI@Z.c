/*
 * XREFs of ??_ECMagnifierControl@@EEAAPEAXI@Z @ 0x1800C6980
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CMagnifierControl@@EEAA@XZ @ 0x1800C6898 (--1CMagnifierControl@@EEAA@XZ.c)
 */

CMagnifierControl *__fastcall CMagnifierControl::`vector deleting destructor'(CMagnifierControl *this, char a2)
{
  CMagnifierControl::~CMagnifierControl(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CMagnifierControl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
