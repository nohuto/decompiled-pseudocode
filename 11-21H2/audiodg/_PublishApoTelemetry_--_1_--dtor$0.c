/*
 * XREFs of _PublishApoTelemetry_::_1_::dtor$0 @ 0x140036A56
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PublishApoTelemetry_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::unique_call<void (*)(void),&void CoUninitialize(void),1>::~unique_call<void (*)(void),&void CoUninitialize(void),1>(a2 + 464);
}
