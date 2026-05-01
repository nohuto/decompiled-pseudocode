/*
 * XREFs of ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x180177774
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18001B964 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x180177748 (--1-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$deque@_KV?$allocator@_K@std@@@std@@@std@@QEAA@XZ @ 0x180577B64 (--1-$_Tidy_guard@V-$deque@_KV-$allocator@_K@std@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<unsigned __int64>::_Tidy(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  void *v4; // rcx
  void *v5; // rcx

  v1 = a1[4];
  while ( v1 )
  {
    a1[4] = --v1;
    if ( !v1 )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v5 = *(void **)(a1[1] + 8 * v3);
    if ( v5 )
      std::_Deallocate<16,0>(v5, 0x10uLL);
  }
  v4 = (void *)a1[1];
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
