/*
 * XREFs of ??_EUdwmDcompVisual@@UEAAPEAXI@Z @ 0x180036C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1UdwmDcompVisual@@UEAA@XZ @ 0x180036CCC (--1UdwmDcompVisual@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
UdwmDcompVisual *__fastcall UdwmDcompVisual::`vector deleting destructor'(UdwmDcompVisual *this, char a2)
{
  UdwmDcompVisual::~UdwmDcompVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x50uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, UdwmDcompVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
