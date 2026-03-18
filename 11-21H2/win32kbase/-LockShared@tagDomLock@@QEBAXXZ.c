/*
 * XREFs of ?LockShared@tagDomLock@@QEBAXXZ @ 0x1C008DF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagDomLock::LockShared(PERESOURCE *this)
{
  ExEnterCriticalRegionAndAcquireResourceShared(*this);
}
