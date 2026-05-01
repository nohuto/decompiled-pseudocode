/*
 * XREFs of ??1CRPCTimeout@@QEAA@XZ @ 0x180396D3C
 * Callers:
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$3 @ 0x1802B3F19 (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$3.c)
 *     _CImmersiveApp::QueryService_::_1_::dtor$0 @ 0x1803C359A (_CImmersiveApp--QueryService_--_1_--dtor$0.c)
 *     __lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator()_::_1_::dtor$6 @ 0x1804DD30E (__lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator()_--_1_--dtor$6.c)
 *     __lambda_8b16b784198cc2ffe8f5be0ce118e36a_::operator()_::_1_::dtor$6 @ 0x1804E21D6 (__lambda_8b16b784198cc2ffe8f5be0ce118e36a_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRPCTimeout::~CRPCTimeout(CRPCTimeout *this)
{
  CBaseRPCTimeout::Disarm(this);
}
