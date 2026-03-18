/*
 * XREFs of ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18007FB64
 * Callers:
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x180022734 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 * Callees:
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18007FC60 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 */

_QWORD *__fastcall CDrawListBatchManager::CloseCurrentDrawListEntryBatch(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v7; // eax
  __int64 v8; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 )
  {
    if ( *(_QWORD *)(a1 + 136) )
    {
      CBatchOptimizer::Flush(*(CBatchOptimizer **)(a1 + 136));
      v4 = *(_QWORD *)(a1 + 128);
    }
    v7 = *(_DWORD *)(a1 + 24);
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_DWORD *)(v4 + 52) = v7;
    v8 = *(_QWORD *)(a1 + 128);
    *(_QWORD *)(a1 + 128) = 0LL;
    v3 = v8;
  }
  *a2 = v3;
  return a2;
}
