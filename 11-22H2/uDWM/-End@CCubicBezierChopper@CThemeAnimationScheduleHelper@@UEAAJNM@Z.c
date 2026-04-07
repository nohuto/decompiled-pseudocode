/*
 * XREFs of ?End@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNM@Z @ 0x1800AB770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::End(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        double a2,
        float a3)
{
  *((_BYTE *)this + 120) = 1;
  return CThemeAnimationScheduleHelper::CCubicBezierChopper::ContinueTo(this, a2, a3);
}
