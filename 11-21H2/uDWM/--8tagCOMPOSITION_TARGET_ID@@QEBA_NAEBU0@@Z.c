/*
 * XREFs of ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180009750
 * Callers:
 *     ?TargetTimeToFirstFrame@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z @ 0x180008D90 (-TargetTimeToFirstFrame@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K@Z.c)
 *     ?FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180008E80 (-FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEAUtagCOMPOSITION_TAR.c)
 *     ?TargetAverageFrameDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x180008FD0 (-TargetAverageFrameDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z.c)
 *     ?TargetFrameRate@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009220 (-TargetFrameRate@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetTotalGlitchDuration@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009390 (-TargetTotalGlitchDuration@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetMaxVBlankGlitchDuration@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009470 (-TargetMaxVBlankGlitchDuration@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetFramesGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009540 (-TargetFramesGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetMaxTimeBetweenFrames@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180009660 (-TargetMaxTimeBetweenFrames@CCompFrameStats@@UEBA_KAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetAverageGlitchDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x18010AC10 (-TargetAverageGlitchDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z.c)
 *     ?TargetFramesCPUGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010AEF0 (-TargetFramesCPUGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetFramesGPUGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010AFC0 (-TargetFramesGPUGlitched@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetFramesPresented@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010B080 (-TargetFramesPresented@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetFramesPresentedWithOutstandingPresents@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010B140 (-TargetFramesPresentedWithOutstandingPresents@CCompFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID.c)
 * Callees:
 *     <none>
 */

char __fastcall tagCOMPOSITION_TARGET_ID::operator==(_DWORD *a1, _DWORD *a2)
{
  char v2; // r8
  int v3; // eax

  v2 = 0;
  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] && a1[4] == a2[4] && a1[5] == a2[5] )
  {
    v3 = a1[6];
    if ( v3 == a2[6] || !v3 || !a2[6] )
      return 1;
  }
  return v2;
}
