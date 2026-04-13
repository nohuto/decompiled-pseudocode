/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18003B334
 * Callers:
 *     __lambda_88e8518c21b209df1a80e5a49785653d_::operator()_::_1_::catch$41 @ 0x1800EE5FB (__lambda_88e8518c21b209df1a80e5a49785653d_--operator()_--_1_--catch$41.c)
 *     _Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded_::_1_::catch$2 @ 0x1800EE908 (_Mobility--Pinning--CreateYourPhoneTaskbarIconIfNeeded_--_1_--catch$2.c)
 *     __lambda_c4f33cd8951f7dbea74fc386c4e48681_::operator()_::_1_::catch$6 @ 0x1800F06C3 (__lambda_c4f33cd8951f7dbea74fc386c4e48681_--operator()_--_1_--catch$6.c)
 *     __lambda_2547995382f4e95e159e6de1c858c05c_::operator()_::_1_::catch$10 @ 0x1800F2F9A (__lambda_2547995382f4e95e159e6de1c858c05c_--operator()_--_1_--catch$10.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::catch$29 @ 0x1800F3B6C (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--RemoveRule_--_1_--catch$29.c)
 *     __lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator()_::_1_::catch$4 @ 0x1800F3D02 (__lambda_de7ca9b0ec13d6a85971aebf8330bbf3_--operator()_--_1_--catch$4.c)
 *     _CreativeFramework::Actions::IsMsaConnected_::_1_::catch$50 @ 0x1800F4459 (_CreativeFramework--Actions--IsMsaConnected_--_1_--catch$50.c)
 *     _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::catch$24 @ 0x1800F4BD7 (_CreativeFramework--Actions--SwapStartTileService--EnumerateAliasMap_--_1_--catch$24.c)
 *     _CreativeFramework::Actions::LaunchCortanaService::LaunchCortana_::_1_::catch$43 @ 0x1800F59B4 (_CreativeFramework--Actions--LaunchCortanaService--LaunchCortana_--_1_--catch$43.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::catch$14 @ 0x1800F65EC (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ActivateSubscription_--_1_--ca.c)
 *     _CreativeFramework::EnumerateTargetedContentTiles_::_1_::catch$37 @ 0x1800F6726 (_CreativeFramework--EnumerateTargetedContentTiles_--_1_--catch$37.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$42 @ 0x1800F6F73 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800F6F73.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800249FC (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
