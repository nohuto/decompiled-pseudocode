/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_aca039a4c1c0d67c91f01794aa5cbc6c___ @ 0x1800ED5D0
 * Callers:
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18002FEE0 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     _lambda_aca039a4c1c0d67c91f01794aa5cbc6c_::operator() @ 0x1800EDB58 (_lambda_aca039a4c1c0d67c91f01794aa5cbc6c_--operator().c)
 */

__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_aca039a4c1c0d67c91f01794aa5cbc6c___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v9; // xmm1_8

  for ( i = a2; i != a3; i += 8LL )
    lambda_aca039a4c1c0d67c91f01794aa5cbc6c_::operator()(a4, i);
  result = a1;
  v9 = *(_QWORD *)(a4 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
