/*
 * XREFs of _CWindowList::_CWindowList_::_1_::dtor$5 @ 0x180101A59
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall CWindowList::_CWindowList_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return CGenericSet<CWindowData *>::~CGenericSet<CWindowData *>((PRTL_GENERIC_TABLE)(*(_QWORD *)(a2 + 80) + 424LL));
}
