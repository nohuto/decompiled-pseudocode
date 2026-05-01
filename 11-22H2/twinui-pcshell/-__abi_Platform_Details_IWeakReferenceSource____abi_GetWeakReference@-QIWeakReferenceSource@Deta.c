/*
 * XREFs of ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18005E0C8
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@WCI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1802B0DE0 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1802B0DE0.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@WKA@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1802B0E00 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1802B0E00.c)
 * Callees:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18005E108 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@UE$AAAPE$AAU.c)
 */

__int64 __fastcall ___abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlAllUpViewController__UE_AAAJPEAPE_AAUIWeakReference_23__Z(
        __int64 a1,
        _QWORD *a2)
{
  if ( *(_BYTE *)(a1 + 224) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
    JUMPOUT(0x18033F14DLL);
  }
  *a2 = 0LL;
  *a2 = _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlAllUpViewController__UE_AAAPE_AAUIWeakReference_23_XZ();
  return 0LL;
}
