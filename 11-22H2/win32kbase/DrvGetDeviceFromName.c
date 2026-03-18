/*
 * XREFs of DrvGetDeviceFromName @ 0x1C005B090
 * Callers:
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C001F9B8 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001FC24 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvEnumDisplayDevices @ 0x1C0023B90 (DrvEnumDisplayDevices.c)
 *     DrvEnumDisplaySettings @ 0x1C0033CC0 (DrvEnumDisplaySettings.c)
 *     DrvGetHDEV @ 0x1C005AF70 (DrvGetHDEV.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BB234 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C0165AFC (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetPruneFlag @ 0x1C0167C4C (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C0167D98 (DrvSetVideoParameters.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1C0168EB0 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetDeviceFromName(PCUNICODE_STRING String1)
{
  __int64 i; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(String1) + 24) + 1264LL); i; i = *(_QWORD *)(i + 128) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(i + 64));
    if ( RtlEqualUnicodeString(String1, &DestinationString, 1u) )
      return i;
  }
  return 0LL;
}
