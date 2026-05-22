/*
 * XREFs of ?GetEffectId@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJPEAU_GUID@@@Z @ 0x180090590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Effects::WhiteNoiseEffect::Api::GetEffectId(
        Windows::UI::Composition::Effects::WhiteNoiseEffect::Api *this,
        struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)xmmword_1801EFE00;
  return result;
}
