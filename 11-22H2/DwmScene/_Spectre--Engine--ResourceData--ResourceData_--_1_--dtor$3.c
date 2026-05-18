/*
 * XREFs of _Spectre::Engine::ResourceData::ResourceData_::_1_::dtor$3 @ 0x1800EAB7F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ResourceData::ResourceData_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  std::mutex::~mutex((_Mtx_t)(*(_QWORD *)(a2 + 48) + 48LL));
}
