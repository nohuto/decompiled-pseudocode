/*
 * XREFs of KdPowerTransition @ 0x140568070
 * Callers:
 *     PopSaveHiberContext @ 0x140AA47F0 (PopSaveHiberContext.c)
 *     PopHandleNextState @ 0x140AA7F8C (PopHandleNextState.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x1403ADBD0 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(int a1)
{
  return KdPowerTransitionEx(a1, 1);
}
