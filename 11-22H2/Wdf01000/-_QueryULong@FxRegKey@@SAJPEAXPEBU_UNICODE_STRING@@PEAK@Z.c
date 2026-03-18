/*
 * XREFs of ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00014A8
 * Callers:
 *     imp_WdfRegistryQueryULong @ 0x1C0001610 (imp_WdfRegistryQueryULong.c)
 *     ?FxIFRGetSettings@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAKPEAE3@Z @ 0x1C0022524 (-FxIFRGetSettings@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAKPEAE3@Z.c)
 *     GetEnhancedVerifierOptions @ 0x1C002C77C (GetEnhancedVerifierOptions.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C00440CC (FxLibraryGlobalsQueryRegistrySettings.c)
 *     FxOverrideDefaultVerifierSettings @ 0x1C004435C (FxOverrideDefaultVerifierSettings.c)
 *     FxRegistrySettingsInitialize @ 0x1C00443BC (FxRegistrySettingsInitialize.c)
 *     FxVerifierGetObjectDebugInfo @ 0x1C00449C4 (FxVerifierGetObjectDebugInfo.c)
 *     FxVerifierQueryStateSeparationDetection @ 0x1C0044BB4 (FxVerifierQueryStateSeparationDetection.c)
 *     FxVerifierQueryTrackPower @ 0x1C0044C5C (FxVerifierQueryTrackPower.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C00484D0 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C006B714 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0079134 (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FxRegKey::_QueryULong(void *Key, _UNICODE_STRING *ValueName, unsigned int *Value)
{
  NTSTATUS result; // eax
  unsigned int length; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  length = 16;
  result = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, buffer, 0x10u, &length);
  if ( (int)(result + 0x80000000) < 0 || result == -2147483643 )
  {
    if ( *(_DWORD *)&buffer[4] == 4 )
    {
      if ( result >= 0 )
        *Value = *(_DWORD *)&buffer[12];
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
