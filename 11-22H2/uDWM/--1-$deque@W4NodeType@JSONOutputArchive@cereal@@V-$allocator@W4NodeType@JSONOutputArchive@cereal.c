/*
 * XREFs of ??1?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@QEAA@XZ @ 0x1800F1244
 * Callers:
 *     ??1?$stack@IV?$deque@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x1800F13D0 (--1-$stack@IV-$deque@IV-$allocator@I@std@@@std@@@std@@QEAA@XZ.c)
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x1800F167C (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::deque<enum cereal::JSONOutputArchive::NodeType>::~deque<enum cereal::JSONOutputArchive::NodeType>(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      break;
    v3 = v2 - 1;
    *(_QWORD *)(a1 + 32) = v3;
    if ( !v3 )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 16);
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, 0x10uLL);
  }
  v6 = *(void **)(a1 + 8);
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8LL * *(_QWORD *)(a1 + 16));
  v7 = *(void **)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  return std::_Deallocate<16,0>(v7, 0x10uLL);
}
