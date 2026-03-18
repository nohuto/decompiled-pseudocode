/*
 * XREFs of ?UnlockAndRelease@CFlipManagerToken@@QEAAXXZ @ 0x1C0076F38
 * Callers:
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082D08 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CFlipManagerToken::UnlockAndRelease(CFlipManagerToken *this)
{
  CPushLock::ReleaseLock((CFlipManagerToken *)((char *)this + 40));
  ObfDereferenceObject((char *)this - 32);
}
