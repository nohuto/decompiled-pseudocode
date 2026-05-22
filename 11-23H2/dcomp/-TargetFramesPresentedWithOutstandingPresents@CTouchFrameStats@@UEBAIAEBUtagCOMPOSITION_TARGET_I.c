/*
 * XREFs of ?TargetFramesPresentedWithOutstandingPresents@CTouchFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A4460
 * Callers:
 *     ?TargetFramesPresentedWithOutstandingPresents@CInteractionFrameStats@@WKA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1880 (-TargetFramesPresentedWithOutstandingPresents@CInteractionFrameStats@@WKA@EBAIAEBUtagCOMPOSITION.c)
 *     ?TargetFramesPresentedWithOutstandingPresents@CInteractionFrameStats@@WBGA@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1C00 (-TargetFramesPresentedWithOutstandingPresents@CInteractionFrameStats@@WBGA@EBAIAEBUtagCOMPOSITIO.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CTouchFrameStats::TargetFramesPresentedWithOutstandingPresents(
        CTouchFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetFramesPresentedWithOutstandingPresents(this, a2, a3, a4);
}
