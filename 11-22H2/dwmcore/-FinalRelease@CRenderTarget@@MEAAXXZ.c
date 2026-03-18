/*
 * XREFs of ?FinalRelease@CRenderTarget@@MEAAXXZ @ 0x180104C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTarget::FinalRelease(CRenderTarget *this)
{
  CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 216LL), this);
}
