/*
 * XREFs of _MPCManagerClientFactory::CreateOnDedicatedThread_::_1_::dtor$5 @ 0x180159879
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MPCManagerClientFactory::CreateOnDedicatedThread_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 64));
}
