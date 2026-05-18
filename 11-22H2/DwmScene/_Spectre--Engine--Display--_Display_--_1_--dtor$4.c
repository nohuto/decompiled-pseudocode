/*
 * XREFs of _Spectre::Engine::Display::_Display_::_1_::dtor$4 @ 0x1800E76DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::Display::_Display_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  std::thread::~thread((std::thread *)(*(_QWORD *)(a2 + 80) + 104LL));
}
