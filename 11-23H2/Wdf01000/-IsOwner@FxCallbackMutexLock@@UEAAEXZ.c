/*
 * XREFs of ?IsOwner@FxCallbackMutexLock@@UEAAEXZ @ 0x1C0008B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FxCallbackMutexLock::IsOwner(FxCallbackSpinLock *this)
{
  return this->m_OwnerThread == KeGetCurrentThread();
}
