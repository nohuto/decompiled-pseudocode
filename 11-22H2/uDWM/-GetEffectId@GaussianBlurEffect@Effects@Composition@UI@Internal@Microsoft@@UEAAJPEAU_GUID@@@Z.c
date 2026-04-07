/*
 * XREFs of ?GetEffectId@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAU_GUID@@@Z @ 0x180059AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GetEffectId(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = CLSID_D2D1GaussianBlur;
  return result;
}
