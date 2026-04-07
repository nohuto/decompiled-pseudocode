/*
 * XREFs of ??_GCWindowBorder@@UEAAPEAXI@Z @ 0x1800380F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowBorder@@UEAA@XZ @ 0x18003814C (--1CWindowBorder@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CWindowBorder *__fastcall CWindowBorder::`scalar deleting destructor'(CWindowBorder *this, char a2)
{
  CWindowBorder::~CWindowBorder(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x160uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CWindowBorder *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
