/*
 * XREFs of ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180008D60
 * Callers:
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

void __fastcall CCompFrameStats::CalcFrameRange(CCompFrameStats *this, unsigned __int64 *a2, unsigned __int64 *a3)
{
  if ( !*a2 )
    *a2 = *((_QWORD *)this + 11);
  if ( !*a3 )
    *a3 = *((_QWORD *)this + 12);
}
