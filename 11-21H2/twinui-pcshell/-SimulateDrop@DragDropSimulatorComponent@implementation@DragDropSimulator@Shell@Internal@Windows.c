/*
 * XREFs of ?SimulateDrop@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@67@AEBUIInspectable@967@W4DragDropSimulatorDropPoint@34567@_N@Z @ 0x1801BA134
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$1 @ 0x1801B8D00 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B8D00.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$1 @ 0x1801B9170 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B9170.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_InitCoro$2 @ 0x1801B94A4 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B94A4.c)
 */

winrt::Windows::Foundation::IUnknown *winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 a3,
        int a4,
        ...)
{
  void *v7; // rax
  int v9; // [rsp+9F8h] [rbp+10h] BYREF
  int v10; // [rsp+A08h] [rbp+20h] BYREF
  va_list va; // [rsp+A10h] [rbp+28h] BYREF

  va_start(va, a4);
  v10 = a4;
  v7 = operator new(0x989uLL);
  v9 = 0;
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__InitCoro_2(
    &v9,
    (__int64)v7 + 112,
    a2,
    a3,
    &v10,
    va,
    a1);
  return a2;
}
