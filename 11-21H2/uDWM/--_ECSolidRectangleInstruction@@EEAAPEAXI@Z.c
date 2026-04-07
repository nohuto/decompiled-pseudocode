/*
 * XREFs of ??_ECSolidRectangleInstruction@@EEAAPEAXI@Z @ 0x180012C90
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CSolidRectangleInstruction *__fastcall CSolidRectangleInstruction::`vector deleting destructor'(
        CSolidRectangleInstruction *this,
        char a2)
{
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x30uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CSolidRectangleInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
