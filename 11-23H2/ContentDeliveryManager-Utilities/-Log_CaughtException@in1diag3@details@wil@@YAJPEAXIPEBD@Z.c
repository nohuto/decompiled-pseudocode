/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180038F04
 * Callers:
 *     __lambda_ff6e8a7a35a946ff825a6255df1412b0_::operator()_::_1_::catch$25 @ 0x1800D55D6 (__lambda_ff6e8a7a35a946ff825a6255df1412b0_--operator()_--_1_--catch$25.c)
 *     _Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded_::_1_::catch$2 @ 0x1800D56A3 (_Mobility--Pinning--CreateYourPhoneTaskbarIconIfNeeded_--_1_--catch$2.c)
 *     __lambda_c4f33cd8951f7dbea74fc386c4e48681_::operator()_::_1_::catch$3 @ 0x1800D717B (__lambda_c4f33cd8951f7dbea74fc386c4e48681_--operator()_--_1_--catch$3.c)
 *     __lambda_2547995382f4e95e159e6de1c858c05c_::operator()_::_1_::catch$6 @ 0x1800D9927 (__lambda_2547995382f4e95e159e6de1c858c05c_--operator()_--_1_--catch$6.c)
 *     _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::catch$14 @ 0x1800DA29A (_CreativeFramework--RuleSetHandlers--DiagTrackRuleSetHandler--RemoveRule_--_1_--catch$14.c)
 *     __lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator()_::_1_::catch$1 @ 0x1800DA41C (__lambda_de7ca9b0ec13d6a85971aebf8330bbf3_--operator()_--_1_--catch$1.c)
 *     _CreativeFramework::Actions::IsMsaConnected_::_1_::catch$26 @ 0x1800DAB10 (_CreativeFramework--Actions--IsMsaConnected_--_1_--catch$26.c)
 *     _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::catch$10 @ 0x1800DB295 (_CreativeFramework--Actions--SwapStartTileService--EnumerateAliasMap_--_1_--catch$10.c)
 *     _CreativeFramework::Actions::LaunchCortanaService::LaunchCortana_::_1_::catch$19 @ 0x1800DBF72 (_CreativeFramework--Actions--LaunchCortanaService--LaunchCortana_--_1_--catch$19.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ActivateSubscription_::_1_::catch$4 @ 0x1800DCBFF (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ActivateSubscription_--_1_--ca.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$22 @ 0x1800DD27F (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800DD27F.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180027F78 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
