/*
 * XREFs of ?GetNamedPropertyMapping@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJPEBGPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@3Graphics@6@@Z @ 0x180146270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Effects::WhiteNoiseEffect::Api::GetNamedPropertyMapping(
        Windows::UI::Composition::Effects::WhiteNoiseEffect::Api *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        enum Windows::Graphics::Effects::GRAPHICS_EFFECT_PROPERTY_MAPPING *a4)
{
  unsigned int v7; // ebx
  __int64 result; // rax

  v7 = 0;
  if ( !(unsigned int)_o__wcsicmp(a2, L"Frequency") )
    goto LABEL_4;
  if ( !(unsigned int)_o__wcsicmp(a2, L"Offset") )
  {
    v7 = 1;
LABEL_4:
    *a3 = v7;
    result = 0LL;
    *(_DWORD *)a4 = 1;
    return result;
  }
  RoOriginateErrorW(2147942487LL, 0LL, L"Specified property does not exist.");
  return 2147942487LL;
}
