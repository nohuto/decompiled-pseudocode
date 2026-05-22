/*
 * XREFs of ?TargetFrameRate@CInteractionFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1801A4410
 * Callers:
 *     ?TargetFrameRate@CAnimationFrameStats@@WKA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B17E0 (-TargetFrameRate@CAnimationFrameStats@@WKA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 *     ?TargetFrameRate@CInteractionFrameStats@@WBGA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x1800B1B60 (-TargetFrameRate@CInteractionFrameStats@@WBGA@EBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __fastcall CInteractionFrameStats::TargetFrameRate(
        CInteractionFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetFrameRate(this, a2, a3, a4);
}
