/*
 * XREFs of ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VirtualDesktopSwitcherController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18078CABC
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VirtualDesktopSwitcherController@@WCI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1802B2A60 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1802B2A60.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@VirtualDesktopSwitcherController@@WJI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1802B2A80 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1802B2A80.c)
 * Callees:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x1802ED1AC (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAPE$AA.c)
 */

__int64 __fastcall ___abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference__QIWeakReferenceSource_Details_Platform__VirtualDesktopSwitcherController__UE_AAAJPEAPE_AAUIWeakReference_23__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *(_BYTE *)(a1 + 224) )
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
