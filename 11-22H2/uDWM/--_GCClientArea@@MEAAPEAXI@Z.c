/*
 * XREFs of ??_GCClientArea@@MEAAPEAXI@Z @ 0x18001D590
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x1800220C0 (--1CVisual@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CClientArea *__fastcall CClientArea::`scalar deleting destructor'(CClientArea *this, char a2)
{
  *(_QWORD *)this = &CClientArea::`vftable';
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x100uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CClientArea *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
