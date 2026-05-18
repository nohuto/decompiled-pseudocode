/*
 * XREFs of _Spectre::Engine::ResourceManager::ResourceManager_::_1_::dtor$1 @ 0x1800E841D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ResourceManager::ResourceManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::mutex::~mutex((_Mtx_t)(*(_QWORD *)(a2 + 48) + 24LL));
}
