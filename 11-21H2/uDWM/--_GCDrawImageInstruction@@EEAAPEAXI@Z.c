/*
 * XREFs of ??_GCDrawImageInstruction@@EEAAPEAXI@Z @ 0x18000DC70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawImageInstruction@@EEAA@XZ @ 0x18000DCCC (--1CDrawImageInstruction@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CDrawImageInstruction *__fastcall CDrawImageInstruction::`scalar deleting destructor'(
        CDrawImageInstruction *this,
        char a2)
{
  CDrawImageInstruction::~CDrawImageInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x28uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDrawImageInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
