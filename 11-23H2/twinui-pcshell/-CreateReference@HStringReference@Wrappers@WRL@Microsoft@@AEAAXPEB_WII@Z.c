/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z @ 0x1802DF00E
 * Callers:
 *     ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x180547A78 (--$-0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z.c)
 *     ?EnsurePropertySet@PropertySetAssembler@@AEAAXXZ @ 0x18054807C (-EnsurePropertySet@PropertySetAssembler@@AEAAXXZ.c)
 *     ?EnsureValueFactory@PropertySetAssembler@@AEAAXXZ @ 0x180548124 (-EnsureValueFactory@PropertySetAssembler@@AEAAXXZ.c)
 *     ?GetLogo@TrayInfoTipDisplayInfo@SystemTray@@UEAAJUSize@Foundation@Windows@@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180548720 (-GetLogo@TrayInfoTipDisplayInfo@SystemTray@@UEAAJUSize@Foundation@Windows@@PEAPEAUIRandomAccessS.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18039E804 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        UINT32 a3,
        UINT32 a4)
{
  UINT32 v4; // eax
  HRESULT StringReference; // eax
  int v6; // edx
  unsigned int v7; // r8d

  v4 = a4;
  if ( a4 >= a3 )
    v4 = a3 - 1;
  StringReference = WindowsCreateStringReference(sourceString, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference, v6, v7);
    __debugbreak();
  }
}
