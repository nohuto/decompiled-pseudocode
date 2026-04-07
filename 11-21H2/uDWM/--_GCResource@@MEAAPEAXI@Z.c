/*
 * XREFs of ??_GCResource@@MEAAPEAXI@Z @ 0x180026F70
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CResource *__fastcall CResource::`scalar deleting destructor'(CResource *this, char a2)
{
  *(_QWORD *)this = &CResource::`vftable';
  if ( *((_DWORD *)this + 6) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 120LL))(*((_QWORD *)this + 2));
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x20uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
