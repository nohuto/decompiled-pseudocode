/*
 * XREFs of ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002A2F8
 * Callers:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140009DBC (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140012210 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400129B4 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140016320 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140025C20 (-GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002A16C (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProce.c)
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005939C (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14005BDE0 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z @ 0x1400629D0 (-PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z.c)
 *     ?SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z @ 0x140062D80 (-SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(_QWORD *a1)
{
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  return *a1 + 16LL;
}
