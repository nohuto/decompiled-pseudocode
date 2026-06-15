/*
 * XREFs of ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180043548
 * Callers:
 *     ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x180042EF0 (-GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z.c)
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180042F90 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180043090 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18004356C (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?FillLevels@CVolumeControlBase@@UEAAXIPEAM@Z @ 0x1800CBC40 (-FillLevels@CVolumeControlBase@@UEAAXIPEAM@Z.c)
 *     ?GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x1800CBD30 (-GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x1800CBDE0 (-GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800CC5D0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x1800CD560 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x1800CDA94 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800CDC20 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800CDD90 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800CDF40 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800CE120 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800CE400 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z @ 0x1800CE840 (-SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z.c)
 *     ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x1800CE9A0 (-UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x1800CEAB0 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x1800CEBC0 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
        _QWORD *a1,
        unsigned __int64 a2)
{
  if ( a2 >= a1[1] )
    ATL::AtlThrowImpl(-2147024809);
  return *a1 + (a2 << 6);
}
