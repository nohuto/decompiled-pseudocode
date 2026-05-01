/*
 * XREFs of ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x18001CD88
 * Callers:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x18001BAC4 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x18001CD10 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z.c)
 * Callees:
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x18001CE48 (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // di
  unsigned __int64 v12; // rsi
  __int64 result; // rax

  v4 = a1[4];
  v5 = v4;
  v6 = a1[3];
  if ( (((_BYTE)v4 + (_BYTE)v6) & 1) == 0 && a1[2] <= (unsigned __int64)(v4 + 2) >> 1 )
  {
    std::deque<unsigned __int64>::_Growmap(a1, a2, v6, v4);
    v6 = a1[3];
    v5 = a1[4];
  }
  v7 = a1[2];
  v8 = v6 & (2 * v7 - 1);
  v9 = v7 - 1;
  a1[3] = v8;
  v10 = a1[1];
  v11 = v8 + v5;
  v12 = ((unsigned __int64)(v8 + v5) >> 1) & v9;
  if ( !*(_QWORD *)(v10 + 8 * v12) )
  {
    *(_QWORD *)(a1[1] + 8 * v12) = std::_Allocate<16,std::_Default_allocate_traits,0>(16LL);
    v10 = a1[1];
  }
  result = *a2;
  *(_QWORD *)(*(_QWORD *)(v10 + 8 * v12) + 8LL * (v11 & 1)) = *a2;
  ++a1[4];
  return result;
}
