/*
 * XREFs of ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002A16C
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ?EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x14002A240 (-EngageSpatialAudioStreamProcessorAPO@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002A274 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICr.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002A2F8 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::CreateStreamInstance(
        CPipeInstance *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct ICrossProcessMemory **a3,
        struct ICrossProcessEvent **a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  CStreamProcessNode **Head; // rax
  struct CProcessNode *v10; // r14
  int StreamInstance; // ebx

  Head = (CStreamProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((char *)this + 16);
  v10 = *Head;
  StreamInstance = CStreamProcessNode::CreateStreamInstance(
                     *Head,
                     a2,
                     (unsigned int)(int)((double)*((int *)this + 35)
                                       * 10000000.0
                                       / (double)*(int *)(*((_QWORD *)a2 + 16) + 4LL)
                                       + 0.5),
                     *((_DWORD *)this + 35),
                     a3,
                     a4,
                     a5);
  if ( StreamInstance < 0
    || (StreamInstance = CPipeInstance::EngageSpatialAudioStreamProcessorAPO(this, v10, a2), StreamInstance < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20LL,
        &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
        (unsigned int)StreamInstance);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateStreamInstance", 0x434u, StreamInstance);
  }
  return (unsigned int)StreamInstance;
}
