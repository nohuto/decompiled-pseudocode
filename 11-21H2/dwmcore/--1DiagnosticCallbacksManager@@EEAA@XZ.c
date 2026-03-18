/*
 * XREFs of ??1DiagnosticCallbacksManager@@EEAA@XZ @ 0x180196528
 * Callers:
 *     ??_EDiagnosticCallbacksManager@@EEAAPEAXI@Z @ 0x1801967B0 (--_EDiagnosticCallbacksManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180195F78 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootProx.c)
 */

void __fastcall DiagnosticCallbacksManager::~DiagnosticCallbacksManager(DiagnosticCallbacksManager *this)
{
  void **v1; // rbx
  __int64 v3; // rcx

  v1 = (void **)((char *)this + 240);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>,void *>>>(
    (__int64)this + 240,
    (__int64)this + 240,
    *(_QWORD *)(*((_QWORD *)this + 30) + 8LL));
  std::_Deallocate<16,0>(*v1, 0x30uLL);
  v3 = *((_QWORD *)this + 29);
  if ( v3 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::BamoImpl::BaseBamoConnectionImpl::~BaseBamoConnectionImpl((DiagnosticCallbacksManager *)((char *)this + 8));
}
