/*
 * XREFs of wil::details::lambda_call__lambda_f0b6db72f90930fb0e220606623a5dd0___::_lambda_call__lambda_f0b6db72f90930fb0e220606623a5dd0___ @ 0x1800D8660
 * Callers:
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DC908 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@.c)
 *     _CAudioResourceManager::RetryGetSaDeviceForExclusive_::_1_::dtor$2 @ 0x1800DCAF4 (_CAudioResourceManager--RetryGetSaDeviceForExclusive_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_f0b6db72f90930fb0e220606623a5dd0_::operator() @ 0x1800D8A98 (_lambda_f0b6db72f90930fb0e220606623a5dd0_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_f0b6db72f90930fb0e220606623a5dd0___::_lambda_call__lambda_f0b6db72f90930fb0e220606623a5dd0___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_f0b6db72f90930fb0e220606623a5dd0_::operator()();
  }
  return result;
}
