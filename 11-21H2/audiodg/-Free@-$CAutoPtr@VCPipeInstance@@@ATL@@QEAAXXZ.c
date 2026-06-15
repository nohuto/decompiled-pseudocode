/*
 * XREFs of ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000A8E8
 * Callers:
 *     ??1CFormatConverterPipe@@QEAA@XZ @ 0x140008150 (--1CFormatConverterPipe@@QEAA@XZ.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140008180 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x14000A068 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B748 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14001327C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ??1CStreamInstance@@QEAA@XZ @ 0x1400249B4 (--1CStreamInstance@@QEAA@XZ.c)
 *     ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140050AB0 (--1-$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14005944C (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140059894 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005F450 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140062844 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000A92C (--1CPipeInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CAutoPtr<CPipeInstance>::Free(CPipeInstance **a1)
{
  CPipeInstance *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CPipeInstance::~CPipeInstance(*a1);
    operator delete(v1);
  }
  *a1 = 0LL;
}
