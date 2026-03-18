/*
 * XREFs of KiSetForceIdleState @ 0x14057D324
 * Callers:
 *     KiUpdateTime @ 0x1402C3670 (KiUpdateTime.c)
 *     KiCheckAndRearmForceIdle @ 0x14036E024 (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x14057CC30 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x14057CD24 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x14057CEF0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14057CFB0 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x14057D1DC (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x140591254 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
