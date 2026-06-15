/*
 * XREFs of ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000EDC8
 * Callers:
 *     ?AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x140007430 (-AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x140007560 (-AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z @ 0x140008510 (-DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x14000BF30 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x14000C9F0 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000CFA0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000DC90 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000DF80 (-RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E270 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E820 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000EF90 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x140093520 (-Reset@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x1400936A0 (-Start@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x1400937C0 (-Stop@CSpatialCrossProcessControl@@UEAAJXZ.c)
 *     ?GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z @ 0x140093900 (-GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z.c)
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x140093A10 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x140094BE0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CCritSecLock::Lock(LPCRITICAL_SECTION *this)
{
  EnterCriticalSection(*this);
  *((_BYTE *)this + 8) = 1;
}
