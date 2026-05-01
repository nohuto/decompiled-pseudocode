/*
 * XREFs of ?IsSupportedAsync@?$produce@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@@impl@winrt@@UEAAHPEAXHPEAPEAX@Z @ 0x18056DC10
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?IsSupportedAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@67@AEBUIInspectable@967@AEBW4DragDropSimulatorDropPoint@34567@@Z @ 0x1801B9424 (-IsSupportedAsync@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::IsSupportedAsync(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  __int64 v5; // rcx
  winrt::Windows::Foundation::IUnknown *v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  *a4 = 0LL;
  v5 = (a1 - 88) & -(__int64)(a1 != 0);
  try
  {
    v6 = winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync(
           v5,
           (winrt::Windows::Foundation::IUnknown *)&v9,
           (__int64)&v10,
           (__int64)&v11);
    v7 = *(_QWORD *)v6;
    *(_QWORD *)v6 = 0LL;
    *a4 = v7;
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v9);
  }
  return result;
}
