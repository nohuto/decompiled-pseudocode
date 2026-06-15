/*
 * XREFs of _FillAuxiliaryInputInitStruct_::_1_::dtor$3 @ 0x14004F4BF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FillAuxiliaryInputInitStruct_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 64);
}
