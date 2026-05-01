/*
 * XREFs of ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlSnapAssistViewController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18061202C
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlSnapAssistViewController@@WCI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180211F40 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180211F40.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlSnapAssistViewController@@WJI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180211F60 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180211F60.c)
 * Callees:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18060E9C4 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAPE$AA.c)
 */

__int64 __fastcall ___abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlSnapAssistViewController__UE_AAAJPEAPE_AAUIWeakReference_23__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *(_BYTE *)(a1 + 416) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0LL;
    *a2 = _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlAltTabViewController__UE_AAAPE_AAUIWeakReference_23_XZ(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
