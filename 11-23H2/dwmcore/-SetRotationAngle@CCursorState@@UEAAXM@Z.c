/*
 * XREFs of ?SetRotationAngle@CCursorState@@UEAAXM@Z @ 0x18027AD90
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x18027ABA8 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::SetRotationAngle(CCursorState *this, float a2)
{
  EnterCriticalSection(&g_CursorManager);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - *((float *)this + 50)) & _xmm) > 0.0000011920929 )
  {
    *((float *)this + 6) = a2;
    *((_BYTE *)this + 20) = 1;
    CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
