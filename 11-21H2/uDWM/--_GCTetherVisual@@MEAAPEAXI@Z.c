/*
 * XREFs of ??_GCTetherVisual@@MEAAPEAXI@Z @ 0x1800E1ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800E1D9C (--1CTetherVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CTetherVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CTetherVisual::~CTetherVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
