/*
 * XREFs of _CWindowList::StartTransition_::_1_::dtor$1 @ 0x1801068A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::StartTransition_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)(a2 + 80));
}
