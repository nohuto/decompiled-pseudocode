/*
 * XREFs of wil::details::lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___::_lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___ @ 0x18006B0D8
 * Callers:
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800DCD28 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$6 @ 0x1800DD2F6 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$6.c)
 * Callees:
 *     _lambda_52036531a809c6efb737b3592d012028_::operator() @ 0x18006B260 (_lambda_52036531a809c6efb737b3592d012028_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___::_lambda_call__lambda_d5c2badceabbd589d3ac250500eeaf13___(
        __int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 result; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 40) = 0;
    v1 = *(_QWORD *)(a1 + 32);
    v2 = *(_QWORD *)(a1 + 24);
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 8);
    v6[0] = *(_QWORD *)a1;
    v6[1] = v4;
    v6[2] = v3;
    v6[3] = v2;
    v6[4] = v1;
    return lambda_52036531a809c6efb737b3592d012028_::operator()(v6);
  }
  return result;
}
