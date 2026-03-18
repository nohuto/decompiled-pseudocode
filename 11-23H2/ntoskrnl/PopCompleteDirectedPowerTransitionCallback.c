/*
 * XREFs of PopCompleteDirectedPowerTransitionCallback @ 0x140590414
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x14058969C (PopFxCompleteDirectedPowerTransition.c)
 *     PopIssueDirectedPowerTransition @ 0x14098BCE0 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1402B71A0 (KeReleaseSemaphoreEx.c)
 *     PoFxIdleDevice @ 0x140322F7C (PoFxIdleDevice.c)
 *     PopCompleteNotifyTransitionCommon @ 0x14059049C (PopCompleteNotifyTransitionCommon.c)
 */

__int64 __fastcall PopCompleteDirectedPowerTransitionCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int v6; // esi

  v4 = 0LL;
  v6 = *(_DWORD *)(a2 + 4);
  if ( (int)a3 < 0 )
    v4 = *(_QWORD *)(a1 + 96);
  PopCompleteNotifyTransitionCommon(a2, *(_QWORD *)(a1 + 48) + 160LL, a3, v4);
  if ( *(_BYTE *)a2 == 2 && v6 == 1 )
    PoFxIdleDevice(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
  return KeReleaseSemaphoreEx(*(_QWORD *)(a2 + 40), 0, 1);
}
