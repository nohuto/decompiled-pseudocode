/*
 * XREFs of ?Commit@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXXZ @ 0x1800A1D90
 * Callers:
 *     <none>
 * Callees:
 *     ?wnf_publish@wil@@YAXAEBU_WNF_STATE_NAME@@@Z @ 0x18006C21C (-wnf_publish@wil@@YAXAEBU_WNF_STATE_NAME@@@Z.c)
 */

void __fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::Commit(
        CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler *this,
        const struct _WNF_STATE_NAME *a2)
{
  if ( *((_BYTE *)this + 24) )
    wil::wnf_publish((wil *)&WNF_SHEL_SOFTLANDING_RULES_UPDATED, a2);
}
