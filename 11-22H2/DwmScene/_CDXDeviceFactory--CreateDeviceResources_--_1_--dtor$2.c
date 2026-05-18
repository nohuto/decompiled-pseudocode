/*
 * XREFs of _CDXDeviceFactory::CreateDeviceResources_::_1_::dtor$2 @ 0x1800E461D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDXDeviceFactory::CreateDeviceResources_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<ID3D11DeviceContext1>::~ComPtr<ID3D11DeviceContext1>((void *)(a2 + 96));
}
