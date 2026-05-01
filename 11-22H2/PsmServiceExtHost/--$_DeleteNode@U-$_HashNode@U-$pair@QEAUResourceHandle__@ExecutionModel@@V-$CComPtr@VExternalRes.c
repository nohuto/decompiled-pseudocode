/*
 * XREFs of ??$_DeleteNode@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@?$_ContainerBase@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@utl@@IEAAXPEAU?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@1@@Z @ 0x180014070
 * Callers:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003AE4C (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ??$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@$0A@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@utl@@_N@1@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@4@@Z @ 0x18004F66C (--$emplace@AEAPEAUResourceHandle__@ExecutionModel@@AEAPEAVExternalResourceSet@2@$0A@@-$_HashTabl.c)
 * Callees:
 *     ??1?$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ @ 0x180013CF4 (--1-$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ.c)
 */

void __fastcall utl::_ContainerBase<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>::_DeleteNode<utl::_HashNode<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>>(
        __int64 a1,
        __int64 *a2)
{
  ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>(a2 + 4);
  operator delete(a2);
}
