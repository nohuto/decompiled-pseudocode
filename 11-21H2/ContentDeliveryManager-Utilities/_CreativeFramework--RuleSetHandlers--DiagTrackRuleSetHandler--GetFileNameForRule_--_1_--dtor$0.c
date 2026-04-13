/*
 * XREFs of _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::GetFileNameForRule_::_1_::dtor$0 @ 0x1800F3A67
 * Callers:
 *     <none>
 * Callees:
 *     ??1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ @ 0x180057CF0 (--1Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@XZ.c)
 */

void __fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::GetFileNameForRule_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    CreativeFramework::TargetedContentLayoutHelpers::Tile::~Tile(*(void ***)(a2 + 72));
  }
}
