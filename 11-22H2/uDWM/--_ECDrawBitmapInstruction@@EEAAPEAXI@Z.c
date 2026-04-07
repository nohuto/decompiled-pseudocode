/*
 * XREFs of ??_ECDrawBitmapInstruction@@EEAAPEAXI@Z @ 0x180037EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawBitmapInstruction@@EEAA@XZ @ 0x180037DC0 (--1CDrawBitmapInstruction@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CDrawBitmapInstruction *__fastcall CDrawBitmapInstruction::`vector deleting destructor'(
        CDrawBitmapInstruction *this,
        char a2)
{
  CDrawBitmapInstruction::~CDrawBitmapInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x18uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDrawBitmapInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
