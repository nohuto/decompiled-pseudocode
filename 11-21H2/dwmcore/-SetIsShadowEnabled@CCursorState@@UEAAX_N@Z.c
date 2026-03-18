/*
 * XREFs of ?SetIsShadowEnabled@CCursorState@@UEAAX_N@Z @ 0x18026AB00
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x18026AAB8 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::SetIsShadowEnabled(CCursorState *this, char a2)
{
  EnterCriticalSection(&g_CursorManager);
  if ( a2 != *((_BYTE *)this + 16) )
  {
    *((_BYTE *)this + 16) = a2;
    CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
