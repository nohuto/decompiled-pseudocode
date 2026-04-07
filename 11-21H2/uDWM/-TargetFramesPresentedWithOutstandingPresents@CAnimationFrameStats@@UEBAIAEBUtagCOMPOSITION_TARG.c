/*
 * XREFs of ?TargetFramesPresentedWithOutstandingPresents@CAnimationFrameStats@@UEBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010AA30
 * Callers:
 *     ?TargetFramesPresentedWithOutstandingPresents@CAnimationFrameStats@@WII@EBAIAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180064600 (-TargetFramesPresentedWithOutstandingPresents@CAnimationFrameStats@@WII@EBAIAEBUtagCOMPOSITION_T.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CAnimationFrameStats::TargetFramesPresentedWithOutstandingPresents(
        CAnimationFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetFramesPresentedWithOutstandingPresents(this, a2, a3, a4);
}
