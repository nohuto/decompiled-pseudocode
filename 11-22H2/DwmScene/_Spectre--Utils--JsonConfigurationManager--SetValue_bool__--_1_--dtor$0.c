/*
 * XREFs of _Spectre::Utils::JsonConfigurationManager::SetValue_bool__::_1_::dtor$0 @ 0x1800E74DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Spectre::Utils::JsonConfigurationManager::SetValue_bool__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>((_Mtx_t *)(a2 + 72));
}
