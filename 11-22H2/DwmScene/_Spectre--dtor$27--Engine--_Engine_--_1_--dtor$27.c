/*
 * XREFs of _Spectre::dtor$27::Engine::_Engine_::_1_::dtor$27 @ 0x1800E5A0A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::dtor_27::Engine::_Engine_::_1_::dtor_27(__int64 a1, __int64 a2)
{
  std::mutex::~mutex((_Mtx_t)(*(_QWORD *)(a2 + 48) + 1280LL));
}
