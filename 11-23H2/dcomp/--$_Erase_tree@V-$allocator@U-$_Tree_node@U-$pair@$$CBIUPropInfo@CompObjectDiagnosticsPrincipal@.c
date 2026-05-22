/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@1@@Z @ 0x18019C360
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@1@@Z @ 0x18019C360 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@.c)
 *     ??1CompObjectDiagnosticsPrincipal@@EEAA@XZ @ 0x18019C7F0 (--1CompObjectDiagnosticsPrincipal@@EEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@1@@Z @ 0x18019C360 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@.c)
 *     ??1PropInfo@CompObjectDiagnosticsPrincipal@@QEAA@XZ @ 0x18019CA68 (--1PropInfo@CompObjectDiagnosticsPrincipal@@QEAA@XZ.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rdi
  __int64 *v6; // rbx

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>,void *>>>(
      a1,
      a2,
      v3[2]);
    v6 = v3;
    v3 = (__int64 *)*v3;
    CompObjectDiagnosticsPrincipal::PropInfo::~PropInfo((CompObjectDiagnosticsPrincipal::PropInfo *)(v6 + 5));
    std::_Deallocate<16,0>(v6, 0x60uLL);
  }
}
