/*
 * XREFs of ??1?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@QEAA@XZ @ 0x1802DF4D0
 * Callers:
 *     _CApplicationManager::_HandleCreation_EnsureApplicationView_::_1_::dtor$2 @ 0x18021DAC8 (_CApplicationManager--_HandleCreation_EnsureApplicationView_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleCreation_EnsureApplicationView_::_1_::dtor$3 @ 0x18021DADA (_CApplicationManager--_HandleCreation_EnsureApplicationView_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<COperationWaiter>::~ComPtr<COperationWaiter>(volatile signed __int32 **a1)
{
  return Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(a1);
}
