/*
 * XREFs of KiSetForceIdleState @ 0x14057D784
 * Callers:
 *     KiUpdateTime @ 0x1402C3930 (KiUpdateTime.c)
 *     KiCheckAndRearmForceIdle @ 0x14036E814 (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x14057D090 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x14057D184 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x14057D350 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14057D410 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x14057D63C (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x1405916B4 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
