/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9___ @ 0x18011C1E8
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180121070 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     _lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9_::operator() @ 0x18011C714 (_lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9_--operator().c)
 */

__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v9; // xmm1_8

  for ( i = a2; i != a3; i += 8LL )
    lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9_::operator()(a4, i);
  result = a1;
  v9 = *(_QWORD *)(a4 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
