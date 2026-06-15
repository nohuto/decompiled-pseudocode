/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_7800ae632c03a9c3e8babfed67b18905___ @ 0x18006ADC0
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAVCAudioSessionManager@@55PEAPEAUISaDeviceProxy@@@Z @ 0x180048B18 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 * Callees:
 *     _lambda_7800ae632c03a9c3e8babfed67b18905_::operator() @ 0x18006B458 (_lambda_7800ae632c03a9c3e8babfed67b18905_--operator().c)
 */

_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_7800ae632c03a9c3e8babfed67b18905___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  _QWORD *result; // rax
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = a4;
  v5 = a2;
  if ( a2 != a3 )
  {
    do
    {
      lambda_7800ae632c03a9c3e8babfed67b18905_::operator()(&v8, v5);
      v5 += 8LL;
    }
    while ( v5 != a3 );
    a4 = v8;
  }
  result = a1;
  *a1 = a4;
  return result;
}
