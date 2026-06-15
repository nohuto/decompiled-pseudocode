/*
 * XREFs of wil::details::lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___::_lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___ @ 0x180065580
 * Callers:
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180101B78 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$6 @ 0x18010209C (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$6.c)
 * Callees:
 *     _lambda_703197410533bd8a2dcb4add4cb7fb52_::operator() @ 0x180065738 (_lambda_703197410533bd8a2dcb4add4cb7fb52_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___::_lambda_call__lambda_dce0ae6a0e309c850bd90e1fc561b21b___(
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
    return lambda_703197410533bd8a2dcb4add4cb7fb52_::operator()(v6);
  }
  return result;
}
