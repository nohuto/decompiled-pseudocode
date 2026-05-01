/*
 * XREFs of ??$_Emplace_back_internal@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX$$QEAUInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x1802EAED4
 * Callers:
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x1806FFDB8 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180680774 (-_Growmap@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allo.c)
 */

char __fastcall std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::_Emplace_back_internal<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  char result; // al

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::_Growmap();
  v4 = a1[2] - 1LL;
  a1[3] &= v4;
  v5 = v4 & (a1[4] + a1[3]);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
    *(_QWORD *)(a1[1] + 8 * v5) = operator new(0x38uLL);
  v6 = *(_QWORD *)(a1[1] + 8 * v5);
  *(_DWORD *)v6 = *(_DWORD *)a2;
  *(_QWORD *)(v6 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_QWORD *)(v6 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v6 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v6 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_DWORD *)(v6 + 48) = *(_DWORD *)(a2 + 48);
  *(_BYTE *)(v6 + 52) = *(_BYTE *)(a2 + 52);
  result = *(_BYTE *)(a2 + 53);
  *(_BYTE *)(v6 + 53) = result;
  ++a1[4];
  return result;
}
