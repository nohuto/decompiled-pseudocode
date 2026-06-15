/*
 * XREFs of ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140063838
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140008180 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140024860 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z @ 0x1400629D0 (-PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetHistoryBufferManager(struct CAudioHistoryBufferManager **a1)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  if ( InitOnceExecuteOnce(&InitOnce, (PINIT_ONCE_FN)CreateHistoryBufferManager, 0LL, 0LL) )
  {
    *a1 = (struct CAudioHistoryBufferManager *)Block;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiohistorybuffermanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
