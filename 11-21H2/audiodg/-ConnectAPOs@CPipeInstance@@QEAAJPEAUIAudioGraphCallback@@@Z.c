/*
 * XREFs of ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140015C54
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400089B0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14001BB60 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005F450 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140062844 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400140E0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x140015CCC (-ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x140015E90 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140016320 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::ConnectAPOs(CPipeInstance *this, struct IAudioGraphCallback *a2)
{
  int APOConnectionList; // ebx

  APOConnectionList = CPipeInstance::CreateAPOConnectionList(this);
  if ( APOConnectionList < 0
    || (APOConnectionList = CPipeInstance::InitializeAPOInterfaces(this), APOConnectionList < 0)
    || (APOConnectionList = CPipeInstance::CreateAPOConnections(this), APOConnectionList < 0)
    || (APOConnectionList = CPipeInstance::ConfigureAPOInterfaces(this, a2), APOConnectionList < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
        (unsigned int)APOConnectionList);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::ConnectAPOs", 0xBBEu, APOConnectionList);
  }
  return (unsigned int)APOConnectionList;
}
