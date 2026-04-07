/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E7654
 * Callers:
 *     _CWindowList::MoveSize_::_1_::catch$46 @ 0x180067710 (_CWindowList--MoveSize_--_1_--catch$46.c)
 *     _CWindowList::ForceUpdateScene_::_1_::catch$28 @ 0x180067A30 (_CWindowList--ForceUpdateScene_--_1_--catch$28.c)
 *     _CWindowList::ProcessAsyncDwmMessage_::_1_::catch$54 @ 0x180067BC0 (_CWindowList--ProcessAsyncDwmMessage_--_1_--catch$54.c)
 *     _CTopLevelWindow3D::StopAnimation_::_1_::catch$17 @ 0x180067C20 (_CTopLevelWindow3D--StopAnimation_--_1_--catch$17.c)
 *     _CGlobalTimeTrackVisual::OnGlobalTimeUpdated_::_1_::catch$17 @ 0x180105547 (_CGlobalTimeTrackVisual--OnGlobalTimeUpdated_--_1_--catch$17.c)
 *     _CWindowList::_CWindowList_::_1_::catch$36 @ 0x180108DF2 (_CWindowList--_CWindowList_--_1_--catch$36.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800E7024 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
