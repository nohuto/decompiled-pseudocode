/*
 * XREFs of ?empty@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEBA_NXZ @ 0x180083214
 * Callers:
 *     ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180083024 (-Rundown@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::empty(
        _QWORD *a1)
{
  return *a1 == (_QWORD)a1;
}
