/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180100160
 * Callers:
 *     _CWindowList::ForceUpdateScene_::_1_::catch$31 @ 0x180065880 (_CWindowList--ForceUpdateScene_--_1_--catch$31.c)
 *     _CGlobalTimeTrackVisual::OnGlobalTimeUpdated_::_1_::catch$21 @ 0x180100278 (_CGlobalTimeTrackVisual--OnGlobalTimeUpdated_--_1_--catch$21.c)
 *     _CWindowList::_CWindowList_::_1_::catch$36 @ 0x180101B09 (_CWindowList--_CWindowList_--_1_--catch$36.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800FFEB8 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
