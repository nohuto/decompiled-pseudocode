/*
 * XREFs of ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18002F4D4
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180006730 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006E90 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007E90 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18000B180 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180012290 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     PbmGetSoundLevel @ 0x180031400 (PbmGetSoundLevel.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall SoundLevelToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return L"SNDLVL_Muted";
  v1 = a1 - 1;
  if ( !v1 )
    return L"SNDLVL_Low";
  if ( v1 == 1 )
    return L"SNDLVL_Full";
  return L"Unknown level";
}
