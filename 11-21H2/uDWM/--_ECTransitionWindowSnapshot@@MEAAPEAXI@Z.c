/*
 * XREFs of ??_ECTransitionWindowSnapshot@@MEAAPEAXI@Z @ 0x18004EA10
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x18004EA6C (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CTransitionWindowSnapshot *__fastcall CTransitionWindowSnapshot::`vector deleting destructor'(
        CTransitionWindowSnapshot *this,
        char a2)
{
  CTransitionWindowSnapshot::~CTransitionWindowSnapshot(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CTransitionWindowSnapshot *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
