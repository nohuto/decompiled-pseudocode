/*
 * XREFs of _FillAuxiliaryInputInitStruct_::_1_::dtor$2 @ 0x14004F4B3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FillAuxiliaryInputInitStruct_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 48));
}
