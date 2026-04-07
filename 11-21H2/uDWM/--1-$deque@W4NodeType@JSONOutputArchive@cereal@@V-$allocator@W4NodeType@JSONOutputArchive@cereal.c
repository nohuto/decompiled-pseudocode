/*
 * XREFs of ??1?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@QEAA@XZ @ 0x1800433F4
 * Callers:
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x180043324 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     ??1?$stack@IV?$deque@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x1800F34C0 (--1-$stack@IV-$deque@IV-$allocator@I@std@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::deque<enum cereal::JSONOutputArchive::NodeType>::~deque<enum cereal::JSONOutputArchive::NodeType>(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  while ( v1 )
  {
    *(_QWORD *)(a1 + 32) = --v1;
    if ( !v1 )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 16);
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v3);
    if ( v4 )
      std::_Deallocate<16,0>(v4, 0x10uLL);
  }
  v5 = *(void **)(a1 + 8);
  if ( v5 )
    std::_Deallocate<16,0>(v5, 8LL * *(_QWORD *)(a1 + 16));
  v6 = *(void **)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  return std::_Deallocate<16,0>(v6, 0x10uLL);
}
