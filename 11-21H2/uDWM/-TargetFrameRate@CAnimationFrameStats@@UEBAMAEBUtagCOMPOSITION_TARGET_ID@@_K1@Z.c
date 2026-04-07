/*
 * XREFs of ?TargetFrameRate@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x18010A9E0
 * Callers:
 *     ?TargetFrameRate@CAnimationFrameStats@@WII@EBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180064560 (-TargetFrameRate@CAnimationFrameStats@@WII@EBAMAEBUtagCOMPOSITION_TARGET_ID@@_K1@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __fastcall CAnimationFrameStats::TargetFrameRate(
        CAnimationFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  return CCompFrameStats::TargetFrameRate(this, a2, a3, a4);
}
