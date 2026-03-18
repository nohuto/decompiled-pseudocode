/*
 * XREFs of ?ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x180204740
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1802034A4 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x180203C5C (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E0C0C (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CComputeScribbleFramebuffer::ClearScribbles(CComputeScribbleFramebuffer *this)
{
  RTL_SRWLOCK *v1; // rdi

  v1 = (RTL_SRWLOCK *)((char *)this + 64);
  AcquireSRWLockExclusive((PSRWLOCK)this + 8);
  wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this + 9);
  *((_BYTE *)this + 240) = 0;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
