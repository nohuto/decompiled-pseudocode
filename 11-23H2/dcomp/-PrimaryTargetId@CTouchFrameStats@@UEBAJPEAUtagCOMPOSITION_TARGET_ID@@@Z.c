/*
 * XREFs of ?PrimaryTargetId@CTouchFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x18000A410
 * Callers:
 *     ?PrimaryTargetId@CTouchFrameStats@@WKA@EBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800B16C0 (-PrimaryTargetId@CTouchFrameStats@@WKA@EBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?PrimaryTargetId@CInteractionFrameStats@@WBGA@EBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800B19E0 (-PrimaryTargetId@CInteractionFrameStats@@WBGA@EBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTouchFrameStats::PrimaryTargetId(CTouchFrameStats *this, struct tagCOMPOSITION_TARGET_ID *a2)
{
  return CCompFrameStats::PrimaryTargetId(this, a2);
}
