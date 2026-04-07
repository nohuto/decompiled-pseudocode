/*
 * XREFs of ??_ECTouchPressHoldVisual@@MEAAPEAXI@Z @ 0x1800E8A50
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800E8A18 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 */

CTouchPressHoldVisual *__fastcall CTouchPressHoldVisual::`vector deleting destructor'(
        CTouchPressHoldVisual *this,
        char a2)
{
  CTouchPressHoldVisual::~CTouchPressHoldVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CTouchPressHoldVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
