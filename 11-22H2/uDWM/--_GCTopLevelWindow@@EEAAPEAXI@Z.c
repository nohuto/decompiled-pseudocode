/*
 * XREFs of ??_GCTopLevelWindow@@EEAAPEAXI@Z @ 0x1800372B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x180034FF8 (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CTopLevelWindow *__fastcall CTopLevelWindow::`scalar deleting destructor'(CTopLevelWindow *this, char a2)
{
  CTopLevelWindow::~CTopLevelWindow(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x368uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CTopLevelWindow *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
