/*
 * XREFs of _CWindowList::ImmediateDestroyWindow_::_1_::dtor$1 @ 0x180067B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::ImmediateDestroyWindow_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)(a2 + 128));
}
