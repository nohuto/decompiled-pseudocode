/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x14045E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x1402EEBC0 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x1405D4A94 (PopPepArmIdleTimer.c)
 */

__int64 PopPepIdleTimeoutDpcRoutine()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  result = ExQueueWorkItemEx((ULONG_PTR)&PopPepIdleWorkItem, 1u, -1);
  if ( !(_BYTE)result )
  {
    LOBYTE(v2) = 1;
    return PopPepArmIdleTimer(v2, v1, v3, v4);
  }
  return result;
}
