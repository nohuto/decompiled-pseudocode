/*
 * XREFs of ?EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z @ 0x1801B5E44
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18008D99C (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180076268 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x1801D7568 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x180213B14 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 */

void __fastcall CPreComputeContext::SubTreeContext::EndWalk(CVisualTree **this, int a2)
{
  CVisualTree::EndPreCompute(this[54], a2);
  CBspPreComputeHelper::CleanupAfterWalking((CBspPreComputeHelper *)this);
  if ( *((_BYTE *)this + 448) )
  {
    CThreadContext::UnregisterGraphWalkRoot();
    *((_BYTE *)this + 448) = 0;
  }
}
