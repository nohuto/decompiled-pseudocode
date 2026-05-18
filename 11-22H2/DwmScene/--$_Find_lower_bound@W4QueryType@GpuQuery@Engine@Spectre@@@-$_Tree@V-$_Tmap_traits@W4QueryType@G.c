/*
 * XREFs of ??$_Find_lower_bound@W4QueryType@GpuQuery@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@U?$less@W4QueryType@GpuQuery@Engine@Spectre@@@6@V?$allocator@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@PEAX@std@@@1@AEBW4QueryType@GpuQuery@Engine@Spectre@@@Z @ 0x180024D90
 * Callers:
 *     ??$_Try_emplace@AEBW4QueryType@GpuQuery@Engine@Spectre@@$$V@?$map@W4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@U?$less@W4QueryType@GpuQuery@Engine@Spectre@@@6@V?$allocator@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@PEAX@std@@_N@1@AEBW4QueryType@GpuQuery@Engine@Spectre@@@Z @ 0x180024E1C (--$_Try_emplace@AEBW4QueryType@GpuQuery@Engine@Spectre@@$$V@-$map@W4QueryType@GpuQuery@Engine@Sp.c)
 *     ??$_Try_emplace@W4QueryType@GpuQuery@Engine@Spectre@@$$V@?$map@W4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@U?$less@W4QueryType@GpuQuery@Engine@Spectre@@@6@V?$allocator@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4QueryType@GpuQuery@Engine@Spectre@@V?$stack@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$vector@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VGpuQuery@Engine@Spectre@@@std@@@2@@2@@std@@@std@@PEAX@std@@_N@1@$$QEAW4QueryType@GpuQuery@Engine@Spectre@@@Z @ 0x180024F1C (--$_Try_emplace@W4QueryType@GpuQuery@Engine@Spectre@@$$V@-$map@W4QueryType@GpuQuery@Engine@Spect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum Spectre::Engine::GpuQuery::QueryType,std::stack<std::shared_ptr<Spectre::Engine::GpuQuery>,std::vector<std::shared_ptr<Spectre::Engine::GpuQuery>>>,std::less<enum Spectre::Engine::GpuQuery::QueryType>,std::allocator<std::pair<enum Spectre::Engine::GpuQuery::QueryType const,std::stack<std::shared_ptr<Spectre::Engine::GpuQuery>,std::vector<std::shared_ptr<Spectre::Engine::GpuQuery>>>>>,0>>::_Find_lower_bound<enum Spectre::Engine::GpuQuery::QueryType>(
        __int64 *a1,
        __int64 a2,
        int *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  int v5; // r8d
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( *((_DWORD *)v4 + 8) >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
