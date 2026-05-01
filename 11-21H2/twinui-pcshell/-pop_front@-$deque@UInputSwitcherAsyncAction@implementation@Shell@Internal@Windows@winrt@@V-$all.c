/*
 * XREFs of ?pop_front@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAXXZ @ 0x1805E2C78
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBAXXZ @ 0x1805E0BBC (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBAXXZ.c)
 *     ?CompleteShowAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805E1070 (-CompleteShowAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x1805E1934 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::pop_front(
        _QWORD *a1)
{
  __int64 v2; // rdi
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = *(_QWORD *)(a1[1] + 8 * (a1[3] & (a1[2] - 1LL)));
  v3 = *(std::_Ref_count_base **)(v2 + 40);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = *(std::_Ref_count_base **)(v2 + 24);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
  else
    ++a1[3];
}
