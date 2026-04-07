/*
 * XREFs of _CContactManager::OnContact_::_1_::dtor$0 @ 0x1800AB7C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CContactManager::OnContact_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)(a2 + 64));
}
