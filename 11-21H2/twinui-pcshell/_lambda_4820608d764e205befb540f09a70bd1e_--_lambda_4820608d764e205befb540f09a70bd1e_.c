/*
 * XREFs of _lambda_4820608d764e205befb540f09a70bd1e_::_lambda_4820608d764e205befb540f09a70bd1e_ @ 0x1805B35F4
 * Callers:
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805B4898 (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?add_ref@?$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ @ 0x18004159C (-add_ref@-$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall lambda_4820608d764e205befb540f09a70bd1e_::_lambda_4820608d764e205befb540f09a70bd1e_(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3,
        _OWORD *a4,
        __int64 *a5,
        __int64 *a6)
{
  __int128 v6; // xmm0
  __int64 v8; // rax
  __int64 *v9; // rcx

  v6 = *a2;
  *(_QWORD *)(a1 + 16) = *a3;
  *(_OWORD *)a1 = v6;
  v8 = *a5;
  *(_OWORD *)(a1 + 24) = *a4;
  *(_QWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 48) = a5[1];
  *(_QWORD *)(a1 + 56) = a5[2];
  *a5 = 0LL;
  v9 = (__int64 *)(a1 + 64);
  a5[1] = 0LL;
  a5[2] = 0LL;
  *v9 = *a6;
  winrt::com_ptr<IServiceProvider>::add_ref(v9);
  return a1;
}
