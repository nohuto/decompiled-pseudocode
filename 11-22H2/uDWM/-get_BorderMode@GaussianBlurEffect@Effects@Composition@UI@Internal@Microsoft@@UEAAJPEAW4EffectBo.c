/*
 * XREFs of ?get_BorderMode@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAW4EffectBorderMode@23456@@Z @ 0x180059BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::get_BorderMode(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        enum Microsoft::Internal::UI::Composition::Effects::EffectBorderMode *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 12);
  return 0LL;
}
