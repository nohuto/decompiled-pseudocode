/*
 * XREFs of ??_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z @ 0x1800582D0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x18005832C (--1WindowFrame@CTopLevelWindow@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::WindowFrame::`scalar deleting destructor'(
        CTopLevelWindow::WindowFrame *this,
        char a2)
{
  CTopLevelWindow::WindowFrame::~WindowFrame(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CTopLevelWindow::WindowFrame *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
