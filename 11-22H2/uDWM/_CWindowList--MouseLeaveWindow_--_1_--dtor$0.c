/*
 * XREFs of _CWindowList::MouseLeaveWindow_::_1_::dtor$0 @ 0x18010B2E2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::MouseLeaveWindow_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)(a2 + 80));
}
