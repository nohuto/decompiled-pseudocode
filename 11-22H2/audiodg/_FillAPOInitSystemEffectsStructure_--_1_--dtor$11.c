/*
 * XREFs of _FillAPOInitSystemEffectsStructure_::_1_::dtor$11 @ 0x140035C4E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FillAPOInitSystemEffectsStructure_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 144);
}
