/*
 * XREFs of _CWindowList::_CWindowList_::_1_::dtor$0 @ 0x180108CE9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall CWindowList::_CWindowList_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::~CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>((PRTL_GENERIC_TABLE)(*(_QWORD *)(a2 + 80) + 8LL));
}
