/*
 * XREFs of ??_GCAccent@@MEAAPEAXI@Z @ 0x180014E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAccent@@MEAA@XZ @ 0x180014F74 (--1CAccent@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAccent *__fastcall CAccent::`scalar deleting destructor'(CAccent *this, char a2)
{
  CAccent::~CAccent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x288uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CAccent *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
