/*
 * XREFs of ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006F40
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400054C0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x1400074C0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140019BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140063540 (-CreateBridgeStreamToTargetStreamGroup@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStr.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140067460 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14006829C (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400773B0 (-CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUI.c)
 * Callees:
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140006FD4 (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140013CE0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ @ 0x14001468C (-RemoveDummyProcessNodes@CPipeInstance@@AEAAXXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400168AC (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPipeInstance::Initialize(CPipeInstance *this)
{
  int v1; // eax
  int v3; // edi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 80);
  if ( v1 == 2 )
  {
    v3 = CPipeInstance::ResolveFormatConflictsLeftRight(this);
    if ( v3 < 0 )
    {
      v7 = 2534LL;
      goto LABEL_16;
    }
  }
  else if ( v1 == 1 )
  {
    v3 = CPipeInstance::ResolveFormatConflictsRightLeft(this);
    if ( v3 < 0 )
    {
      v7 = 2538LL;
      goto LABEL_16;
    }
  }
  else if ( (*(_QWORD *)this || *((_DWORD *)this + 2))
         && (*((_DWORD *)this + 28) == 3 || *((_DWORD *)this + 33) || (*((_BYTE *)this + 136) & 8) != 0) )
  {
    v3 = CPipeInstance::ResolveFormatConflictsLeftRight(this);
    if ( v3 < 0 )
    {
      v7 = 2557LL;
      goto LABEL_16;
    }
  }
  else
  {
    v3 = CPipeInstance::ResolveFormatConflictsRightLeft(this);
    if ( v3 < 0 )
    {
      v7 = 2564LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v3,
        v8);
      return (unsigned int)v3;
    }
  }
  CPipeInstance::RemoveDummyProcessNodes(this);
  v4 = CPipeInstance::FixupStreamPipe(this);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA0C,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
    (const char *)(unsigned int)v4,
    v8);
  return v5;
}
