/*
 * XREFs of _SpectrumListener::SpectrumListener_::_1_::dtor$2 @ 0x1800D02C3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpectrumListener::SpectrumListener_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::unique_ptr<SpeechRuntimeListener>::~unique_ptr<SpeechRuntimeListener>(*(_QWORD *)(a2 + 48) + 32LL);
}
