/*
 * XREFs of ??_GCAnimationProxy@@UEAAPEAXI@Z @ 0x180008A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180026818 (--1CResourceProxy@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAnimationProxy *__fastcall CAnimationProxy::`scalar deleting destructor'(CAnimationProxy *this, char a2)
{
  CResourceProxy::~CResourceProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x18uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CAnimationProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
