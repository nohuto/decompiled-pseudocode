/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1a72d8463880f0e14ce74cfee8687225___ @ 0x1800650C8
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAVCAudioSessionManager@@55PEAPEAUISaDeviceProxy@@@Z @ 0x18002786C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDev.c)
 * Callees:
 *     _lambda_1a72d8463880f0e14ce74cfee8687225_::operator() @ 0x1800655D0 (_lambda_1a72d8463880f0e14ce74cfee8687225_--operator().c)
 */

_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1a72d8463880f0e14ce74cfee8687225___(
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
      lambda_1a72d8463880f0e14ce74cfee8687225_::operator()(&v8, v5);
      v5 += 8LL;
    }
    while ( v5 != a3 );
    a4 = v8;
  }
  result = a1;
  *a1 = a4;
  return result;
}
