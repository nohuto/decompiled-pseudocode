/*
 * XREFs of ??$_Emplace_back_internal@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX$$QEAUInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x1805DF724
 * Callers:
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x1805E1934 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1805E25EC (-_Growmap@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allo.c)
 */

char __fastcall std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::_Emplace_back_internal<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  char result; // al

  v4 = a1[4];
  v5 = a1[2];
  if ( v5 <= v4 + 1 )
  {
    std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::_Growmap(a1);
    v5 = a1[2];
    v4 = a1[4];
  }
  a1[3] &= v5 - 1;
  v6 = v5 - 1;
  v7 = a1[1];
  v8 = v6 & (v4 + a1[3]);
  if ( !*(_QWORD *)(v7 + 8 * v8) )
  {
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v7 = a1[1];
  }
  v9 = *(_QWORD *)(v7 + 8 * v8);
  *(_DWORD *)v9 = *(_DWORD *)a2;
  *(_QWORD *)(v9 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_QWORD *)(v9 + 24) = 0LL;
  *(_QWORD *)(v9 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v9 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_QWORD *)(v9 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v9 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_DWORD *)(v9 + 48) = *(_DWORD *)(a2 + 48);
  *(_BYTE *)(v9 + 52) = *(_BYTE *)(a2 + 52);
  result = *(_BYTE *)(a2 + 53);
  *(_BYTE *)(v9 + 53) = result;
  ++a1[4];
  return result;
}
