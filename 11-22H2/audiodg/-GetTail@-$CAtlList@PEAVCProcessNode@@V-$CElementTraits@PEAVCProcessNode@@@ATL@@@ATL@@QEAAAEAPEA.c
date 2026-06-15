/*
 * XREFs of ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14001B69C
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140013CE0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140019BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14001E010 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x1400238F8 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@.c)
 *     ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x14005F620 (-GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z.c)
 *     ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x14005F9E0 (-GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z.c)
 *     ?GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14005FB80 (-GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@.c)
 *     ?ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ @ 0x1400600E0 (-ResetEndpoint@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !v1 )
    ATL::AtlThrowImpl(-2147467259);
  return v1 + 16;
}
