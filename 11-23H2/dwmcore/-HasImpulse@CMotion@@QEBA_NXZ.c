/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x180264AD0
 * Callers:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x180232954 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x18026E7F4 (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 10) != 0.0;
}
