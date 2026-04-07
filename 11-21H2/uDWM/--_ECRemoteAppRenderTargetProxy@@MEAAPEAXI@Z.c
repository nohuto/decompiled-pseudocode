/*
 * XREFs of ??_ECRemoteAppRenderTargetProxy@@MEAAPEAXI@Z @ 0x1800A9950
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180026818 (--1CResourceProxy@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

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
