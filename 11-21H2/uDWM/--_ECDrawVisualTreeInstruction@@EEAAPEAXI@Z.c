/*
 * XREFs of ??_ECDrawVisualTreeInstruction@@EEAAPEAXI@Z @ 0x1800195B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawVisualTreeInstruction@@EEAA@XZ @ 0x18001960C (--1CDrawVisualTreeInstruction@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CDrawVisualTreeInstruction *__fastcall CDrawVisualTreeInstruction::`vector deleting destructor'(
        CDrawVisualTreeInstruction *this,
        char a2)
{
  CDrawVisualTreeInstruction::~CDrawVisualTreeInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x18uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDrawVisualTreeInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
