/*
 * XREFs of ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x18021B3BC
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180219E28 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x18021BBDC (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::HasRunningDefaultScaleAnimation(CInteractionTracker *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 59);
  result = 0;
  if ( v1 )
    return *(char *)(v1 + 572) < 0;
  return result;
}
