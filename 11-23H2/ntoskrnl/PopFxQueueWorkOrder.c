/*
 * XREFs of PopFxQueueWorkOrder @ 0x14028C1CC
 * Callers:
 *     PopFxIdleComponent @ 0x140312FC0 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x14036E7A0 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14058ABB8 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14058ADF4 (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxQueueWorkItem @ 0x14028C22C (PopFxQueueWorkItem.c)
 *     PopFxAddRefDevice @ 0x1403124A4 (PopFxAddRefDevice.c)
 */

__int64 __fastcall PopFxQueueWorkOrder(__int64 a1, ULONG_PTR a2)
{
  void *v2; // rdi
  __int64 result; // rax

  v2 = &PopFxSystemWorkPool;
  if ( (*(_DWORD *)(a2 + 824) & 0x1000) != 0 )
    v2 = &PopFxNoFaultSystemWorkPool;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 32));
  if ( (_DWORD)result == 1 )
  {
    PopFxAddRefDevice(a2);
    return PopFxQueueWorkItem(v2, a1);
  }
  return result;
}
