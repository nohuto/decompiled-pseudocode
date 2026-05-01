/*
 * XREFs of ??1_Init_once_completer@std@@QEAA@XZ @ 0x18010F11C
 * Callers:
 *     ?Current@XamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AU1345678@XZ @ 0x180066930 (-Current@XamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Wind.c)
 *     ??$call_once@V_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@@Z @ 0x180067270 (--$call_once@V_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 *     std::call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___ @ 0x18010EBB4 (std--call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___.c)
 *     std::call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654___ @ 0x18020CC2C (std--call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654___.c)
 *     _std::call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654____::_1_::dtor$0 @ 0x18020CCBD (_std--call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654____--_1_--dtor$0.c)
 *     _anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy @ 0x18024002C (_anonymous_namespace_--IsWidgetsThirdPartyFeedEnabledByRegionalPolicy.c)
 *     __anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy_::_1_::dtor$0 @ 0x180240098 (__anonymous_namespace_--IsWidgetsThirdPartyFeedEnabledByRegionalPolicy_--_1_--dtor$0.c)
 *     _std::call_once__lambda_e35956ba6a8ff235f94dfb0bc6bc2b98____::_1_::dtor$0 @ 0x1802BD934 (_std--call_once__lambda_e35956ba6a8ff235f94dfb0bc6bc2b98____--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK::Current_::_1_::dtor$1 @ 0x1802C0A52 (_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--factory_implementation--XamlApplicati.c)
 *     std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___ @ 0x180531B78 (std--call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___.c)
 *     _std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1____::_1_::dtor$0 @ 0x180531C09 (_std--call_once__lambda_b845a5ef8d523a7a273348395baf5ff1____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Init_once_completer::~_Init_once_completer(std::_Init_once_completer *this)
{
  if ( !InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL) )
    abort();
}
