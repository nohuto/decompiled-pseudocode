/*
 * XREFs of ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C009E9F0
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C009E8D0 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C009E908 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     UnInitializeInputComponents @ 0x1C009EA30 (UnInitializeInputComponents.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00BFD40 (-CleanupDomainLocks@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::Uninitialize(PVOID *this)
{
  struct _ERESOURCE *v2; // rcx

  v2 = (struct _ERESOURCE *)*this;
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    ExFreePoolWithTag(*this, 0);
    *this = 0LL;
  }
}
