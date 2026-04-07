/*
 * XREFs of _CWindowList::EndTransition_::_1_::dtor$0 @ 0x180103494
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::EndTransition_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)(a2 + 48));
}
