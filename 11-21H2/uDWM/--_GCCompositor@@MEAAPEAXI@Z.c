/*
 * XREFs of ??_GCCompositor@@MEAAPEAXI@Z @ 0x1800A9860
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CCompositor@@MEAA@XZ @ 0x1800A9804 (--1CCompositor@@MEAA@XZ.c)
 */

CCompositor *__fastcall CCompositor::`scalar deleting destructor'(CCompositor *this, char a2)
{
  CCompositor::~CCompositor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CCompositor *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
