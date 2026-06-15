/*
 * XREFs of ?GetSupportedVolumeStepping@TelephonyController@@AEAAJXZ @ 0x180166A54
 * Callers:
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x180166458 (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 * Callees:
 *     ?GetSupportedVolumeSteppingForKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING_LONG@@@Z @ 0x180166A9C (-GetSupportedVolumeSteppingForKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING.c)
 */

__int64 __fastcall TelephonyController::GetSupportedVolumeStepping(TelephonyController *this, unsigned int a2)
{
  unsigned int v3; // ebx
  int SupportedVolumeSteppingForKsTopology; // eax

  v3 = 0;
  SupportedVolumeSteppingForKsTopology = GetSupportedVolumeSteppingForKsTopology(
                                           (const struct _GUID *)this,
                                           a2,
                                           *((struct IKsControl **)this + 24),
                                           (struct KSPROPERTY_STEPPING_LONG *)((char *)this + 200));
  if ( SupportedVolumeSteppingForKsTopology >= 0 )
    *((_DWORD *)this + 54) = 1;
  else
    return (unsigned int)SupportedVolumeSteppingForKsTopology;
  return v3;
}
