/*
 * XREFs of ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x180203C5C
 * Callers:
 *     ?DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ @ 0x1801FB540 (-DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1802034A4 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x180203860 (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F78A0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x180204740 (-ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 */

void __fastcall CComputeScribbleScheduler::StopInternal(CComputeScribbleScheduler *this)
{
  CComputeScribbleFramebuffer **v1; // rsi
  CComputeScribbleFramebuffer **i; // rbx

  v1 = (CComputeScribbleFramebuffer **)*((_QWORD *)this + 15);
  for ( i = (CComputeScribbleFramebuffer **)*((_QWORD *)this + 14); i != v1; ++i )
    CComputeScribbleFramebuffer::ClearScribbles(*i);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 12);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 13);
}
