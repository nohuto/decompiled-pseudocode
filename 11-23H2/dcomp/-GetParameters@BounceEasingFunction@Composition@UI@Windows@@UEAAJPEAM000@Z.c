/*
 * XREFs of ?GetParameters@BounceEasingFunction@Composition@UI@Windows@@UEAAJPEAM000@Z @ 0x180090F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::BounceEasingFunction::GetParameters(
        Windows::UI::Composition::BounceEasingFunction *this,
        float *a2,
        float *a3,
        float *a4,
        float *a5)
{
  *a2 = (float)*((int *)this + 42);
  *a3 = (float)*((int *)this + 43);
  *a4 = *((float *)this + 44);
  *a5 = 0.0;
  return 0LL;
}
