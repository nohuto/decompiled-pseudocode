/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@AEAPEAUHSTRING__@@@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@AEAPEAUHSTRING__@@@1@@Z @ 0x18019BD30
 * Callers:
 *     ??$_Try_emplace@AEBIAEAPEAUHSTRING__@@@?$map@IUPropInfo@CompObjectDiagnosticsPrincipal@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@_N@1@AEBIAEAPEAUHSTRING__@@@Z @ 0x18019C3D4 (--$_Try_emplace@AEBIAEAPEAUHSTRING__@@@-$map@IUPropInfo@CompObjectDiagnosticsPrincipal@@U-$less@.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  __int64 v5; // rax
  int **v6; // rcx
  HSTRING **v7; // rdx
  HSTRING *v8; // rdx
  int v9; // r8d
  __int64 v10; // rcx
  HSTRING v11; // rax
  __int64 v12; // rcx
  HSTRING v14; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  int **v16; // [rsp+50h] [rbp+28h]
  HSTRING **v17; // [rsp+58h] [rbp+30h]
  va_list va1; // [rsp+60h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, HSTRING);
  v16 = va_arg(va1, int **);
  v17 = va_arg(va1, HSTRING **);
  *a1 = a2;
  a1[1] = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  v6 = v16;
  v7 = v17;
  a1[1] = v5;
  v8 = *v7;
  v9 = **v6;
  v10 = v5 + 40;
  *(_DWORD *)(v5 + 32) = v9;
  v11 = *v8;
  *(_QWORD *)v10 = 0LL;
  *(_DWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)(v10 + 24) = 0LL;
  *(_QWORD *)(v10 + 32) = 0LL;
  *(_QWORD *)(v10 + 40) = 0LL;
  *(_QWORD *)(v10 + 48) = 0LL;
  v14 = v11;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)v10, (HSTRING *)va);
  v12 = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
    *(_BYTE *)(a1[1] + v12++ + 24) = 0;
  while ( v12 < 2 );
  return a1;
}
