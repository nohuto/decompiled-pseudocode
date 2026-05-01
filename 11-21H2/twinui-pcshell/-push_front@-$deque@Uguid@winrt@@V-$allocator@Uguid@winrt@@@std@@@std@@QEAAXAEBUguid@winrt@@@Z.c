/*
 * XREFs of ?push_front@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAXAEBUguid@winrt@@@Z @ 0x18057A9FC
 * Callers:
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x180238AF6 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 * Callees:
 *     ?_Growmap@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z @ 0x18001D8E4 (-_Growmap@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_OWORD *__fastcall std::deque<winrt::guid>::push_front(_QWORD *a1, _OWORD *a2)
{
  unsigned __int64 v4; // rcx
  bool v5; // zf
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  _OWORD *result; // rax

  v4 = a1[2];
  if ( v4 <= a1[4] + 1LL )
  {
    std::deque<winrt::guid>::_Growmap(a1);
    v4 = a1[2];
  }
  v5 = ((v4 - 1) & a1[3]) == 0;
  a1[3] &= v4 - 1;
  v6 = a1[3];
  v7 = a1[1];
  if ( v5 )
    v6 = v4;
  v8 = v6 - 1;
  v9 = v8 & (v4 - 1);
  if ( !*(_QWORD *)(v7 + 8 * v9) )
  {
    *(_QWORD *)(a1[1] + 8 * v9) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v7 = a1[1];
  }
  result = *(_OWORD **)(v7 + 8 * v9);
  *result = *a2;
  a1[3] = v8;
  ++a1[4];
  return result;
}
