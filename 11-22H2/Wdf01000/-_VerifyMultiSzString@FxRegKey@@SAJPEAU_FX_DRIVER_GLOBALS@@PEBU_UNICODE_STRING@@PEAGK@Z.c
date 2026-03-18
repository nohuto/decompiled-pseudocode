/*
 * XREFs of ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C004E45C
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C002CE74 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     FxVerifierReadObjectDebugInfo @ 0x1C0044CF0 (FxVerifierReadObjectDebugInfo.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C004B470 (imp_WdfRegistryQueryMultiString.c)
 * Callees:
 *     WPP_IFR_SF_Zd @ 0x1C002DB60 (WPP_IFR_SF_Zd.c)
 */

__int64 __fastcall FxRegKey::_VerifyMultiSzString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *RegValueName,
        wchar_t *DataString,
        unsigned int DataLength)
{
  const _UNICODE_STRING *_a2; // r11
  unsigned __int16 v6; // r9

  _a2 = RegValueName;
  if ( (DataLength & 1) != 0 )
  {
    v6 = 10;
  }
  else
  {
    LODWORD(RegValueName) = DataLength >> 1;
    if ( DataLength >> 1 >= 2 && !DataString[(_DWORD)RegValueName - 1] && !DataString[(_DWORD)RegValueName - 2] )
      return 0LL;
    v6 = 11;
  }
  WPP_IFR_SF_Zd(FxDriverGlobals, (unsigned __int8)RegValueName, 2u, v6, WPP_FxRegKey_cpp_Traceguids, _a2, DataLength);
  return 3221225508LL;
}
