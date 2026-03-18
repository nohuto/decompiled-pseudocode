/*
 * XREFs of ?CurrentThreadOwnsTokenManagerLock@CTokenManager@@IEBA_NXZ @ 0x1C002C984
 * Callers:
 *     ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x1C0075B10 (-AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTokenManager::CurrentThreadOwnsTokenManagerLock(struct _KTHREAD **this)
{
  return KeGetCurrentThread() == this[13];
}
