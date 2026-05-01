/*
 * XREFs of ?push_front@?$deque@_KV?$allocator@_K@std@@@std@@QEAAXAEB_K@Z @ 0x180579644
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18001B964 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x180577D64 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 * Callees:
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x18001CE48 (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::deque<unsigned __int64>::push_front(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 result; // rax

  v2 = a1[3];
  if ( (v2 & 1) == 0 && a1[2] <= (unsigned __int64)(a1[4] + 2LL) >> 1 )
  {
    std::deque<unsigned __int64>::_Growmap(a1);
    v2 = a1[3];
  }
  v5 = a1[2];
  v6 = 2 * v5;
  v7 = v2 & (2 * v5 - 1);
  v8 = v5 - 1;
  a1[3] = v7;
  v9 = a1[1];
  if ( !v7 )
    v7 = v6;
  v10 = v7 - 1;
  v11 = (v10 >> 1) & v8;
  if ( !*(_QWORD *)(v9 + 8 * v11) )
  {
    *(_QWORD *)(a1[1] + 8 * v11) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v9 = a1[1];
  }
  result = *a2;
  *(_QWORD *)(*(_QWORD *)(v9 + 8 * v11) + 8 * (v10 & 1)) = *a2;
  a1[3] = v10;
  ++a1[4];
  return result;
}
