/*
 * XREFs of ?GetNamedPropertyMapping@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJPEBGPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@3Graphics@6@@Z @ 0x180131B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Effects::SceneLightingEffect::Api::GetNamedPropertyMapping(
        Windows::UI::Composition::Effects::SceneLightingEffect::Api *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        enum Windows::Graphics::Effects::GRAPHICS_EFFECT_PROPERTY_MAPPING *a4)
{
  if ( !(unsigned int)_o__wcsicmp(a2, L"AmbientAmount") )
  {
    *a3 = 0;
LABEL_11:
    *(_DWORD *)a4 = 1;
    return 0LL;
  }
  if ( !(unsigned int)_o__wcsicmp(a2, L"DiffuseAmount") )
  {
    *a3 = 1;
    goto LABEL_11;
  }
  if ( !(unsigned int)_o__wcsicmp(a2, L"SpecularShine") )
  {
    *a3 = 2;
    goto LABEL_11;
  }
  if ( !(unsigned int)_o__wcsicmp(a2, L"SpecularAmount") )
  {
    *a3 = 3;
    goto LABEL_11;
  }
  if ( !(unsigned int)_o__wcsicmp(a2, L"ReflectanceModel") )
  {
    *a3 = 4;
    goto LABEL_11;
  }
  return 2147942487LL;
}
