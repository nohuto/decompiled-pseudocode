/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18003189C
 * Callers:
 *     ??1?$map@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@std@@QEAA@XZ @ 0x180031AE0 (--1-$map@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@@s.c)
 *     ??1GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ @ 0x180031F1C (--1GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAA@XZ.c)
 *     ??1ResourceManager@Engine@Spectre@@QEAA@XZ @ 0x1800700C4 (--1ResourceManager@Engine@Spectre@@QEAA@XZ.c)
 *     ??1RenderOutputD3D11@D3D11@Engine@Spectre@@MEAA@XZ @ 0x1800C8FA0 (--1RenderOutputD3D11@D3D11@Engine@Spectre@@MEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@1@@Z @ 0x18002EA80 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_K_K@std@@PEAX@std@@@std@@@-$_Tree_val@U-$.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,unsigned __int64>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
