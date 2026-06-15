/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14007A980
 * Callers:
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E770 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E910 (-RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x14001BCF0 (-AttachOutputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x14001CAF0 (-AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x14001F9C0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ?DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z @ 0x140024820 (-DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$0 @ 0x140034F90 (_CAudioProcessor--ActivateAPO_--_1_--dtor$0.c)
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$2 @ 0x14003536B (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$2.c)
 *     _CAudioProcessor::CommitGraphChanges_::_1_::dtor$0 @ 0x140035598 (_CAudioProcessor--CommitGraphChanges_--_1_--dtor$0.c)
 *     _CAudioProcessor::DeactivateAPO_::_1_::dtor$0 @ 0x1400363B6 (_CAudioProcessor--DeactivateAPO_--_1_--dtor$0.c)
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x14007A9B0 (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14009F2F0 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x1400A0510 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::~CCritSecLock(LPCRITICAL_SECTION *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    LeaveCriticalSection(*this);
    *((_BYTE *)this + 8) = 0;
  }
}
