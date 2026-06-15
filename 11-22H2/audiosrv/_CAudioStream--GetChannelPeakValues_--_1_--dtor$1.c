/*
 * XREFs of _CAudioStream::GetChannelPeakValues_::_1_::dtor$1 @ 0x1800EBBC3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::GetChannelPeakValues_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::~unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>((void **)(a2 + 32));
}
