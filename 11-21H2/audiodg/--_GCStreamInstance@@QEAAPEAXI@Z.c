/*
 * XREFs of ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140053D58
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140003970 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140008180 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ??1?$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ @ 0x14005F3EC (--1-$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005F450 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005F9D0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ??1CStreamInstance@@QEAA@XZ @ 0x1400249B4 (--1CStreamInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CStreamInstance *__fastcall CStreamInstance::`scalar deleting destructor'(CStreamInstance *this)
{
  CStreamInstance::~CStreamInstance(this);
  operator delete(this);
  return this;
}
