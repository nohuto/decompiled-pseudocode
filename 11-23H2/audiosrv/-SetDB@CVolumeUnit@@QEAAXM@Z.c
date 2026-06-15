/*
 * XREFs of ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18001BEC0
 * Callers:
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x180004BC0 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180019EF0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     wil::details::lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___::_lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___ @ 0x180126EE4 (wil--details--lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___--_lambda_call__lambda_7e1f.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180127230 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x18012790C (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x180127BFC (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x180128C20 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180129050 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180129340 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVolumeUnit::SetDB(CVolumeUnit *this, float a2)
{
  if ( *((float *)this + 5) <= a2 )
    a2 = *((float *)this + 5);
  if ( a2 <= *((float *)this + 2) )
    a2 = *((float *)this + 2);
  *((float *)this + 1) = a2;
}
