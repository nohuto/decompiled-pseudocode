/*
 * XREFs of _lambda_e1015264fe649a72270f58c4e4d07372_::_lambda_e1015264fe649a72270f58c4e4d07372_ @ 0x180281744
 * Callers:
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180730220 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1801BC6D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall lambda_e1015264fe649a72270f58c4e4d07372_::_lambda_e1015264fe649a72270f58c4e4d07372_(
        _QWORD *a1,
        _QWORD *a2,
        winrt::impl **a3)
{
  __int64 v4; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    *a1 = *a2;
    a1[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  }
  winrt::hstring::hstring((winrt::hstring *)(a1 + 2), a3, (unsigned int)a3);
  return a1;
}
