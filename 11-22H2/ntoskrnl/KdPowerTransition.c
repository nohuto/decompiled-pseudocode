/*
 * XREFs of KdPowerTransition @ 0x140567A50
 * Callers:
 *     PopSaveHiberContext @ 0x140AA4A40 (PopSaveHiberContext.c)
 *     PopHandleNextState @ 0x140AA81DC (PopHandleNextState.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x1403AD360 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(int a1)
{
  return KdPowerTransitionEx(a1, 1);
}
