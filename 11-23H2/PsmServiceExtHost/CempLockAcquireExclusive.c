/*
 * XREFs of CempLockAcquireExclusive @ 0x18001D7D0
 * Callers:
 *     CrmGlobalsPeriodicNotifier @ 0x18004B620 (CrmGlobalsPeriodicNotifier.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall CempLockAcquireExclusive(__int64 a1)
{
  DWORD result; // eax

  RtlAcquireSRWLockExclusive(a1);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
