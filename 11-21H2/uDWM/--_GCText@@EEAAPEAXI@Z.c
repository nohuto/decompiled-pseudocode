/*
 * XREFs of ??_GCText@@EEAAPEAXI@Z @ 0x180046F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CText@@EEAA@XZ @ 0x180046F6C (--1CText@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CText *__fastcall CText::`scalar deleting destructor'(CText *this, char a2)
{
  CText::~CText(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x1B8uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CText *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
