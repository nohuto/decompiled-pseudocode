/*
 * XREFs of ??4?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDDisplaySwapChain@@@Z @ 0x180282BE0
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180283F0C (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v2; // rdi
  volatile signed __int32 *v4; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 4));
  if ( v2 )
  {
    v4 = v2 + 4;
    if ( _InterlockedExchangeAdd(v2 + 4, 0xFFFFFFFF) == 1 )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 4));
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 208LL))(v2);
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      {
        --*v4;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 200LL))(v2, 1LL);
      }
    }
  }
  return a1;
}
