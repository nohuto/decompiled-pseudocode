/*
 * XREFs of _Spectre::dtor$30::Engine::Engine_::_1_::dtor$30 @ 0x1800E5707
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::dtor_30::Engine::Engine_::_1_::dtor_30(__int64 a1, __int64 a2)
{
  std::mutex::~mutex((_Mtx_t)(*(_QWORD *)(a2 + 40) + 1280LL));
}
