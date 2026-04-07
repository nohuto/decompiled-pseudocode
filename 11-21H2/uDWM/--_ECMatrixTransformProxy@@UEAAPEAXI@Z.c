/*
 * XREFs of ??_ECMatrixTransformProxy@@UEAAPEAXI@Z @ 0x18000E450
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CMatrixTransformProxy *__fastcall CMatrixTransformProxy::`vector deleting destructor'(
        CMatrixTransformProxy *this,
        char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CTransform3dGroupProxy::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v4 )
    CBaseObject::Release(v4);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x18uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CMatrixTransformProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
