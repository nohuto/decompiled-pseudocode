/*
 * XREFs of sub_180155598 @ 0x180155598
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180155598(TouchKeyboardExperienceManager *a1, struct IProfferService *a2)
{
  char v2; // of
  __int64 v3; // rsi
  __int16 v4; // fps

  if ( !v2 )
    JUMPOUT(0x1801555DBLL);
  *(_WORD *)(5 * v3) = v4;
  return TouchKeyboardExperienceManager::ShutdownServices(a1, a2);
}
