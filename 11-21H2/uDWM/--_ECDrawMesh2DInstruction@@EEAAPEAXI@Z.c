/*
 * XREFs of ??_ECDrawMesh2DInstruction@@EEAAPEAXI@Z @ 0x1800BB940
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDrawMesh2DInstruction@@EEAA@XZ @ 0x1800BB8E0 (--1CDrawMesh2DInstruction@@EEAA@XZ.c)
 */

CDrawMesh2DInstruction *__fastcall CDrawMesh2DInstruction::`vector deleting destructor'(
        CDrawMesh2DInstruction *this,
        char a2)
{
  CDrawMesh2DInstruction::~CDrawMesh2DInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDrawMesh2DInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
