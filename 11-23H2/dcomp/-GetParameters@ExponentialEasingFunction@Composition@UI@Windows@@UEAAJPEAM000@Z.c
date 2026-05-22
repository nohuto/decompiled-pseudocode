/*
 * XREFs of ?GetParameters@ExponentialEasingFunction@Composition@UI@Windows@@UEAAJPEAM000@Z @ 0x180090F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::ExponentialEasingFunction::GetParameters(
        Windows::UI::Composition::ExponentialEasingFunction *this,
        float *a2,
        float *a3,
        float *a4,
        float *a5)
{
  *a2 = (float)*((int *)this + 42);
  *a3 = *((float *)this + 43);
  *a4 = 0.0;
  *a5 = 0.0;
  return 0LL;
}
