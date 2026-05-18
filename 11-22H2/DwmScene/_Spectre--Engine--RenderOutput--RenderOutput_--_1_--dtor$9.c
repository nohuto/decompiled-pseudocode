/*
 * XREFs of _Spectre::Engine::RenderOutput::RenderOutput_::_1_::dtor$9 @ 0x1800E509E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::RenderOutput::RenderOutput_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  std::mutex::~mutex((_Mtx_t)(*(_QWORD *)(a2 + 128) + 304LL));
}
