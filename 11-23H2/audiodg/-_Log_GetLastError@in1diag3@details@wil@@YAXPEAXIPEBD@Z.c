/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140074100
 * Callers:
 *     ?Initialize@CStreamInstance@@UEAAJKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J3U_GUID@@@Z @ 0x14001AEC0 (-Initialize@CStreamInstance@@UEAAJKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J3U_GUID@@@.c)
 *     ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x14001D9D0 (-Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEvent.c)
 *     ??1CAudioPump@@QEAA@XZ @ 0x1400736D4 (--1CAudioPump@@QEAA@XZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x1400735F4 (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<2>(this, a2, a3, a4, v4, retaddr);
}
