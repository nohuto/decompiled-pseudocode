/*
 * XREFs of ?AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x1802044CC
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801FB7DC (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x18012DEAC (McTemplateU0xq_EventWriteTransfer.c)
 *     ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x18013171C (-SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___ @ 0x180209B70 (CComputeScribbleSynchronizer--BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___.c)
 */

void __fastcall CComputeScribbleFramebuffer::AcquireForRender(CComputeScribbleFramebuffer *this, __int64 a2)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 232);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer((__int64)this, (__int64)&EVTDESC_COMPUTESCRIBBLE_FRAMECOMPLETED);
  AcquireSRWLockExclusive((PSRWLOCK)this + 8);
  *((_QWORD *)this + 7) = CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a5058a3170b2c94992cd95324fb803e7___(*((PSRWLOCK *)this + 6));
  *v2 = a2;
  CComputeScribbleFramebuffer::SaveDirtyForPreRender((int **)this);
  if ( this != (CComputeScribbleFramebuffer *)-64LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 8);
}
