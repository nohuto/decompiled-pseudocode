/*
 * XREFs of _dynamic_atexit_destructor_for__SubmixList__ @ 0x140036E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__SubmixList__()
{
  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll(&SubmixList);
}
