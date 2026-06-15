/*
 * XREFs of ??1?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@@wil@@QEAA@XZ @ 0x18014A770
 * Callers:
 *     _CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor$0 @ 0x18007D67A (_CEndpointCharacteristics--GetConnectorProcessingModeCharacteristicsFromDriver_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        __int64 a1)
{
  wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(a1);
}
