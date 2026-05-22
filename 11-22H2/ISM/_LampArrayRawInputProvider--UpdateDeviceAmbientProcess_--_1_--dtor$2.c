/*
 * XREFs of _LampArrayRawInputProvider::UpdateDeviceAmbientProcess_::_1_::dtor$2 @ 0x1800631DB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LampArrayRawInputProvider::UpdateDeviceAmbientProcess_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<unsigned int [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned int [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 48));
}
