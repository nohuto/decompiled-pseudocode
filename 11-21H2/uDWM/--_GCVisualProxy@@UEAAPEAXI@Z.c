/*
 * XREFs of ??_GCVisualProxy@@UEAAPEAXI@Z @ 0x1800262D0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CVisualProxy *__fastcall CVisualProxy::`scalar deleting destructor'(CVisualProxy *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CTransform3dGroupProxy::`vftable';
  v4 = *((_QWORD *)this + 2);
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x18uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CVisualProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
