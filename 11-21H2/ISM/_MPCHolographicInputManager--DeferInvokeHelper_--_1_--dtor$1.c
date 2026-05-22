/*
 * XREFs of _MPCHolographicInputManager::DeferInvokeHelper_::_1_::dtor$1 @ 0x18009D23D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCHolographicInputManager::DeferInvokeHelper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<std::function<void (void)>>::~unique_ptr<std::function<void (void)>>((__int64 *)(a2 + 64), a2);
}
