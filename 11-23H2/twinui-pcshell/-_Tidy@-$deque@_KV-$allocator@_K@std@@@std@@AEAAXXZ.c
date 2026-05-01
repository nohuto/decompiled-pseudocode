/*
 * XREFs of ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x180145244
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x180031A50 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x180145218 (--1-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$deque@_KV?$allocator@_K@std@@@std@@@std@@QEAA@XZ @ 0x180636794 (--1-$_Tidy_guard@V-$deque@_KV-$allocator@_K@std@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::deque<unsigned __int64>::_Tidy(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx

  while ( 1 )
  {
    result = a1[4];
    if ( !result )
      break;
    v5 = result - 1;
    a1[4] = v5;
    if ( !v5 )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    result = a1[1];
    --v3;
    v6 = *(_QWORD *)(result + 8 * v3);
    if ( v6 )
      result = std::_Deallocate<16,0>(v6, 16LL);
  }
  v4 = a1[1];
  if ( v4 )
    result = std::_Deallocate<16,0>(v4, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
  return result;
}
