/*
 * XREFs of ??_GCDrawTileImageInstruction@@EEAAPEAXI@Z @ 0x180038460
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawTileImageInstruction@@EEAA@XZ @ 0x1800383F8 (--1CDrawTileImageInstruction@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CDrawTileImageInstruction *__fastcall CDrawTileImageInstruction::`scalar deleting destructor'(
        CDrawTileImageInstruction *this,
        char a2)
{
  CDrawTileImageInstruction::~CDrawTileImageInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x38uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDrawTileImageInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
