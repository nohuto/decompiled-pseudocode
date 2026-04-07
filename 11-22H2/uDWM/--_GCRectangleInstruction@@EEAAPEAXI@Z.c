/*
 * XREFs of ??_GCRectangleInstruction@@EEAAPEAXI@Z @ 0x1800393A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRectangleInstruction@@EEAA@XZ @ 0x180039218 (--1CRectangleInstruction@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CRectangleInstruction *__fastcall CRectangleInstruction::`scalar deleting destructor'(
        CRectangleInstruction *this,
        char a2)
{
  CRectangleInstruction::~CRectangleInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x30uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CRectangleInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
