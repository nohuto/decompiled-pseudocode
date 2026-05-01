/*
 * XREFs of ?Invoke@?$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_c4bd4ad648bfd42f94cd1d5bf0ba8c80_@@@impl@winrt@@UEAAHXZ @ 0x1805E1F90
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteShowAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805E1070 (-CompleteShowAction@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::System::DispatcherQueueHandler,_lambda_c4bd4ad648bfd42f94cd1d5bf0ba8c80_>::Invoke(
        __int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    if ( *(_DWORD *)(a1 + 16) == -536870911 )
      winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CompleteShowAction(*(winrt::Windows::Internal::Shell::implementation::InputSwitchingManager **)(a1 + 8));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v2);
  }
  return result;
}
