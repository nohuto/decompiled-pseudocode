/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@UREGKEYINFO@@@std@@EEAAXXZ @ 0x1805819B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj2<REGKEYINFO>::_Destroy(__int64 a1, struct wil::details::registry_watcher_state *a2)
{
  REGKEYINFO::~REGKEYINFO((wil::details **)(a1 + 16), a2);
}
