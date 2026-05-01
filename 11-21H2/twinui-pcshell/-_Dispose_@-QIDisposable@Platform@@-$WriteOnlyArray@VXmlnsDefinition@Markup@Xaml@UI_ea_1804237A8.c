/*
 * XREFs of ?_Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAXXZ @ 0x1804237A8
 * Callers:
 *     ?_Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@W7E$AAAXXZ @ 0x1801FDA80 (-_Dispose_@-QIDisposable@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00.c)
 * Callees:
 *     ??1?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@XZ @ 0x180424188 (--1-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@XZ.c)
 */

__int64 __fastcall __Dispose___QIDisposable_Platform____WriteOnlyArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAXXZ(
        __int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 72) )
  {
    *(_BYTE *)(a1 + 72) = 1;
    return Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::~WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>();
  }
  return result;
}
