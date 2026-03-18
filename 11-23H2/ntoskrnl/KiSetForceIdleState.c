/*
 * XREFs of KiSetForceIdleState @ 0x14057D294
 * Callers:
 *     KiUpdateTime @ 0x1402C36A0 (KiUpdateTime.c)
 *     KiCheckAndRearmForceIdle @ 0x14036E674 (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x14057CBA0 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x14057CC94 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x14057CE60 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14057CF20 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x14057D14C (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x1405911C4 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
