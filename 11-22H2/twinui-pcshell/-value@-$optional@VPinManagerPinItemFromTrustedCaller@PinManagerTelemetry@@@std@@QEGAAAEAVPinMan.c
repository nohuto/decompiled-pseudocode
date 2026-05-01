/*
 * XREFs of ?value@?$optional@VPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@@std@@QEGAAAEAVPinManagerPinItemFromTrustedCaller@PinManagerTelemetry@@XZ @ 0x1802534D0
 * Callers:
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A41A0 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<PinManagerTelemetry::PinManagerPinItemFromTrustedCaller>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 320) )
    std::_Throw_bad_optional_access();
  return a1;
}
