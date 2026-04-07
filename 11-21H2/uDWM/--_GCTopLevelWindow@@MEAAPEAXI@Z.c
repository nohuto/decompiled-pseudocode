/*
 * XREFs of ??_GCTopLevelWindow@@MEAAPEAXI@Z @ 0x1800100E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180028668 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CTopLevelWindow *__fastcall CTopLevelWindow::`scalar deleting destructor'(CTopLevelWindow *this, char a2)
{
  CTopLevelWindow::~CTopLevelWindow(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x380uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CTopLevelWindow *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
