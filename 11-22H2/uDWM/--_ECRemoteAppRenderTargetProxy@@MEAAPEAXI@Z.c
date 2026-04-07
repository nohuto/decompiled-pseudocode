/*
 * XREFs of ??_ECRemoteAppRenderTargetProxy@@MEAAPEAXI@Z @ 0x1800AE960
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180020FE8 (--1CResourceProxy@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CRemoteAppRenderTargetProxy *__fastcall CRemoteAppRenderTargetProxy::`vector deleting destructor'(
        CRemoteAppRenderTargetProxy *this,
        char a2)
{
  *(_QWORD *)this = &CRemoteAppRenderTargetProxy::`vftable';
  CResourceProxy::~CResourceProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CRemoteAppRenderTargetProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
