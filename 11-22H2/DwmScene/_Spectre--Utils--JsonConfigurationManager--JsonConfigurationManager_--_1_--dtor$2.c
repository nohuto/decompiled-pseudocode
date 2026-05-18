/*
 * XREFs of _Spectre::Utils::JsonConfigurationManager::JsonConfigurationManager_::_1_::dtor$2 @ 0x1800F1DD8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Utils::JsonConfigurationManager::JsonConfigurationManager_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  std::mutex::~mutex((_Mtx_t)(*(_QWORD *)(a2 + 48) + 64LL));
}
