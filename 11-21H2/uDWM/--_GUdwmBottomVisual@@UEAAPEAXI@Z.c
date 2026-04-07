/*
 * XREFs of ??_GUdwmBottomVisual@@UEAAPEAXI@Z @ 0x1800102A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x180026A30 (--1CVisual@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
UdwmBottomVisual *__fastcall UdwmBottomVisual::`scalar deleting destructor'(UdwmBottomVisual *this, char a2)
{
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x100uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, UdwmBottomVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
