/*
 * XREFs of ??_GCMagnifier@@EEAAPEAXI@Z @ 0x1800CA290
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CMagnifier@@EEAA@XZ @ 0x1800CA1FC (--1CMagnifier@@EEAA@XZ.c)
 */

CMagnifier *__fastcall CMagnifier::`scalar deleting destructor'(CMagnifier *this, char a2)
{
  CMagnifier::~CMagnifier(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CMagnifier *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
