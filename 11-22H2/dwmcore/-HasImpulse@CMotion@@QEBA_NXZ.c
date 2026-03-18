/*
 * XREFs of ?HasImpulse@CMotion@@QEBA_NXZ @ 0x1802650B0
 * Callers:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x180232F58 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsInMotion@CMotion@@QEBA_NXZ @ 0x18026EDD4 (-IsInMotion@CMotion@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMotion::HasImpulse(CMotion *this)
{
  return *((float *)this + 10) != 0.0;
}
