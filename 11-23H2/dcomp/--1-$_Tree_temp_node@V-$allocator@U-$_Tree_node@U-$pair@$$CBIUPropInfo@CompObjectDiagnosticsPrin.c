/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18019C7B4
 * Callers:
 *     ??$_Try_emplace@AEBIAEAPEAUHSTRING__@@@?$map@IUPropInfo@CompObjectDiagnosticsPrincipal@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@_N@1@AEBIAEAPEAUHSTRING__@@@Z @ 0x18019C3D4 (--$_Try_emplace@AEBIAEAPEAUHSTRING__@@@-$map@IUPropInfo@CompObjectDiagnosticsPrincipal@@U-$less@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1PropInfo@CompObjectDiagnosticsPrincipal@@QEAA@XZ @ 0x18019CA68 (--1PropInfo@CompObjectDiagnosticsPrincipal@@QEAA@XZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    CompObjectDiagnosticsPrincipal::PropInfo::~PropInfo((CompObjectDiagnosticsPrincipal::PropInfo *)(v2 + 40));
  v3 = *(void **)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 0x60uLL);
}
