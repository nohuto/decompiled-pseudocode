/*
 * XREFs of ?GetEffectId@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJPEAU_GUID@@@Z @ 0x180090150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Effects::SceneLightingEffect::Api::GetEffectId(
        Windows::UI::Composition::Effects::SceneLightingEffect::Api *this,
        struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)xmmword_1801EFD70;
  return result;
}
