/*
 * XREFs of ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x1800118AC
 * Callers:
 *     ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18008289C (--1ResourceManager@ExecutionModel@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>(__int64 a1)
{
  return ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>(a1);
}
