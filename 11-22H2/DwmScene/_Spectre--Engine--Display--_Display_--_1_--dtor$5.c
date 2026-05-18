/*
 * XREFs of _Spectre::Engine::Display::_Display_::_1_::dtor$5 @ 0x1800E76F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Display::_Display_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  std::mutex::~mutex((_Mtx_t)(*(_QWORD *)(a2 + 80) + 128LL));
}
